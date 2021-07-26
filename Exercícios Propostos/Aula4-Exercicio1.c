/*
 * @file: Aula4-Exercicio1.c
 * @date: 26/07/2021
 * @author: Darlan Oliveira Santos
 * @brief: Aula 04 exercicio 1
 * Escreva um programa para determinar a quantidade de litros
 *de combustível gastos em uma viagem por um automóvel que
 *faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem
 *é de 35 min e a velocidade média do automóvel é 80 km/h.
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
  float hora;
  float percorreu;
  float combustivel;
  hora = (float)35/60;
  percorreu = 80 * hora;
  combustivel = percorreu/12;
  printf("Gastou %.2f litros\n",combustivel );

  return 0;
}
