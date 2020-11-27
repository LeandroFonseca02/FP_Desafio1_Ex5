/*
Ismat - Engenheiria Informática 1º Ano
Fundamentos de Programação - Prof. Fracisco Pereira
Leandro Fonseca
17/11/2020 - 01:56
Resumo: Converter numero inteiro em caractere Ascii
Inputs: int instAsciiValue
Outputs:
 */
#include <stdio.h>

int main() {

    int intAsciiValue=0;
    char chrAscii='\0';
    int intExit=0;

    while (intExit !=1) {
        printf("Escolha um numero: ");
        scanf("%d", &intAsciiValue);
        if(intAsciiValue != 0)
        {
            if((intAsciiValue > 32) && (intAsciiValue < 129))
            {
                chrAscii = intAsciiValue;
                printf("Caracter: %c\n", chrAscii);
            }else
            {
                printf("Numero invalido!");
            }
        }else
        {
            intExit = 1;
        }
    }

    return 0;
}
