#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }

    for(int i = 0; i < strlen(argv[1]); i++) {
        if (isalpha(argv[1][i])) {
            if (islower(argv[1][i])) {
                printf("%c", ((argv[1][i] - 'a' + 13) % 26) + 'a');
            } else if (isupper(argv[1][i])) {
                printf("%c", ((argv[1][i] - 'A' + 13) % 26) + 'A');
            }
        } else {
            printf("%c", argv[1][i]);
        }
    }
    printf("\n");
    return 0;
}