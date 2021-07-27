/*
 * @file: Aula5-Exercicio4.c
 * @date: 27/07/2021
 * @author: Darlan Oliveira Santos
 * @brief: Aula 05 exercicio 4
 * Sabendo que a função sqrt(valor), que está na biblioteca
 *math.h retorna a raiz quadrada do valor, calcule a raiz
 *quadrada de um número que o usuário digitar.
*/
//============================================
//Bibliotecas
//============================================
 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>
//============================================
//main
//============================================
int main(){
  //variaveis
  double quadrado;
  int numero;
  printf("Digite um numero!\n");//printar no cmd
  scanf("%i",&numero);//pega a inserção do usuario e guarda na variavel
  quadrado = sqrt(numero);// onde calcula a raiz do numero
  printf("A raiz do numero digitado eh: %lf\n",quadrado);//printar no cmd
  return 0;//se o programa rodar certo, retorna 0
}//main
