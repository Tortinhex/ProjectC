/* 
 * File:   main5.c
 * Author: Author Name <author.name@mail.com>
 *
 * Criar um vetor com 10 posições e preencher com letras diversas. Após, informar
 * quantas vezes as letras "A" e "E" aparecem no vetor
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char letras[] = {'A', 'B', 'Z', 'E', 'A', 'G', 'R', 'A', 'H', 'E'};
    int totA = 0;
    int totE = 0;
    
    for(int key = 0; key < 10; key++) {
        
        if('A' == letras[key]) {
            totA++;
        }
        
        if('E' == letras[key]) {
            totE++;
        }
    }
    
    printf("A letra 'A' aparece %d vezes no array 'letras'\n", totA);
    printf("A letra 'E' aparece %d vezes no array 'letras'\n", totE);
    
    return (EXIT_SUCCESS);
}

