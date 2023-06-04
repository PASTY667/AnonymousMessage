#ifndef USER_H
#define USER_H

#define MAX_USERNAME_LENGTH 50
#define TOKEN_LENGTH 10

typedef struct {
    char username[MAX_USERNAME_LENGTH];
    char token[TOKEN_LENGTH + 1];
    char public_address[50];
} User;

User* create_user(const char* username);
void generate_public_address(User* user);

#endif
