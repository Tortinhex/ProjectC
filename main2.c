/* 
 * File:   main2.c
 * Author: Author Name <author.name@mail.com>
 *
 * O programa deverá ler um dado CARACTERE correspondente a uma senha e comparar
 * o valor com o valor de uma constante. Se a senha estiver correta, imprimir
 * "Acesso Liberado"; Caso contrário, solicitar novamente a digitação da senha.
 * O Programa deverá ser executado até que a senha correta seja digitada ou até
 * que se digite 0
 */

#include <stdio.h>
#include <stdlib.h>

#define PASSWORD 'a'

int main(void) {
    
    char data;
    printf("Insira a senha: ");
    
    while (1) {
        scanf("%c", &data);
        
        /*
         * @todo Ao clicar enter, o programa interpreta como sendo 
         * um caractere. Portanto, ignorar este caractere
         */
        if('\n' == data) {
            continue;
        }
        
        if('0' == data) {
            break;
        }

        if(PASSWORD == data) {
            printf("Acesso Liberado!");
            break;
        }
        
        printf("Senha incorreta! Digite novamente: ");
    }
    
    return (EXIT_SUCCESS);
}


