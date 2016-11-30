/* 
 * File:   main7.c
 * Author: Author Name <author.name@mail.com>
 *
 * Faça um programa para verificar se o ano digitado pelo usuário é ou não, 
 * bissexto
 * OBS: Uma correção aqui foi implementada. Nas regras de negocio, foi descrito 
 * que para que um ano seja bissexto, ele deve ser divisível por 4, exceto para
 * os divisíveis por 400, que também são bissextos. Neste programa, foi utilizada
 * a regra corrigida, onde um ano é bissexto se este for divisível por 4 e que
 * este mesmo ano também seja divisível por 400 ou não seja divisível por 100.
 * Do contrário, este ano não é bissexto
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int ano;
    
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    if(ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) {
        printf("\n O ano %d é bissexto!\n", ano);
    }else{
        printf("\n O ano %d não é bissexto!\n", ano);
    }
    
    return (EXIT_SUCCESS);
}

