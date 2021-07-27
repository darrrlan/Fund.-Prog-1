/*
 * @file: Aula5-Exercicio3.c
 * @date: 27/07/2021
 * @author: Darlan Oliveira Santos
 * @brief: Aula 05 exercicio 3
 *Tendo como entrada de dados o total vendido por um
 *funcionário no mês, calcule a sua comissão e o salário bruto no
 *mês. Para isso, considere um salário base de R$1.200,00 e
 *comissão de 10% sobre o total vendido.
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
  float total_vendido;
  float salario;
  printf("Quanto foi vendido esse mes ?\n");//printar no cmd
  scanf("%f",&total_vendido);//pega a inserção do usuario e guarda na variavel
  salario = total_vendido * 0.1 + 1200;//calculo do salario
  printf("Seu salario esse mes eh R$%.2f reais\n",salario);//printar no cmd
  return 0;//se o programa rodar certo, retorna 0
}//main
