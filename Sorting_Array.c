#include<stdio.h>

int i,j,k;
int s,n;
int A[100];

void Swap( int *a, int *b);

int  main ( void )  {

printf("\nSorting_Array__Ascending!\n");
printf("Enter n as the size fo your unsorted arraylist\t:");
scanf("%d", &n);
printf("%d\n", n);
printf("Type each of the Elements of your Array 1/1 bellow\n");

for ( i = 0; i< n ; i ++ ) {

	printf("A[ %d ] = :", i);
	scanf("%d", &A[i]);
}
printf("[\t");
for  ( s = 0; s <n ; s ++ ) { 

	printf("%d\t,", A[s]);
	
}
printf("]\t\n");

int tmp ;

for ( i = 0; i< n;  i++ ) { 

	int min_indx = i;
	
	for ( j =i+1; j < n; j ++  ) {
	
		if ( A[j] < A[min_indx] ) { 
		
			min_indx = j;
		
		}
		
	}
	
	if ( min_indx != i ) {
		
		Swap( &A[i], &A[min_indx] );
		
	}
}
print("*******Bubble_Sort********\n");
printf("Sorted>_Array__Done! *\n[\t");
print("*******Bubble_Sort********\n");
for  ( s = 0; s <n ; s ++ ) { 

	printf("%d\t,", A[s]);
	
}
printf("]\n");

printf("***************************\n");
return 0;

}

void Swap( int *a, int *b )  { 

	int tmp = *a;
	    *a  = *b;
	    *b  = tmp;

}

