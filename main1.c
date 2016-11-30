
/* 
 * File:   main.c
 * Author: Author Name <author.name@mail.com>
 * Created on November 29, 2016
 * 
 * Programa que recebe 10 nomes inteiros e informe quantos nomes iniciam 
 * com a letra "E"
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) 
{
    char nome[20];
    int total = 0;
    
    for(int cont = 0; cont < 10; cont++) 
    {
        printf("\nInsira o nome %d: ", cont + 1);
        scanf("%s", nome);
        
        if('E' == toupper(nome[0]))
        {
            total++;
        }
    }
    
    printf("Total de nomes que inciam com a letra 'E': %d\n", total);
    
    return (0);
}

