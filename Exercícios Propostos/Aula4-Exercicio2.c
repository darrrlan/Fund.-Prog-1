/*
 * @file: Aula4-Exercicio2.c
 * @date: 26/07/2021
 * @author: Darlan Oliveira Santos
 * @brief: Aula 04 exercicio 2
 * Uma conta de caderneta de poupança foi aberta com um
 *depósito de R$ 500,00. Imagine que esta conta é remunerada
 *em 1% de juros ao mês. Qual será o valor da conta após três
 *meses?
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
  int montante = 500 * pow(1+0.01,3);
  printf("Apos tres meses o valor da conta sera: %d\n",montante);
  return 0;
}
