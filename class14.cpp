#include<stdio.h>
#include<iomanip>
#include<iostream>
using namespace std ;
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	FILE *f_in ,*f_a ;
	int b , c  ;
	char d ;
	b = 0 ;
	c = 0 ;
	f_in = fopen ("data.txt","r");
	if (f_in == NULL)
	{
		printf("Failed to open data.txt \n");
		exit (0);
	}
	f_a = fopen("new.txt","w");
	if (f_a == NULL)
	{
		printf("Failed to open new.txt \n");
		exit (0);
	}
	while (fscanf( f_in , "%c" , &d ) == 1)
	{
		if ( d != ',' )
		{
			b = b + 1 ;
			fprintf(f_a , "%c" , d ) ;
		}
		else 
		{
			c = c + 1 ;
			fprintf(f_a , "\n" , d ) ;
		}
	}		
	fclose(f_a);
	cout << "Total " << b << " charaaters  " << endl << c << "lines " ;
	return(0);
}
