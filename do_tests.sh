#!/usr/bin/bash
clear
echo "Compiling!"
gcc -g ./test/test_newton.c -o ./.tmp/start_test -lm -Wall -pedantic -Wshadow -Wpointer-arith -Wcast-qual
echo "Running tests!"
./.tmp/start_test
rm -r ./.tmp/*
echo "Tests ended!"
