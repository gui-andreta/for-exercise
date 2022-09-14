#include <stdio.h>

void main () {
    /*faça um programa q recebe um valor inteiro de x que é uma quantidade de
    pessoas a serem entrevistadas depois receba a idade destas x pessoas e mostre:

    a media das idades
    a idade da pessoa mais velha
    qual foi a ordem de entrevista da pessoa mais velha*/

    float vpessoas, vidade, i, vsoma, vmedia, vmaior, vguardar;

    printf("Quantas pessoas serao entrevistadas? ");
    scanf("%f", &vpessoas);

    vidade = 0;
    vsoma = 0;
    vmaior = 0;
    vguardar = 0;

    for(i = 0; i < vpessoas; i++) {
        printf("Coloque a idade da pessoa: ");
        scanf("%f", &vidade);

        if(vmaior < vidade){
            vmaior = vidade;
            vguardar = i + 1;
        }

        vsoma = vsoma + vidade;
    }

    vmedia = vsoma / vpessoas;

    printf(" Sua media de idades e: %.2f", vmedia);
    printf("\n A idade da pessoa mais velha e: %.0f", vmaior);
    printf("\n A ordem de entrevista da pessoa mais velha foi: %.0f", vguardar);
}
