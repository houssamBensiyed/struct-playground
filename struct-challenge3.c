#include <stdio.h>

// Définition de la structure Rectangle
struct Rectangle {
    float longueur;
    float largeur;
};

// Fonction pour calculer l'aire d'un rectangle
float calculerAire(struct Rectangle rect) {
    return rect.longueur * rect.largeur;
}

// Fonction pour calculer le périmètre (bonus)
float calculerPerimetre(struct Rectangle rect) {
    return 2 * (rect.longueur + rect.largeur);
}

int main() {
    // Création d'un rectangle
    struct Rectangle monRectangle;
    
    // Assignation des valeurs
    monRectangle.longueur = 10.5;
    monRectangle.largeur = 5.2;
    
    // Calcul et affichage de l'aire
    float aire = calculerAire(monRectangle);
    float perimetre = calculerPerimetre(monRectangle);
    
    printf("=== Rectangle ===\n");
    printf("Longueur: %.2f cm\n", monRectangle.longueur);
    printf("Largeur: %.2f cm\n", monRectangle.largeur);
    printf("Aire: %.2f cm²\n", aire);
    printf("Périmètre: %.2f cm\n", perimetre);
    
    return 0;
}