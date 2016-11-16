#include <stdio.h>
#include <stdlib.h> // malloc & free

int main(int argc, char *argv[])
{
	int n;
	printf("Ange ett nummer: ");
	scanf("%d",&n);

	// dynamically allocate memory on the heap
	int *array = malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		array[i] = i;
	}

	printf("[ ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ",array[i]);
	}
	printf("]\n");
	
	// don't forget to free the allocated memory!
	//free(array); // a memory leak will occur 
	return 0;
}

/*
To test if your program is 'leaking memory',
you can use the tool valgrid from the command line.

This is an exempel of how you can use it while
testing this program:

findus:c$ gcc -o malloc malloc.c 
findus:c$ valgrind --leak-check=yes ./malloc 
==5224== Memcheck, a memory error detector
==5224== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5224== Using Valgrind-3.12.0.SVN and LibVEX; rerun with -h for copyright info
==5224== Command: ./malloc
==5224== 
Ange ett nummer: 5
[ 0 1 2 3 4 ]
==5224== 
==5224== HEAP SUMMARY:
==5224==     in use at exit: 20 bytes in 1 blocks
==5224==   total heap usage: 3 allocs, 2 frees, 2,068 bytes allocated
==5224== 
==5224== 20 bytes in 1 blocks are definitely lost in loss record 1 of 1
==5224==    at 0x4C2CB3F: malloc (in /usr/lib/valgrind/vgpreload_memcheck-amd64-linux.so)
==5224==    by 0x108837: main (in /home/findus/Desktop/DD1321-exercise/02/c/malloc)
==5224== 
==5224== LEAK SUMMARY:
==5224==    definitely lost: 20 bytes in 1 blocks
==5224==    indirectly lost: 0 bytes in 0 blocks
==5224==      possibly lost: 0 bytes in 0 blocks
==5224==    still reachable: 0 bytes in 0 blocks
==5224==         suppressed: 0 bytes in 0 blocks
==5224== 
==5224== For counts of detected and suppressed errors, rerun with: -v
==5224== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

*/