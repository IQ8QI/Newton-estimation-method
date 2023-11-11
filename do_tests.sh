!# /usr/bin/bash
echo "Starting tests"
gcc -g ./test/test_newton.c -o ./.tmp/start_test -lm
./.tmp/start_test
rm -r ./.tmp/*
echo "Tests ended"
