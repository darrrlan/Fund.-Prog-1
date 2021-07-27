/*
 * @file: Aula4-Exercicio1.c
 * @date: 26/07/2021
 * @author: Darlan Oliveira Santos
 * @brief: Aula 04 exercicio 1
 * Faça um programa com 2 variáveis, A e B, onde A terá
 *o valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B,
 *AxB e A/B. Em seguida, faça B incrementar de uma
 *unidade e repita as 4 operações.
*/

//============================================
//Bibliotecas
//============================================
 #include <stdio.h>
 #include <stdlib.h>
//============================================
//main
//============================================
int main(){
  int A = 40;
  int B = -1;
  printf("A+B = %d\n",A+B);//printa a soma de A+B
    printf("A-B = %d\n",A-B);//printa a subtração de A-B
      printf("A*B = %d\n",A*B);//printa a multiplicação de A*B
        printf("A/B = %d\n",A/B);//printa a divisão de A/B
        printf("\n");//salta uma linha no cmd
  B++;
  printf("A+B = %d\n",A+B);//printa a soma de A+B, depois do incremento
    printf("A-B = %d\n",A-B);//printa a subtração de A-B, depois do incremento
      printf("A*B = %d\n",A*B);//printa a multiplicação de A*B, depois do incremento
        printf("A/B = %d\n",A/B);//printa a divisão de A/B, depois do incremento
        //e não é possível, pois não existe número dividido por 0
  return 0;//se o programa rodar certo, retorna 0
}//main
