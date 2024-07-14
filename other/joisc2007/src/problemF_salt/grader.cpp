// grader for local testing
#include "grader.h"
#include <stdio.h>
#include <stdlib.h>
#include "salt.h"

static int N;
static bool V[16];
static int E[14][2];
static int V_size;
static int E_size;
static void proc(int u, int v, const char *player) {
	if (u == v) {
		fprintf(stderr, "%s: remove vertex %d\n", player, u);
		if (u <= 0 || u > N || !V[u]) {
			fprintf(stderr, "ERROR: vertex %d does not exist\n", u);
			exit(1);
		}
		V[u] = false;
		for (int i = 0; i < N - 1; i++) {
			if (E[i][0] == u || E[i][1] == u) {
				E[i][0] = E[i][1] = 0;
				E_size--;
			}
		}
		V_size--;
	} else if (u < v) {
		fprintf(stderr, "%s: remove edge %d-%d\n", player, u, v);
		if (u <= 0 || u > N || !V[u]) {
			fprintf(stderr, "ERROR: vertex %d does not exist\n", u);
			exit(1);
		}
		if (v <= 0 || v > N || !V[v]) {
			fprintf(stderr, "ERROR: vertex %d does not exist\n", v);
			exit(1);
		}
		int eid = -1;
		for (int i = 0; i < N - 1; i++) {
			if (E[i][0] == u && E[i][1] == v) {
				eid = i;
				break;
			}
		}
		if (eid == -1) {
			fprintf(stderr, "ERROR: edge %d-%d does not exist\n", u, v);
			exit(1);
		}
		E[eid][0] = E[eid][1] = 0;
		E_size--;
	} else {
		fprintf(stderr, "error: u should be <= v, but %d > %d\n", u, v);
		exit(1);
	}
}
void turn(int u, int v, int *ru, int *rv) {
	proc(u, v, "player");
	if (V_size == 0) {
		fprintf(stderr, "AC: player won\n");
		exit(0);
	}
	if (rand() % 2 == 0 && E_size > 0) {
		int r = rand() % E_size;
		int eid = 0;
		while (true) {
			if (E[eid][0] == 0) {
				eid++;
				continue;
			}
			if (r == 0) break;
			r--;
			eid++;
		}
		*ru = E[eid][0];
		*rv = E[eid][1];
		proc(E[eid][0], E[eid][1], "COM");
	} else {
		int r = rand() % V_size;
		int v = 1;
		while (true) {
			if (!V[v]) {
				v++;
				continue;
			}
			if (r == 0) break;
			r--;
			v++;
		}
		proc(v, v, "COM");
		*ru = *rv = v;
	}
	if (V_size == 0) {
		fprintf(stderr, "WA: COM won\n");
		exit(1);
	}
}

int main() {
	if (scanf("%d", &N) < 1) {
		fprintf(stderr, "read error\n");
		return 1;
	}
	if (N < 1 || N > 15) {
		fprintf(stderr, "N should be between 1 and 15\n");
		return 1;
	}
	for (int i = 1; i <= N; i++) V[i] = true;
	V_size = N;
	E_size = N - 1;
	int E2[14][2];
	for (int i = 0; i < N - 1; i++) {
		if (scanf("%d%d", &E[i][0], &E[i][1]) < 2) {
			fprintf(stderr, "read error\n");
			return 1;
		}
		if (!(1 <= E[i][0] && E[i][0] < E[i][1] && E[i][1] <= N)) {
			fprintf(stderr, "edge condition failed\n");
			return 1;
		}
		E2[i][0] = E[i][0];
		E2[i][1] = E[i][1];
	}
	play(N, E2);
	fprintf(stderr, "WA: incomplete game\n");
	return 1;
}
