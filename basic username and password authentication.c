#include <stdio.h>
#include <string.h>
int checkCredentials(char user[], char pass[]) {
    char dbUsers[3][20] = {"admin", "student1", "user2"};
    char dbPass[3][20] = {"1234", "pass2026", "hello"};
    for (int i = 0; i < 3; i++) {
        if (strcmp(dbUsers[i], user) == 0 && strcmp(dbPass[i], pass) == 0) {
            return 1;
        }
    }
    return 0;
}
int main() {
    char inputUser[20];
    char inputPass[20];
    printf("=== ACCESS PORTAL ===\n");
    printf("Username: ");
    scanf("%s", inputUser);
    printf("Password: ");
    scanf("%s", inputPass);
    if (checkCredentials(inputUser, inputPass) == 1) {
        printf("\nLogin Successful! Welcome to your dashboard.\n");
    } else {
        printf("\nAccess Denied: Incorrect credentials.\n");
    }
    return 0;
}
