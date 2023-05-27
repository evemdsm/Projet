CY'dventure : programme d'une histoire à choix multiple en langage C. 

Codé par Eve Moreau de Saint Martin et Maxime Kevers-Pascalis.

Notre programme sert à afficher une histoire répartie en plusieurs parties, correspondant aux différentes étapes, dans lequel l'utilisateur pourra choisir à chaque étape entre deux options pour continuer son aventure. Cela permet donc de créer de nombreux chemins et fins de l'histoire différentes.

Pour utiliser ce programme, il faut vous assurer d'avoir tous les fichiers et dossiers suivants :

 - 0Main.c : le fichier qui contient la fonction prinicpale (main), il contient toute la structure de notre programme, avec les fonction créees implémentées.
 - 0Main.o : fichier objet de 0Main.c.
 
 - 1.Story.c : dans ce fichier se trouve les deux procédures les plus importantes : displayText, qui sert à afficher les étapes de notre histoire, et selectChoice, servant à l'utilisateur de faire son choix entre les deux propositions affichées.
 - 1Story.h : header de 1Story.c, il contient la déclaration des fonctions de ce fichier et les bibliothèques nécessaires pour faire fonctionner le programme.
 - 1Story.o : fichier objet de 1Story.c.
 
 - 2Character.c : ce fichier contient les différentes procédures nécessaires à l'affichage des caractéristiques des personnages de l'histoire. displayMainchar permet d'afficher l'inventaire du personnage principal, elle est présente dans le main au début de l'histoire, et lorsque le personnage principal acquiert de nouveaux objets. Nous avons pris la décision de ne pas rajouter de caractéristiques physiques ou mentales à notre personnage principal pour que chaque utilisateur puisse s'identifier facilement à celui-ci. displayChar, de la même manière que displayMainchar, affiche les caractéristiques et inventaires des personnages secondaires lorsqu'ils apparaissent dans l'histoire. addObject est la procédure permettant de rajouter un objet à l'inventaire du personnage princiapl. resetMaininv est la procédure qui permet de réinitialiser l'inventaire du personnage principal, elle n'a pas pu être terminée et n'est donc pas dans notre main, cependant, nous avons tout de même trouver une solution à ce problème en utilisant addObject pour remplacer par des espaces l'objet rajouté dans le fichier d'inventaire du personnage principal.
 - 2Character.h : header de 2Charcater.c, il inclut la définition des procédures et structures utilisées dans ce fichier.
 - 2Character.o : fichier objet de 2Character.c
 
 - 3Backup.c : fichiers contenant les procédures permettanrt de sauvegarder le programme. Nous n'avons pas réussi à les faire fonctionner, elles n'apparaissent donc pas dans le main.
 - 3Backup.h : header de 3Backup.c.
 - 3Backup.o : fichier objet de 3Backup.c.
 
 - story : dossier contenant tous les étapes de l'histoire.
 - characters : dossier contenant les fichiers des caractéristiques des personnages.
 
 - Makefile : fichier Makefile permettant de compiler les différents fichier du programme, en créant l'executable Exe.
 
 - Exe : fichier executable de notre programme, rentrez ./Exe dans le terminal pour pouvoir tester notre programme.
 
Nous espérons que notre programme vous plaira et qu'il répondra à un maximum de vos attentes.
