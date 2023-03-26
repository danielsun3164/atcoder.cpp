#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem053";

const char QUESTION = '?';
const char ANSWER = '!';

class Command2 {
public:
	int ExitStatus = 0;
	string Command;
	string StdIn;
	string StdOut;
	string StdErr;
	vector<vector<int>> data;

	void execute() {
		const int READ_END = 0;
		const int WRITE_END = 1;

		int infd[2] = { 0, 0 };
		int outfd[2] = { 0, 0 };
		int errfd[2] = { 0, 0 };

		auto cleanup = [&]() {
			close(infd[READ_END]);
			close(infd[WRITE_END]);

			close(outfd[READ_END]);
			close(outfd[WRITE_END]);

			close(errfd[READ_END]);
			close(errfd[WRITE_END]);
		};

		auto rc = pipe(infd);
		if (rc < 0) {
			throw runtime_error(strerror(errno));
		}

		rc = pipe(outfd);
		if (rc < 0) {
			close(infd[READ_END]);
			close(infd[WRITE_END]);
			throw runtime_error(strerror(errno));
		}

		rc = pipe(errfd);
		if (rc < 0) {
			close(infd[READ_END]);
			close(infd[WRITE_END]);

			close(outfd[READ_END]);
			close(outfd[WRITE_END]);
			throw runtime_error(strerror(errno));
		}

		auto pid = fork();
		if (pid > 0) { // PARENT
			close(infd[READ_END]);	// Parent does not read from stdin
			close(outfd[WRITE_END]);  // Parent does not write to stdout
			close(errfd[WRITE_END]);  // Parent does not write to stderr

			istringstream out_input;
			array<char, 256> buffer;
			ssize_t bytes = 0;
			StdIn = to_string(data.size()) + "\n";

			for (vector<int> v : data) {
				StdIn += to_string(v.size()) + "\n";
				int count = 0;
				while (true) {
					if (write(infd[WRITE_END], StdIn.data(), StdIn.size()) < 0) {
						throw runtime_error(strerror(errno));
					}

					if ((bytes = read(outfd[READ_END], buffer.data(), buffer.size())) < 0) {
						throw runtime_error(strerror(errno));
					}
					out_input.rdbuf()->pubsetbuf(buffer.data(), bytes);
					char mark;
					out_input >> mark;
					if (QUESTION == mark) {
						int i;
						out_input >> i;
						i--;
						ASSERT_TRUE((0 <= i) && (i < int(v.size())));
						StdIn = to_string(v[i]) + "\n";
						count++;
					} else if (ANSWER == mark) {
						int answer;
						out_input >> answer;
						ASSERT_EQ(*max_element(v.begin(), v.end()), answer);
						StdIn = "";
						break;
					} else {
						cout << "mark=" << mark << endl;
						FAIL();
					}
				}
				ASSERT_LE(count, 15);
			}
			close(infd[WRITE_END]); // Done writing
		} else if (pid == 0) { // CHILD
			dup2(infd[READ_END], STDIN_FILENO);
			dup2(outfd[WRITE_END], STDOUT_FILENO);
			dup2(errfd[WRITE_END], STDERR_FILENO);

			close(infd[WRITE_END]); // Child does not write to stdin
			close(outfd[READ_END]); // Child does not read from stdout
			close(errfd[READ_END]); // Child does not read from stderr

			execl("/bin/bash", "bash", "-c", Command.c_str(), nullptr);
			exit(EXIT_SUCCESS);
		}

		// PARENT
		if (pid < 0) {
			cleanup();
			throw runtime_error("Failed to fork");
		}

		int status = 0;
		waitpid(pid, &status, 0);

		if (WIFEXITED(status)) {
			ExitStatus = WEXITSTATUS(status);
		}

		array<char, 256> buffer;
		ssize_t bytes = 0;
		do {
			bytes = read(errfd[READ_END], buffer.data(), buffer.size());
			StdErr.append(buffer.data(), bytes);
		} while (bytes > 0);

		cleanup();
	}
}
;

void check(vector<vector<int>> data) {
	Command2 cmd;
	cmd.Command = PATH + COMMAND;
	cmd.data = data;
	cmd.execute();
}

TEST(practice_problem053, case1) {
	check(vector<vector<int>> { { 1, 2, 3, 4, 5, 6, 9, 1 } });
}

TEST(practice_problem053, case2) {
	check(vector<vector<int>> { { 0 }, { 1000000000 } });
}

TEST(practice_problem053, case3) {
	check(
			vector<vector<int>> { { 598774, 644286, 1101376, 3674413, 4816056, 6435548, 6628083, 9550349, 11011709,
					13448949, 13460453, 14148441, 15536434, 16137530, 16301186, 16684314, 17953839, 22325761, 22724031,
					23608393, 23877145, 24096522, 24820622, 24877138, 25567572, 26271222, 27345159, 27790614, 28169602,
					28530779, 29534987, 29953444, 33063024, 33267797, 34820876, 38326107, 39634940, 40258130, 40307666,
					40730087, 43777563, 44039646, 44047891, 45026899, 45497365, 46000393, 46310292, 48413880, 48642866,
					50753118, 54172255, 55795910, 55834558, 57105965, 57420983, 57642289, 57755328, 58429443, 58562001,
					58877112, 59615658, 60013109, 60807270, 61032842, 62605300, 62803144, 64980001, 65812018, 65830992,
					66111702, 66809244, 69944541, 70280547, 73881300, 74780143, 76970148, 77225774, 77714544, 78601838,
					79605107, 81845700, 83351618, 83860790, 83968367, 84386932, 85215153, 85312967, 86469955, 86609618,
					86639665, 86692054, 88437552, 89477410, 89670926, 90312298, 90878584, 90898538, 91130010, 91357397,
					91482777, 92205907, 93026839, 93862028, 94551513, 95520963, 98490160, 99906348, 100672139,
					101004781, 101828914, 103670506, 104641395, 104905019, 105735662, 105901037, 106150065, 106828320,
					107477205, 107861428, 108378676, 108548742, 109022840, 109802306, 110860675, 111692011, 112253305,
					113714523, 114242061, 115192101, 115626959, 116193519, 116196256, 117787935, 118139945, 118741463,
					120174917, 120674589, 120705669, 121829240, 122469336, 122888988, 124009138, 124251886, 124935520,
					125216545, 125634416, 126541720, 126982598, 127396936, 127713228, 129128513, 130836403, 130918201,
					132514498, 133495348, 134046110, 134465121, 134715218, 137928420, 138098641, 138452124, 139408728,
					140819687, 141411839, 141446846, 142996240, 144066314, 144154470, 145858716, 145982267, 146010684,
					146448662, 146880628, 146927956, 148346959, 149445487, 150580527, 151917274, 152224654, 155102113,
					155220988, 156063943, 156394221, 158071189, 158880146, 160244167, 160685650, 161022991, 162945723,
					164863452, 165478930, 166550457, 170779942, 171723601, 173957432, 175045750, 175786430, 175861185,
					176631905, 177220923, 177603093, 177824798, 178813764, 180532232, 181588218, 181705652, 181724305,
					182597663, 183108669, 183197147, 184044570, 184448499, 184927208, 185820583, 187452098, 187967979,
					189689028, 192114645, 193368458, 193626151, 195402681, 195918918, 196045167, 196451880, 196537291,
					197118208, 197724783, 198195947, 198349229, 198492768, 198860155, 200521197, 200718083, 201263216,
					201459880, 203524527, 204134260, 204297242, 207848524, 208369846, 208616125, 210063519, 211123487,
					212039063, 212248817, 212263074, 212399808, 212700097, 212826267, 213547110, 214705017, 216499891,
					216652753, 216834436, 217227534, 217902457, 218225740, 219279287, 219590020, 219685205, 219877534,
					220539168, 220638841, 221227299, 222631696, 224177916, 224694805, 225111173, 226585493, 226840629,
					227029104, 228805367, 229087824, 232278932, 232503205, 232710645, 233030598, 234991368, 235512802,
					236344604, 239044293, 239332621, 241211849, 241490322, 241596201, 242614224, 242838542, 244657223,
					245736909, 245796681, 245899446, 247350681, 248747277, 249612570, 250048090, 250205269, 250763014,
					250841648, 251642818, 252364656, 253236562, 255108896, 256386651, 257311293, 258360072, 259271335,
					259284419, 260751688, 262430364, 265373775, 266923177, 267495363, 267715667, 268738076, 269970056,
					270047731, 271180687, 271286939, 272233576, 272931562, 275056275, 275148470, 276058225, 276956813,
					278701742, 281080127, 281176570, 281375323, 282569406, 283191917, 283639809, 285135599, 285603379,
					286096405, 288131931, 289745949, 291270503, 291282660, 291455740, 291910841, 293533435, 294004581,
					294755176, 295057412, 296446058, 298663598, 300013519, 302611278, 303669702, 304047442, 304890053,
					305401219, 307157118, 309076262, 309679347, 310117273, 312323592, 313353391, 313532005, 318449545,
					318527404, 319071520, 319464761, 321636234, 321769385, 321983062, 322589913, 323067541, 323161893,
					323738725, 325719645, 326978871, 328927694, 330670426, 331016611, 331662290, 333649454, 333680475,
					333976969, 335301114, 336783312, 337052114, 337783630, 337790691, 338232295, 338772971, 340480603,
					340924611, 340933812, 344906907, 345300762, 345579883, 345651526, 346220613, 346284142, 347479602,
					347540251, 348759459, 349547107, 352801133, 353677651, 355005314, 357008977, 357243369, 360142837,
					362545753, 364048678, 364993055, 365281923, 365464815, 366870295, 369831483, 372499975, 373619583,
					376909358, 377469328, 378678965, 379119624, 379969343, 380101181, 381190349, 381303998, 381721744,
					385626484, 386216330, 386716108, 387722836, 388225610, 389248858, 389801263, 390373108, 390944818,
					391739343, 392759947, 393411984, 393996454, 394315671, 395140538, 395299131, 395367062, 395596112,
					395647721, 395756212, 399039620, 400158943, 401027725, 402071301, 402605033, 403139104, 403671092,
					404890199, 405103441, 407455902, 407826047, 408586411, 409258127, 409785098, 410880817, 412342498,
					412508029, 415526441, 418113562, 418694282, 424213443, 424281988, 424759265, 425664300, 425711700,
					427037688, 429875136, 430048474, 431040306, 431618296, 432201887, 432732124, 433001002, 433686008,
					434409489, 434856675, 435222833, 435869871, 436638592, 437592605, 437808428, 439571905, 440687413,
					441025832, 441406402, 441466381, 443189207, 444954981, 445189634, 446946676, 447267211, 448280259,
					449532391, 449563999, 450095609, 450330973, 451985556, 455949868, 457562232, 457687090, 458281336,
					458450521, 459573821, 459813943, 460485667, 462379285, 463695485, 465030495, 466219325, 466743876,
					467146032, 467643509, 468126989, 468176566, 469315414, 471882572, 471989443, 473156675, 473290910,
					473312365, 475006764, 475076698, 475330138, 475611771, 476005740, 477281286, 480176677, 481664557,
					482091834, 482194607, 482248243, 482568238, 484483195, 486797258, 487580463, 490186194, 491525897,
					491773073, 492080362, 492425846, 492432596, 492745499, 494880747, 495690630, 497622121, 502949975,
					503649920, 503697299, 503748031, 503943994, 504158725, 504344900, 504853837, 507391324, 509204922,
					512162373, 512361471, 513285910, 514076395, 514565410, 516186066, 516196653, 516960783, 519714818,
					519916223, 520692688, 521606731, 522598976, 522894408, 523412320, 523680375, 525291543, 526117861,
					526601642, 526637981, 527805176, 530357466, 530757214, 531930214, 532437136, 532769426, 533163066,
					533330922, 533491054, 535084436, 535127363, 536849294, 537589671, 538126002, 538154867, 538404898,
					538631054, 538642865, 539222324, 541573144, 541659050, 542613787, 543834646, 545719847, 546232424,
					547187526, 547737968, 548606427, 549443821, 549536071, 550517132, 551259898, 551560988, 551729694,
					552932711, 554243058, 554515183, 554768803, 556027237, 556932675, 557293467, 557913037, 558038528,
					562334026, 562928935, 564554562, 564624271, 564863780, 565463499, 565923551, 566197122, 566587540,
					570784950, 570896289, 571904823, 572371405, 572423770, 572664255, 572688257, 572800266, 573757341,
					574963841, 575135595, 576536635, 576767383, 581866325, 583510316, 585417975, 585440775, 586205319,
					586387133, 587151653, 587797795, 590175723, 590388612, 591382776, 591615206, 592844916, 593430690,
					593965156, 595748798, 596382980, 598169433, 598428411, 598445658, 598972778, 599532170, 599769983,
					600422072, 601023130, 605972971, 606876893, 607486821, 607713423, 608822336, 611720499, 613439682,
					614239208, 616980783, 617679007, 618971873, 620140948, 620371838, 620687855, 623644281, 623792542,
					624307600, 624528521, 626602489, 626732246, 627729666, 630612327, 631710039, 632795857, 633823662,
					633924860, 635556840, 635804690, 635934581, 636187351, 636356579, 637174992, 637901881, 639510785,
					640652776, 641560689, 642618098, 643402946, 643718919, 645336160, 646593467, 647017463, 648141236,
					648769211, 649888893, 650063420, 650320426, 652104836, 653028624, 653918637, 654069191, 655413605,
					655478787, 656395278, 656548441, 656896310, 657785704, 658058614, 658583169, 658975426, 659159163,
					661247326, 663407151, 664645858, 665396566, 665961662, 666091563, 668496900, 670342249, 670834984,
					671204898, 672712918, 673127498, 673889809, 676762730, 677336575, 678554327, 679726708, 680082612,
					680816585, 680896691, 683509089, 683881138, 684104772, 685775664, 686675630, 687170234, 687176895,
					687707967, 687742244, 688611376, 690223685, 692506839, 693633041, 693651766, 696536281, 697214756,
					698972970, 699026229, 702132265, 702375039, 702826918, 704319986, 704984973, 705117677, 705378897,
					706798497, 708829650, 711574976, 712824097, 717296595, 718196343, 719881862, 722189050, 723164185,
					723342129, 723883620, 724165411, 724293098, 724419930, 724948253, 725554385, 725646671, 725886662,
					725909058, 726070613, 728369991, 728914670, 729841204, 730164754, 731567791, 732874800, 733966219,
					734840932, 735879504, 736924396, 737295723, 738030637, 741249741, 741289889, 742762635, 743457919,
					744358148, 744713008, 745062159, 746247644, 746358008, 746665195, 747376368, 747429772, 748113215,
					748750998, 749900306, 751254861, 752007771, 758389496, 759034815, 759922005, 761304081, 761741232,
					762798228, 763658805, 769742108, 770403094, 770536284, 771291595, 772926951, 773072842, 774030504,
					776528211, 777522988, 779237824, 782801502, 784130644, 784553242, 785765442, 786039773, 786674317,
					787753259, 789120932, 790949190, 791171299, 791516837, 791852742, 792445080, 792746357, 795422318,
					795975263, 797831113, 798571457, 799637299, 802062015, 802062703, 802403711, 803271406, 805152008,
					809610348, 810983325, 811128809, 811960321, 812366004, 812951314, 814158825, 815635967, 818408633,
					818484001, 818708855, 819865856, 819931361, 821540742, 822243191, 824964135, 825315036, 825539145,
					827144961, 827272921, 828032392, 828153077, 828361635, 828724561, 828775680, 829175897, 829286312,
					829453665, 830436793, 831668195, 832659498, 832699655, 833022359, 833895998, 835212725, 837034545,
					837598822, 838042067, 838086671, 839363595, 839541448, 841212404, 841408458, 842780426, 843421283,
					843792749, 845136817, 846455022, 847015909, 847276394, 847540581, 849350728, 851260385, 851741631,
					852743530, 853053877, 853281104, 854596021, 855409834, 856716576, 856759279, 857053238, 857275801,
					858751023, 859174071, 859429440, 861110147, 862341236, 862527437, 864791701, 865352321, 865532772,
					865581814, 865662800, 866594372, 866956412, 869206662, 869513941, 870102183, 870842014, 872537092,
					872616949, 873104613, 875394533, 878833085, 881522617, 881609810, 884387050, 885824596, 886876867,
					887074987, 888744143, 889802556, 890037255, 890765178, 891118053, 892425688, 894981217, 895380209,
					896619059, 896895899, 899731427, 899795411, 900175025, 901358710, 901979715, 902373891, 903319207,
					905219293, 908502895, 911081793, 911481799, 911571354, 911674696, 913310323, 913634488, 913883413,
					915029951, 915375017, 915870354, 916024974, 919638524, 920688590, 921132880, 921390714, 921679068,
					921870951, 922244518, 923086218, 923838669, 924101392, 924898102, 925547223, 926721224, 927713477,
					928990610, 932020701, 933548263, 934127347, 936485819, 936576833, 937216900, 939653550, 939719430,
					940413129, 941761195, 941780969, 942380814, 943731127, 946938957, 947237657, 949135611, 949941609,
					950000972, 950050076, 951870100, 952531334, 957035020, 958482393, 958807604, 959309081, 960458864,
					960751048, 962933633, 962989514, 963218619, 964327466, 966663228, 968824438, 969095727, 969638476,
					970766776, 971640876, 972796860, 973416360, 973660559, 974028863, 974463581, 976763131, 977484209,
					977816177, 979812132, 980553961, 981594009, 982827383, 983057270, 983483867, 984185746, 985148424,
					985300206, 986529914, 990883975, 994688369, 995373611, 995545871, 997031209, 997272237, 999463675,
					999944284, 975428376, 859118580, 855300009, 848511124, 814834079, 807488751, 780261664, 774869713,
					750718378, 744615408, 714435348, 701922107, 695071762, 691037011, 670487891, 667147718, 663634245,
					662364745, 654118537, 635534286, 629380140, 618544796, 617658449, 602258041, 599592821, 573000819,
					570447051, 561612584, 557618336, 555484038, 544207049, 488532646, 462209412, 442190199, 394757390,
					388985715, 364392087, 361014614, 359292987, 347738023, 301916885, 301408424, 299296102, 277555977,
					253296643, 243329630, 242281758, 213336900, 208929931, 201719300, 195887859, 163525363, 159155684,
					142523314, 141514359, 83833014, 80922762, 77793627, 70469918, 47064386, 30170549, 6557987, 5447174,
					2329773, 885634 } });
}
