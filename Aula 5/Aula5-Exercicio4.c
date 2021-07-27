/*
 * @file: Aula5-Exercicio4.c
 * @date: 27/07/2021
 * @author: Darlan Oliveira Santos
 * @brief: Aula 05 exercicio 4
 * Calcule a média aritmética de 4 números reais que o usuário
 *digitar. Imprima a média na tela apenas com 2 casas decimais.
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
  float media,nota;
  float soma = 0;
  printf("Digite a nota 1\n");//printar no cmd
  scanf("%f",&nota);//pega a inserção do usuario e guarda na variavel
  soma += nota;//adiciona a nota na soma
  printf("Digite a nota 2\n");//printar no cmd
  scanf("%f",&nota);//pega a inserção do usuario e guarda na variavel
  soma += nota;//adiciona a nota na soma
  printf("Digite a nota 3\n");//printar no cmd
  scanf("%f",&nota);//pega a inserção do usuario e guarda na variavel
  soma += nota;//adiciona a nota na soma
  printf("Digite a nota 4\n");//printar no cmd
  scanf("%f",&nota);//pega a inserção do usuario e guarda na variavel
  soma += nota;//adiciona a nota na soma
  media = soma/4;//calculando a media
  printf("A media eh %.2f\n",media);//printar no cmd
  return 0;//se o programa rodar certo, retorna 0
}//main
