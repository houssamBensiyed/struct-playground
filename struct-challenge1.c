#include <stdio.h>
#include <string.h>

// Définition de la structure Personne
struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    // Création d'une variable de type struct Personne
    struct Personne personne1;
    
    // Assignation des valeurs aux champs
    strcpy(personne1.nom, "Dupont");
    strcpy(personne1.prenom, "Jean");
    personne1.age = 25;
    
    // Affichage des valeurs
    printf("=== Informations de la personne ===\n");
    printf("Nom: %s\n", personne1.nom);
    printf("Prénom: %s\n", personne1.prenom);
    printf("Age: %d ans\n", personne1.age);
    
    return 0;
}