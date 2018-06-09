//
//  main.c
//  transpozycja_macierzy
//
//  Created by Maciej Drozdowicz on 14/12/2017.
//  Copyright © 2017 Maciej Drozdowicz. All rights reserved.
//

#include <stdio.h>
int macierz[3][3];
int transponowana[3][3];
int main(int argc, const char * argv[]) {
    for(int i=0;i<3;i++)                // WPISYWANIE DO MACIERZY
    {
        for(int k=0;k<3;k++)
        {
            printf("Podaj kolumna: %d. Wiersz: %d: ",i+1,k+1);
            scanf("%d",&macierz[i][k]);
        }
    }
    printf("Macierz:\n");
    for(int i=0;i<3;i++)                // WYPISYWANIE MACIERZY
    {
        for(int k=0;k<3;k++)
        {
            printf("%d",macierz[i][k]);
            printf(" ");
            
        }
        printf("\n");
    }                                       // TRANSPOZYCJA
     printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int k=0;k<3;k++)
        {
            transponowana[i][k]=macierz[k][i];
        }
    }
    printf("Macierz po transpozycji:\n");
    for(int i=0;i<3;i++)                    // WYPISYWANIE TRANSPONOWANEJ
    {
        for(int k=0;k<3;k++)
        {
            printf("%d",transponowana[i][k]);
            printf(" ");
            
        }
        printf("\n");
    }


    
    return 0;
}
