#include "2Character.h"

void displayMainchar (){

	int a = 0 ;
	FILE* m = NULL ; //création d'un pointeur qui pointera sur le fichier de notre personnage
	
	m = fopen("characters/Mainchar.txt", "r+") ; //fonction d'ouverture du fichier du personnage
	
	if (m == NULL){ //vériffication de l'ouverture du fichier
		printf("Ouverture du fichier impossible\n") ;
	} 
	
	else{
		printf("------------------------------------------\n\n") ;	
		printf ("Contenu de votre inventaire :\n\n") ;
		
		while (a != EOF){
			a = fgetc (m) ;
			printf ("%c", a) ;	
		}
		printf ("\n") ;
	}
	fclose(m) ; //fermeture du fichier	
}



void displayChar (const char* charName){

	FILE* c = NULL ; //création d'un pointeur qui pointera sur le fichier de notre personnage
	
	c = fopen(charName, "r+") ; //fonction d'ouverture du fichier du personnage
	
	if (c == NULL){ //vériffication de l'ouverture du fichier
		printf("Ouverture du fichier impossible\n") ;
	} 
	
	else{
		Character charName ;
		printf("------------------------------------------\n\n") ;	

		fgets (charName.name, 20, c) ;	
		fgets (charName.phy, 200, c) ;
		fgets (charName.inv, 200, c) ;
		
		printf ("Nom : %s\n", charName.name) ;
		printf ("Caractéristiques physiques : %s\n", charName.phy) ;
		printf ("Contenu de son inventaire : %s\n", charName.inv) ;
		
	}
	
	fclose(c) ; //fermeture du fichier	
}


void addObject (const char* objet){

	FILE* o = NULL ; //création d'un pointeur qui pointera sur le fichier de notre personnage
	
	o = fopen("characters/Mainchar.txt", "r+") ; //fonction d'ouverture du fichier du personnage
	
	if (o == NULL){ //vériffication de l'ouverture du fichier
		printf("Ouverture du fichier impossible\n") ;
	} 
	
	else{
		fseek (o, 24, SEEK_SET) ;
		fputs (objet, o) ;
		
		fclose (o) ;
	}
}

void resetMaininv (){
	
	int c = 0 ;
	int d = 0 ;
	
	char temp1 [50] ;
	char temp2 [50] ;
	
	FILE* r = NULL ;
	FILE* t = NULL ;
	
	r = fopen("characters/Mainchar.txt", "r") ;
	t = fopen("characters/temp.txt", "w") ;
	
	if (r == NULL){ //vériffication de l'ouverture du fichier
		printf("Ouverture du fichier impossible\n") ;
	}
	if (t == NULL){ //vériffication de l'ouverture du fichier
		printf("Ouverture du fichier impossible\n") ;
	} 
	
	else{
		while ((c = getc (r)) != EOF) {
			putc (c, t) ;
		}
		
		fclose (r) ;
		r = fopen("characters/Mainchar.txt", "w") ;
			
		fseek (t, 0, SEEK_SET) ;
		fgets (temp1, 50, t) ;
		fseek (r, 0, SEEK_SET) ;
		fprintf (r, "%s", temp1) ;
		
		fseek (t, 7, SEEK_SET) ;
		fgets (temp2, 50, t) ;
		fseek (r, 7, SEEK_SET) ;
		fprintf (r, "%s", temp2) ;
			
	}
		fclose (r) ;
		fclose (t) ;
}
