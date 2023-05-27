#include "3Backup.h"

void sauvegarderHistoire (const char* nomFichier, const char* histoire){
    FILE* fichier = fopen (nomFichier, "w");
    if (fichier != NULL) {
        fprintf(fichier, "%s", histoire);
        fclose(fichier);
        printf("L'histoire a été sauvegardée avec succès.\n");
    } else {
        printf("Erreur la sauvegarde n'a pas pu se faire correctement.\n");
    }
}


void reprendreHistoire(const char* nomFichier) {
    FILE* fichier = fopen(nomFichier, "r");
    if (fichier != NULL) {
        char ligne[1000];
        while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
            printf("%s", ligne);
        }
        fclose(fichier);
    } else {
        printf("Erreur d'ouverture.\n");
    }
}


void trouverDernierFichierTxt(){
    DIR * sauvegarde ;
    struct dirent *fichier ;
    char dernierFichier[256] ;

    sauvegarde = opendir(".") ;
    if (sauvegarde == NULL) {
        printf("Erreur lors de l'ouverture du répertoire.\n") ;
        return;
    }

    while ((fichier = readdir(sauvegarde)) != NULL) {
        if (strstr(fichier->d_name, ".txt") != NULL) {
            strcpy(dernierFichier, fichier->d_name) ;
        }
    }

    closedir(sauvegarde);

    if (strlen(dernierFichier) > 0) {
        FILE *fichierStockage = fopen("backup/backup.txt", "w+") ;
        if (fichierStockage == NULL) {
            printf("Erreur lors de la création du fichier de stockage.\n") ;
            return ;
        }

        fprintf(fichierStockage, "%s", dernierFichier) ;
        fclose(fichierStockage);

        printf("L'hisoire s'est interrompue ici : %s\n", dernierFichier) ;
        printf("La sauvegarde a bien été enregistrée.\n") ;
    } else {
        printf("Aucun fichier n'a été trouvé dans le répertoire.\n") ;
    }
}
