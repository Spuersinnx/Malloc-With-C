/*
 ============================================================================
 Name        : Malloc.c
 Author      : May Moftah
 Version     : 1.0.0
 Description : The following program prompts the user to enter the desired number of bytes. Memory is then allocated based on user input, using the malloc() function. Bytes allocated are displayed on the console with 10 elements per row.

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//function main begins program execution
int main () {

	int n;	//number of bytes
	int i;
	int j;
	int *ptr; //pointer for memory allocation

	printf ("Enter the number of bytes to dynamically allocate: \n" );

	scanf ("%d", &n);

	int a[n];	//array of bytes

	ptr = (int*)malloc(n*sizeof(int)); //allocate memory based on user input

	printf ("Numbers in dynamically allocated memory: \n");

	for (i = 0; i < n; i++) {
		//for each element, print out actual index
		a[i] = i + 0;	
	}

	for (j = 0; j < n; j++ ) {
		//if the element is divisible by 10, begin a new output line
		if (j%10 == 0) {			
			printf ("\n%6d", j);
		}
		
		//else print within the same line
		else {
			printf ("%6d", j);	
		}
	}
	printf ("\n");
}	//end function main
