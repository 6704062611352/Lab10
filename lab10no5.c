#include <stdio.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[16];
    char nameSurname[25];
    account stdACC;
} hoststd;

int checkLogin(char *uInput, char *pInput, hoststd db[5]) {
    int i;
    for (i = 0; i < 5; i++) {
        if (strcmp(uInput, db[i].stdACC.loginname) == 0 && 
            strcmp(pInput, db[i].stdACC.password) == 0) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    hoststd cs[5] = {
        {"66-040626-2686-1", "MR.A", {"user1", "pass1"}},
        {"66-040626-2686-2", "MR.B", {"user2", "pass2"}},
        {"66-040626-2686-3", "MR.C", {"user3", "pass3"}},
        {"66-040626-2686-4", "MR.D", {"user4", "pass4"}},
        {"66-040626-2686-5", "MR.E", {"user5", "pass5"}}
    };

    char uIn[64], pIn[64];

    printf("Username: ");
    scanf("%s", uIn);
    printf("Password: ");
    scanf("%s", pIn);

    if (checkLogin(uIn, pIn, cs)) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }
    
    return 0;
}