#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
    char first[255], last[255];

    askname(first, last);

    printf("Hellooo11115555, %s %s!\n", first, last);
    return 0;
}
