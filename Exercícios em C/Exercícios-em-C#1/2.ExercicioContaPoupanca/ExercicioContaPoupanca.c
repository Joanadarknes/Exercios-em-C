
// Faça um programa em C que leia o saldo de uma conta poupança e imprima o novo saldo, considerando um reajuste de 2%.


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main()
{
 float saldo;
 printf("Informe o valor do saldo: ");
 scanf("%f",&saldo);
 printf("O saldo corrigido e %4.2f\n\n",saldo * 1.02);
 system("PAUSE");
 return 0;
}