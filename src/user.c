#include "user.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void generate_token(char* token) {
    const char characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const int num_characters = sizeof(characters) - 1;

    srand(time(NULL));

    for (int i = 0; i < TOKEN_LENGTH; i++) {
        int index = rand() % num_characters;
        token[i] = characters[index];
    }

    token[TOKEN_LENGTH] = '\0';
}

User* create_user(const char* username) {
    User* user = (User*)malloc(sizeof(User));
    strncpy(user->username, username, MAX_USERNAME_LENGTH);
    generate_token(user->token);
    return user;
}
