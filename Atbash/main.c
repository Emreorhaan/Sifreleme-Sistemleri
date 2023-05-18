#include <stdio.h>
#include <string.h>


void sifrele(char metin[], char sifreli[]) {
    int i;
    for (i = 0; metin[i] != '\0'; i++) {
        if (metin[i] == ' ') {
            sifreli[i] = ' ';
        } else {
            sifreli[i] = 'z' - (metin[i] - 'a');
        }
    }
}

void sifreCoz(char sifreli[], char metin[]) {
    int i;
    for (i = 0; sifreli[i] != '\0'; i++) {
        if (sifreli[i] == ' ') {
            metin[i] = ' ';
        } else {
            metin[i] = 'z' - (sifreli[i] - 'a');
        }
    }
}

int main() {
    char metin[100];
    char sifreli[100];
    char cozulmusMetin[100];
    int tercih;
	
	
    printf("Metin Sifrelemek Icin = 1\nSifreli Metin Cozmek Icin = 2\nTercih: ");
    scanf("%d",&tercih);
    
    if(tercih == 1){
		printf("Metni Yazin: ");
    	scanf("%s", metin);

    	sifrele(metin, sifreli);
    	printf("Sifreli Metin: %s\n", sifreli);
    }

	else{
		printf("Sifreli Metni Yazin: ");
    	scanf("%s", metin);
    	
    	sifreCoz(metin, cozulmusMetin);
    	printf("Cozulmus Metin: %s\n", cozulmusMetin);
	}

    return 0;
}

