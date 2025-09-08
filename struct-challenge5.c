#include <stdio.h>
#include <string.h>

// Définition de la structure Livre
struct Livre {
    char titre[100];
    char auteur[50];
    int annee;
};

// Fonction qui crée et retourne un livre
struct Livre creerLivre(const char *titre, const char *auteur, int annee) {
    struct Livre nouveauLivre;
    
    strcpy(nouveauLivre.titre, titre);
    strcpy(nouveauLivre.auteur, auteur);
    nouveauLivre.annee = annee;
    
    return nouveauLivre;
}

// Fonction pour afficher les informations d'un livre
void afficherLivre(struct Livre livre) {
    printf("\n=== Informations du livre ===\n");
    printf("Titre: %s\n", livre.titre);
    printf("Auteur: %s\n", livre.auteur);
    printf("Année de publication: %d\n", livre.annee);
}

// Fonction pour créer une bibliothèque (tableau de livres)
void creerBibliotheque() {
    struct Livre bibliotheque[3];
    
    // Création de plusieurs livres
    bibliotheque[0] = creerLivre("Le Petit Prince", "Antoine de Saint-Exupéry", 1943);
    bibliotheque[1] = creerLivre("1984", "George Orwell", 1949);
    bibliotheque[2] = creerLivre("Les Misérables", "Victor Hugo", 1862);
    
    printf("\n=== BIBLIOTHÈQUE ===");
    for(int i = 0; i < 3; i++) {
        afficherLivre(bibliotheque[i]);
    }
}

int main() {
    // Création d'un livre en utilisant la fonction
    struct Livre monLivre = creerLivre("L'Étranger", "Albert Camus", 1942);
    
    // Affichage des informations
    printf("=== Livre unique ===");
    afficherLivre(monLivre);
    
    // Création d'une petite bibliothèque
    creerBibliotheque();
    
    return 0;
}