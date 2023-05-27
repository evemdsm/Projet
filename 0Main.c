//librairies
#include <stdio.h>
#include <stdlib.h>

//headers
#include "1Story.h"
#include "2Character.h"
#include "3Backup.h"


int main (){

	printf("\n\nBonjour et bienvenue dans CY'dventure, un programme créé par Maxime Kevers-Pascalis et Eve Moreau de Saint Martin, qui va vous permettre de découvir une histoire évolutive en fonction de vos choix.\n\n") ; // presentation
	
	FILE* fichiersauv = fopen("sauvegarde.txt", "a") ;
	
	addObject ("                                      ") ;
	displayMainchar() ; //affichage de l'inventaire du personnage principal
	displayText ("story/Intro.txt") ; //on appelle la fonction qui permet d'afficher l'introduction de notre histoire
	int choice = selectChoice () ; //on appelle la fonction qui permet a l'utilisateur de choisir l'option qu'il préfère
		
	if (choice == 1){ //si l'utilisateur séléctionne le premier choix, on lance la partie correspondante, cette partie du programme est la partie qui nous permet de bien orienter nos branches de l'story en fonction des choix de l'tilisateur
		displayText ("story/Part1.txt") ;
		fprintf(fichiersauv, "Part1.txt\n") ;
		choice = selectChoice () ;
		
		if (choice == 1){
			displayChar ("characters/Elfe.txt") ;
			displayText ("story/Part1.1.txt") ;
			fprintf(fichiersauv, "Part1.1.txt\n") ;
			choice = selectChoice () ;
			addObject ("Un objet mystérieux\n") ;			
				
			if (choice == 1){
				displayMainchar () ;
				displayText ("story/Part1.1.1.txt") ;
				fprintf(fichiersauv, "Part1.1.1.txt\n") ;
				//resetMaininv () ;
			}
			else if (choice == 2){
				displayMainchar () ;
				displayText ("story/Part1.1.2.txt") ;
				fprintf(fichiersauv, "Part1.2.txt\n") ;
				//resetMaininv () ;
			}
		}
		else if (choice == 2){
			displayText ("story/Part1.2.txt") ;
			fprintf(fichiersauv, "Part1.2.txt\n") ;
			choice = selectChoice () ;
			
			if (choice == 1){
				addObject ("Une dague ornée de pierres précieuses\n") ;
				displayMainchar () ;
				displayChar ("characters/Loup.txt") ;
				displayText ("story/Part1.2.1.txt") ;
				fprintf(fichiersauv, "Part1.2.1.txt\n") ;
				//resetMaininv () ;
			}
			else if (choice == 2){
				displayText ("story/Part1.2.2.txt") ;
				fprintf(fichiersauv, "Part1.2.2.txt\n") ;
				//resetMaininv () ;
			}
		}
	}
	else if (choice == 2){
		displayText ("story/Part2.txt") ;
		fprintf(fichiersauv, "Part2.txt\n") ;
		choice = selectChoice () ;
		
		if (choice == 1){
			displayText ("story/Part2.1.txt") ;
			fprintf(fichiersauv, "Part2.1.txt\n") ;
			choice = selectChoice () ;
				
			if (choice == 1){
				displayChar ("characters/Etreblanc.txt") ;
				addObject ("Un liquide violet\n") ;
				displayMainchar () ;
				displayText ("story/Part2.1.1.txt") ;
				fprintf(fichiersauv, "Part2.1.1.txt\n") ;
				//resetMaininv () ;
			}
			else if (choice == 2){
				displayText ("story/Part2.1.2.txt") ;
				fprintf(fichiersauv, "Part2.1.2.txt\n") ;
				//resetMaininv () ;
			}
		}
		else if (choice == 2){
			displayText ("story/Part2.2.txt") ;
			fprintf(fichiersauv, "Part2.2.txt\n") ;
			choice = selectChoice () ;
			
			if (choice == 1){
				displayText ("story/Part2.2.1.txt") ;
				fprintf(fichiersauv, "Part2.2.1.txt\n") ;
				//resetMaininv () ;
			}
			else if (choice == 2){
				addObject ("Un fruit blanc étrange\n") ;
				displayMainchar () ;
				displayText ("story/Part2.2.2.txt") ;
				fprintf(fichiersauv, "Part2.2.2txt\n") ;
				//resetMaininv () ;
			}
		}
	}
	addObject ("                                      ") ;
	
	printf ("L'histoire est terminée ! Vous n'avez eu l'occasion de découvrir qu'une seule fin de celle-ci, vous pouvez donc relancer le programme en modifiant vos choix pour en découvrir d'autres !\n\n") ;
	
	return 0 ;
}
