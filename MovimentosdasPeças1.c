#include <stdio.h>


int main(){

//estou criando as variaves com o valor 0
int torre = 0;
int rainha = 0;



printf("--- movimentação do bispo ---\n");//printa uma mensagem no terminal fora do loop pra nao fica repetindo,indicando qual é apeça e,deixando mais organiçado o terminal
printf("\n");//so pra deixa um espaço em branco separando os printes,pra organizar melhor a visualização no terminal

//linha do codego do loop For
/*
- Declarei uma variavel bispo que ta recendo o valor 0 dentro do loop.
- Depois  usei o operador relacionais para cria a logica do loop,ate 5,indicando o numero de repetição.
- E coloquei a variavel bispo recebendo um incremento(++) mais 1 toda vez que o loop se reperti,para ter uma finalização,e nao fica repetindo infinitamento.
- Usei o printf para printa uma mensagem do terminal indicando o movimento da peça do bispo.
*/
for(int bispo = 0;bispo < 5;bispo++)
{
    printf("cima\n");
    printf("direita\n");
}

printf("--- movimento da torre ---\n");//printa uma mensagem no terminal fora do loop pra nao fica repetindo,indicando qual é apeça e,deixando mais organiçado o terminal
printf("\n");//so pra deixa um espaço em branco separando os printes,pra organizar melhor a visualização no terminal

//linhas de codego do loop while
/*
- Usei um operador relacionais com a variavel torre criada no inicio do codego para cria a logica do loop,ate 5,indicando o numero de repetição.
- O printf esta imprimindo no terminal a mensangem,indicando o movimento da peça da torre.
- E usei operador incremento(++),para a variavel receber mais 1 sempre que reperti,previnindo um loop infinito.
*/
while (torre < 5)
{
   printf("direita\n");
   torre++;
}

printf("--- movimento da rainha ---\n");//printa uma mensagem no terminal fora do loop pra nao fica repetindo,indicando qual é apeça e,deixando mais organiçado o terminal
printf("\n");//so pra deixa um espaço em branco separando os printes,pra organizar melhor a visualização no terminal

//linhas do loop do-while
/*
- Estou imprimindo com printf uma mensagem,indicando o movimento da peça da rainha.
- Usei um operador incremento(++),para a variavel receber mais 1 sempre que reperti,previnindo um loop infinito.
- Depos Usei a variavel rainha criada no inicio do codego,com operador relacionais para cria a logica do loop,ate 8,indicando o numero de repetição.
*/
do
{
   printf("esquerda\n");
   rainha++;

} while (rainha < 8);

return 0;

}