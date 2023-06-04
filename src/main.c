#include <stdio.h>
#include <stdlib.h>
#include "user.h"

void registration() {
    char username[MAX_USERNAME_LENGTH];
    printf("Enter a username: ");
    scanf("%s", username);

    User* user = create_user(username);
    printf("Registration successful!\n");
    printf("Username: %s\n", user->username);
    printf("Token: %s\n", user->token);

    // Vous pouvez enregistrer l'utilisateur dans la base de données à ce stade

    free(user);
}

int main() {
    // Autres fonctionnalités de votre application
    // ...

    registration();

    // Autres fonctionnalités de votre application
    // ...

    return 0;
}

