#!/bin/bash
#gcc -fPIC -c *.c
#gcc -shared -o liball.so *.o
#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC *.c -shared -o liball.so
