/*
 * @file: Aula4-Exercicio4.c
 * @date: 26/07/2021
 * @author: Darlan Oliveira Santos
 * @brief: Aula 04 exercicio 4
 * Tendo a Altura da pessoa definida como uma constante,
 *calcule seu peso ideal utilizando a seguinte fórmula:
 * peso ideal = 72.7 x altura – 58
*/

//============================================
//Bibliotecas
//============================================
 #include <stdio.h>
 #include <stdlib.h>
//============================================
#define ALTURA 1.90
//main
//============================================
int main(){
  float peso_ideal = 72.7 * ALTURA - 58;//onde ocorre o calculo do peso idela
  printf("Seu peso ideal eh: %.2f\n",peso_ideal );//printa no cmd
  return 0;//se o programa rodar certo, retorna 0
}//main
