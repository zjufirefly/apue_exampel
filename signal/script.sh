#! /bin/bash

for i in `seq 1 10`
do
    echo $i
    kill -s SIGINT 25174
done
