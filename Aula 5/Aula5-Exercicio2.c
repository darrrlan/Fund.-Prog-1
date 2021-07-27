/*
 * @file: Aula5-Exercicio2.c
 * @date: 27/07/2021
 * @author: Darlan Oliveira Santos
 * @brief: Aula 05 exercicio 2
 *Faça um programa que calcule e mostre a idade de uma
 *pessoa a partir do ano em que a pessoa nasceu e do ano atual.
 *Os valores serão digitados pelo usuário.
 *Obs.:Considere que ela já fez aniversário neste ano.
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
  int ano;
  int idade;
  printf("Em que ano voce nasceu?\n");//printa no cmd
  scanf("%i",&ano);//pega a inserção do usuario e guarda na variavel
  idade = 2021 - ano;// onde acontece o calculo da idade
  printf("Sua idade eh %i anos.\n",idade);//printa no cmd
  return 0;//se o programa rodar certo, retorna 0
}//main
