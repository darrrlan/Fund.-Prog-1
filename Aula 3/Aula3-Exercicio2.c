/*
 * @file: Aula3-Exercicio1.c
 * @date: 26/07/2021
 * @author: Darlan Oliveira Santos
 * @brief: Aula 03 exercicio 2
 * Declare duas variáveis inteiras A e B e atribua valores
 *diferentes. Em seguida, efetue a troca dos valores de forma
 *que, a variável A passe a possuir o valor da variável B, e que a
 *variável B passe a possuir o valor da variável A. Apresente os
 *valores iniciais e finais de A e B.
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
  //variaveis
  int a = 10;
  int b = 20;
  int aux;
  printf("Valor de A: %d\n",a);//printa no cmd
  printf("Valor de B: %d\n",b);//printa no cmd
  //A recebe o valor de B e B recebe o valor de A,
  //com ajuda de um variavel auxiliar.
  aux = a;
  a = b;
  b = aux;
  printf("\n");//printa no cmd
  printf("Valor de A: %d\n",a);//printa no cmd
  printf("Valor de B: %d\n",b);//printa no cmd
  return 0;//se o programa rodar certo, retorna 0
}//main
