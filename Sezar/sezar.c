#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encrypt(char *text, int key) {
    int i;
    for (i = 0; i < strlen(text); i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = 'a' + (text[i] - 'a' + key) % 26;
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = 'A' + (text[i] - 'A' + key) % 26;
        }
    }
}

void decrypt(char *text, int key) {
    int i;
    for (i = 0; i < strlen(text); i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = 'a' + (text[i] - 'a' - key + 26) % 26;
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = 'A' + (text[i] - 'A' - key + 26) % 26;
        }
    }
}

int main() {
    int secim, key;
    char text[100];

    printf("Sifrelemek icin 1\nSifre cozmek icin 2\nsecim: ");
    scanf("%d", &secim);

    if (secim == 1) {
        printf("Metin girin: ");
        scanf(" %[^\n]", text);

        printf("Key girin: ");
        scanf("%d", &key);

        encrypt(text, key);
        printf("Sifreli metin: %s\n", text);
    }
	
	else{
        printf("Sifreli metin girin: ");
        scanf(" %[^\n]", text);

        printf("Key girin: ");
        scanf("%d", &key);

        decrypt(text, key);
        printf("Cozulmus metin: %s\n", text);
    } 

    return 0;
}

