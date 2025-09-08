#include <stdio.h>
#include <string.h>

#define NB_NOTES 5

// Définition de la structure Etudiant
struct Etudiant {
    char nom[50];
    char prenom[50];
    int notes[NB_NOTES];
};

int main() {
    // Création et initialisation d'un étudiant
    struct Etudiant etudiant1;
    
    // Assignation des valeurs
    strcpy(etudiant1.nom, "Martin");
    strcpy(etudiant1.prenom, "Sophie");
    
    // Assignation des notes
    etudiant1.notes[0] = 15;
    etudiant1.notes[1] = 18;
    etudiant1.notes[2] = 12;
    etudiant1.notes[3] = 16;
    etudiant1.notes[4] = 14;
    
    // Affichage des informations
    printf("=== Informations de l'étudiant ===\n");
    printf("Nom: %s\n", etudiant1.nom);
    printf("Prénom: %s\n", etudiant1.prenom);
    printf("Notes: ");
    
    float somme = 0;
    for(int i = 0; i < NB_NOTES; i++) {
        printf("%d ", etudiant1.notes[i]);
        somme += etudiant1.notes[i];
    }
    
    printf("\nMoyenne: %.2f/20\n", somme / NB_NOTES);
    
    return 0;
}