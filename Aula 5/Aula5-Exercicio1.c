/*
 * @file: Aula5-Exercicio1.c
 * @date: 27/07/2021
 * @author: Darlan Oliveira Santos
 * @brief: Aula 05 exercicio 1
 *Faça um programa que receba a altura de uma pessoa e
 *calcule e exiba seu peso ideal utilizando a seguinte:
 *peso ideal = 72.7 x altura – 58
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
  float altura;
  float peso_ideal;
  printf("Digite sua altura\n");//printa no cmd
  scanf("%f",&altura );//pega a inserção do usuario e guarda na variavel
  peso_ideal = 72.7 * altura - 58;//calculo do peso ideal
  printf("Seu peso ideal eh: %.2f\n",peso_ideal);//printa no cmd
  return 0;//se o programa rodar certo, retorna 0
}//main
