#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void vaarin1(void);
void vaarin2(void);
void vaarin3(void);
void vaarin4(void);
void vaarin5(void);
void vaarin6(void);
void vaarin7(void);
void vaarin8(void);

int main (void){
    
    char sana[50];
    char kirjain;
    char arvattavaSana[50];
    int i=0, pituus=0, oikeita=0, vaaria=0, kirjainoikein=0, n=0, m=0, j=0, uudelleen=0, oikea_arvaus=0;
    char rivit[100][50];
    char arvatut[30];
    
    FILE * tiedosto;
    
    tiedosto = fopen("sanat.txt", "r");

    m=0;

    while (fgets(sana, 50, tiedosto) != NULL){
        strcpy(rivit[m], sana);
        m++;
        
    }

    n = rand() % m;
    strcpy(arvattavaSana, rivit[n]);

    pituus = strlen(arvattavaSana);
    //printf("pituus %d\n", pituus);

    char oikea[pituus-1];
    
    for (i=0; i<pituus+1; i++){
        oikea[i] = '_';
    }
    
    while (1){
        oikea_arvaus=0;
        printf("Arvaa kirjain: > ");
        scanf(" %c", &kirjain);
        printf("\n");
        
        for (i=0; i<=j; i++){
            if (arvatut[i] == kirjain){
                uudelleen++;
            }
        }

        //printf("uudelleen %d\n", uudelleen);

        if (uudelleen == 0){
            for (i=0; i<pituus-1; i++){

                if (arvattavaSana[i] == kirjain){
                    oikea[i] = arvattavaSana[i];
                    kirjainoikein++;
                    oikea_arvaus = 1;
                }
            }

            
            arvatut[j] = kirjain;
            j++;

            //printf("oikeita %d\n", kirjainoikein);

            if (oikea_arvaus == 0){
                vaaria++;

                if (vaaria == 1){
                    vaarin1();
                }

                else if (vaaria == 2){
                    vaarin2();
                }
                else if (vaaria == 3){
                    vaarin3();
                }

                else if (vaaria == 4){
                    vaarin4();
                }

                else if (vaaria == 5){
                    vaarin5();
                }  

                else if (vaaria == 6){
                    vaarin6();
                }

                else if (vaaria == 7){
                    vaarin7();
                }

                else if (vaaria == 8){
                    vaarin8();
                    printf("\nArvattava sana oli: %s\n", arvattavaSana);
                    exit(0);
                }
            }

            printf("\n");

            if ((kirjainoikein + 1) == pituus){
                printf("\nHienoa, arvasit oikein!");
                exit(1);
            }

            else {
                for (i=0; i<pituus-1; i++){
                    printf("%c", oikea[i]);
                }
            }

            printf("\n");
        }

        uudelleen = 0;
        kirjain = EOF;
    }
    
}

void vaarin1(void){
    printf("                    -------\n");

}

void vaarin2(void){

    printf("                       |\n");
    printf("                       |\n");
    printf("                       |\n");
    printf("                       |\n");
    printf("                       |\n");
    printf("                    -------\n");

}

void vaarin3(void){
    printf(" 					   ____\n");
    printf("					   |   \n");
    printf("					   |   \n");
    printf("					   |   \n");
    printf("					   |   \n");
    printf("					   |   \n");
    printf("					-------\n");
}

void vaarin4(void){
    printf("  					   _______\n");
    printf("   					   |    |\n");
    printf("					   |   \n");
    printf("					   |   \n");
    printf("					   |   \n");
    printf("					   |   \n");
    printf("					-------\n");
}

void vaarin5(void){

    printf("  					  _______\n");
    printf("					  |    | \n");
    printf("   					  |    O \n");
    printf("   					  |      \n");
    printf("   					  |      \n");
    printf("   					  |      \n");
    printf("					-------\n");
}

void vaarin6(void){

    printf("  					  _______\n");
    printf("					  |    | \n");
    printf("   					  |    O \n");
    printf("   					  |    | \n");
    printf("   					  |      \n");
    printf("   					  |      \n");
    printf("					-------\n");
}

void vaarin7(void){

    printf("  					  _______\n");
    printf("					  |    | \n");
    printf("   					  |    O \n");
    printf("   					  |   /|\\  \n");
    printf("   					  |      \n");
    printf("   					  |      \n");
    printf("					-------\n");
}

void vaarin8(void){

    printf("  					  _______\n");
    printf("					  |    | \n");
    printf("   					  |    O \n");
    printf("   					  |   /|\\  \n");
    printf("   					  |   / \\  \n");
    printf("   					  |      \n");
    printf("					-------\n");
    
}