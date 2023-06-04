#include "user.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void generate_public_address(User* user) {
    // Générez une adresse publique unique ici
    // Vous pouvez utiliser une logique basée sur le pseudonyme, le token, etc.

    // Exemple simple : concaténez le pseudonyme et le token
    snprintf(user->public_address, sizeof(user->public_address), "%s_%s", user->username, user->token);
}

// Reste du code...
