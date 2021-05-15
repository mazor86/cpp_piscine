#!/bin/sh

echo ./convert 0
./convert 0
echo 
echo ./convert nan
./convert nan
echo 
echo ./convert -inff
./convert -inff
echo 
echo ./convert 45.0
./convert 45.0
echo 
echo ./convert 32
./convert 32
echo 
echo ./convert "'9'"
./convert "'9'"
echo 
echo ./convert 9
./convert 9
echo 
echo ./convert 100
./convert 100
echo 
echo ./convert -3990.489209
./convert -3990.489209
echo 
