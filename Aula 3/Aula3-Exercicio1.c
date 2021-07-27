/*
 * @file: Aula3-Exercicio1.c
 * @date: 21/07/2021
 * @author: Darlan Oliveira Santos
 * @brief: Aula 03 exercicio 1
 * Elabore um programa que exiba o seu nome na primeira
 *linha e o seu e-mail segunda. Em seguida, exiba uma
 *mensagem solicitando para o usuário pressionar uma tecla.
 *Quando o usuário pressionar, exiba em uma nova linha o nome
 *do seu amigo e, em outra, o e-mail dele.
 * Dica: Pesquise a função getchar para capturar uma tecla do usuário
*/
//============================================
//Bibliotecas
//============================================
 #include <stdio.h>
 #include <stdlib.h>

 int main(){
   printf("Darlan Oliveira Santos\n");//printa no cmd
   printf("darlantn45@gmail.com\n");//printa no cmd
   getchar();//pega um caractere do teclado
   printf("tanto faz\n");//printa no cmd
   printf("tanto.faz@gmail.com\n");//printa no cmd
   return 0;//se o programa rodar certo, retorna 0
 } //main
