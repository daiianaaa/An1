#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
    {
    FILE* fp;
    int x, contor = 0;
    fp = fopen("test.txt", "r"); if (!fp)
    {
    perror("\n EROARE la deschiderea fisierului...");
    exit(1);
    }
    printf("\n Extragem radical din valorile pozitive citite din fisier:\n");
    while (fscanf(fp, "%d", &x) != EOF)
    if (x > 0) {
    contor++;
    printf("valoare citita= %d, radacina patrata=%.2lf\n", x, sqrt((float)x));

    }
    fclose(fp);
    fp = fopen("test.txt", "a");
    if (!fp) {
        printf("\n EROARE la deschiderea fisierului in vederea adaugarii...\n"); exit(1);
        }
    fprintf(fp, " %d", contor);
    fclose(fp);
    return 0;
    }//main
