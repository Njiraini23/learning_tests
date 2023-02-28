#!/usr/bin/env bash 
ARR=(1 2 3 3 3)

for idx in "${!ARR[@]}";
do 
	echo "${ARR[$idx]}"
done
