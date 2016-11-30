/* 
 * File:   main8.c
 * Author: Author Name <author.name@mail.com>
 *
 * Faça um programa para coletar as respostas (O - Otimo, B - Bom, M - Medio,
 * R - Ruim e P - Pessimo) e após o usuário digitar a tecla 'A', exibir o percentual
 * de cada voto, a soma de B e O e a soma de R e P
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    char aux;
    int total = 0;
    
    int optP = 0;
    int optR = 0;
    int optM = 0;
    int optB = 0;
    int optO = 0;
    
    printf("(O)Otimo (B)Bom (M)Medio (R)ruim (P)pessimo (A)Finalizar: \n>");
    while(1) {
        scanf("%c", &aux);

        /*
         * @todo Ao clicar enter, o programa interpreta como sendo 
         * um caractere. Portanto, ignorar este caractere
         */
        if('\n' == aux) {
            continue;
        }
        
        aux = toupper(aux);
        
        if('A' == aux) {
            /*
             * Não deixa a entrada de dados finalizar caso não tenha sido computado
             * nenhum voto
             */
            if(0 == total) {
                printf("Insira ao menos 1 voto\n>");
                continue;
            }
            
            break;
        }
        
        switch(aux) {
            case 'P':
                optP++;
                break;
            case 'R':
                optR++;
                break;
            case 'M':
                optM++;
                break;
            case 'B':
                optB++;
                break;
            case 'O':
                optO++;
                break;
            default:
                printf("Digite um número válido!\n>");
                continue;
                
        }
        total++;
        printf(">");
    }
    
    printf("%.2f%% de Ótimo \n",  (float) optO * 100 / total);
    printf("%.2f%% de Bom \n",    (float) optB * 100 / total);
    printf("%.2f%% de Médio \n",  (float) optM * 100 / total);
    printf("%.2f%% de Ruim \n",   (float) optR * 100 / total);
    printf("%.2f%% de Péssimo \n",(float) optP * 100 / total);
    
    printf("\nO total da soma de bom (B) e ótimo (O) é %d\n", optB + optO);
    printf("O total da soma de ruim (R) e péssimo (P) é %d\n", optR + optP);
    
    return (EXIT_SUCCESS);
}

