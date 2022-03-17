#! /bin/sh

OUTPUT_FILE=result.txt

function check() {
	check_dir_name=$1

	if [ -d "${check_dir_name}/src" -a -d "${check_dir_name}/test" ]
	then
		process "${check_dir_name}"
	else
		for d in "${check_dir_name}"/* 
		do
			if [ -d "$d" ]
			then
				check "$d"
			fi
		done
	fi
}

function process() {
	process_dir_name=$1

	for test_file in "${process_dir_name}/test"/*.cpp
	do
		output_file=$(basename ${test_file}  | sed -e "s#\.cpp\$##")
		if [ -x "${process_dir_name}/${output_file}" ]
		then
			echo "${process_dir_name}/${output_file}" >> "${OUTPUT_FILE}"
			"${process_dir_name}/${output_file}" >> "${OUTPUT_FILE}"
			echo "" >> "${OUTPUT_FILE}"
		fi
	done
}

BASE_DIR=$(cd $(dirname $0); pwd)
cd "${BASE_DIR}"

rm -f "${OUTPUT_FILE}"

make || {
	echo "Error while compiling"
	exit 1
}

for a in abc apg4b other practice
do
	check "${BASE_DIR}/$a" 
done

cd -
exit 0

