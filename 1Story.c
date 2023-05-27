#include "1Story.h"

void displayText (const char* nomFichier){

	FILE* f = NULL ; //création d'un pointeur qui pointera sur notre fichier texte
	int car = 0 ; //création d'une variable qui permettar de lire les caractères du fichier
	
	f = fopen (nomFichier, "r") ; //fonction d'ouverture du fichier texte

	if (f == NULL){ //vériffication de l'ouverture du fichier
		printf("Ouverture du fichier impossible\n") ;
	} 

	else{
		printf ("------------------------------------------\n\n") ;
      		while (car != EOF){ //lecture du fichier texte
			car = fgetc (f) ; //lecture du caractère
			printf ("%c", car) ; //affichage du caractère
		}
		printf ("\n------------------------------------------\n\n") ;
	}
	
	fclose(f) ; //fermeture du fichier
}

int selectChoice (int c){
	int v = 0;
	do {
		printf("\n Quelle option voulez-vous choisir ?\n") ;
		v = scanf("%d", &c);
		while (getchar() != '\n') {
		}
	} while (v != 1 || c < 1 || c > 2);
}
