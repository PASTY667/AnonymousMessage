#include <stdio.h>
#include <stdlib.h>
#include "user.h"

void display_profile(User* user) {
    printf("Username: %s\n", user->username);
    printf("Token: %s\n", user->token);
    printf("Public Address: %s\n", user->public_address);
}

int main() {
    // Création d'un utilisateur
    User* user = create_user("John");

    // Affichage du profil de l'utilisateur
    display_profile(user);

    // Autres fonctionnalités à ajouter selon votre cahier des charges

    // Libération de la mémoire allouée pour l'utilisateur
    free(user);

    return 0;
}
