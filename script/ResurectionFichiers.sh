#!bin/bash

for param in "$@"
do
cat $param > temp
mv temp $param
done
