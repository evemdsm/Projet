#ifndef PERSO
#define PERSO

#include <stdio.h>
#include <stdlib.h>

void displayMainchar () ;
	
typedef struct characters{
	char name [20] ;
	char phy [200] ;
	char inv [200] ;	
} Character ;

void displayChar () ;

void addObject () ;

void resetMaininv () ;

#endif
