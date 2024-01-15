#!/usr/bin/bash
#gcc -c *.c -fpic && gcc *o -shared -o liball.so
gcc -Wall -Werror -Wextra -pedantic -fPIC -c *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o
