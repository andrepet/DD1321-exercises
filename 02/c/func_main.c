#include <stdio.h>
#include "func.h"
int main(int argc, char *argv[])
{
	int value = add_five(3);
	printf("add_five(3) = %d\n", value);
	return 0;
}

/*
HOW TO COMPILE:
$ gcc -o func_main func_main.c func.c

HOW TO RUN: 
$ ./func_main
*/