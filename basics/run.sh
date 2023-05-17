#!/bin/bash

my_exec=$(ls -t *.c | head -n1)

gcc $my_exec

./a.out

rm a.out