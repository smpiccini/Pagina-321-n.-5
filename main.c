#include <stdio.h>
#include <stdlib.h>

#define N 3
#define M 6

int main(int argc, char** argv) {
    int MAT[N][M]={3,5,6,9,0,7,2,2,8,9,3,2,8,2,2,2,4,5};
    int x,y,RIGA,COLONNA,somma=0;
    for (y=0; y<N; y++) {
        for (x=0; x<M; x++) {
            printf("%d\t", MAT[y][x]);
        }
        printf("\n");
    }
    
    printf("Somma degli elementi della matrice\n");
    printf("Inserire la riga da escludere (parte da 0): ");
    scanf("%d", &RIGA);
    printf("Inserire la colonna da escludere (parte da 0): ");
    scanf("%d", &COLONNA);
    
    for (y=0; y<N; y++) {
        if (y!=COLONNA) {
            for (x=0; x<M; x++) {
                if (x!=RIGA) {
                    somma+=MAT[y][x];
                }
            }
        }
    }
    
    printf("La somma degli elementi e': %d", somma);
    return (EXIT_SUCCESS);
}

