#!bin/bash

for param in "$@"
do
mkdir DossierTemp
mv $param/* DossierTemp
rm -rf $param
mv DossierTemp $param
done
