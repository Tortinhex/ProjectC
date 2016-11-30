/* 
 * File:   main4.c
 * Author: Author Name <author.name@mail.com>
 *
 * Preencher um vetor com numeros INTEIROS (10 unidades); Em seguida solicitar 
 * um numero do teclado. Pesquisar se esse número existe no vetor. Se existir, 
 * imprimir em qual ou quais posições do vetor. Se não existir, imprimir mensagem
 * dizendo que não existe
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numeros[] = {21, 13, 6, 77, 64, 18, 90, 11, 50, 6};
    int digit;
    int aux = 0;
    
    printf("Digite um número: ");
    scanf("%d", &digit);
    
    for(int key = 0; key < 10; key++) {
        
        if(digit == numeros[key]) {
            printf("\nO número %d foi encontrado na posição %d do array 'numeros'\n", digit, key);
            aux = 1; 
        }
    }
    
    if(0 == aux) {
        printf("\nNão foi encontrado o número %d no array", digit);
    }
    
    return (EXIT_SUCCESS);
}

