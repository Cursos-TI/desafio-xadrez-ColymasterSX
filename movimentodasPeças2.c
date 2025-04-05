#include <stdio.h>

//recursividade da torre
/*
- Com o void criei a recursividade da movertorre,tendo a variavel casas dentro desse void.
- Usei o IF pra,comparação que se,variavel casas for maio que 0 ela vai ser verdadeira,fazendo assim um loop ate,a comparação ser falsa.
- Depos um printf imprimindo uma mensagem,indicando o movimento da peça torre.
- No final a recursividade  com a variavel casas recebe decremento(--).
*/
void movertorrer(int casas){
    if (casas > 0)
    {
        printf("direita\n");

        movertorrer(casas - 1);
    }
}

//recursividade do bispo
/*
> loop externo:
- Com o void criei a recursividade  moverbispo,tendo a variavel casas1 dentro desse void.
- Usei o IF pra,comparação que se,variavel casas1 for maio que 0 ela vai ser verdadeira,fazendo assim um loop ate,a comparação ser falsa.
- No final printf pra imprimir uma mensagem,indicando o movimento da peça bispo.
- E depos a recursividade com a variavel casas1 recendo um decremento(--).

> Loop interno:
- Com o For,criei a variavel i recebendo 0,fazendo a comparação que;quando i for igual a 0,a condição e verdadeira,e incrementando(++),privinindo um loop infinito.
- Depois um printf pra imprimir a mensagem,indicando o movimento da peça bispo.
*/
void moverbispo(int casas1){
    if (casas1 > 0)
    {
      for (int i = 0; i == 0; i++)
      {
        printf("pra cima\n");
      }
      
      printf("direita\n");

      moverbispo(casas1 - 1);
    }
}

//recursividade da rainha
/*
- Com o void criei a recursividade da moverRainha,tendo a variavel casas2 dentro desse void.
- Usei o IF pra,comparação que se,variavel casas2 for maio que 0 ela vai ser verdadeira,fazendo assim um loop ate,a comparação ser falsa.
- Depos um printf imprimindo uma mensagem,indicando o movimento da peça rainha.
- No final a recursividade  com a variavel casas2 recebe decremento(--)
*/
void moverRainha(int casas2){
    if (casas2 > 0)
    {
       printf("esquerda\n");

       moverRainha(casas2 - 1);
    }
}

//recursividade do cavalo
/*
> loop externo:
- Com o void criei a recursividade  moverCavalo,tendo a variavel casas3 dentro desse void.
- Usei o IF pra,comparação que se,variavel casas3 for maio que 0 ela vai ser verdadeira,fazendo assim um loop ate,a comparação ser falsa.
- No final printf pra imprimir uma mensagem,indicando o movimento da peça cavalo.
- E depos a recursividade com a variavel casas3 recendo um decremento(--).

> Loop interno:
- Com o For,criei a variavel j recebendo 0,fazendo a comparação que;quando j for igual a 0,a condição e verdadeira,e incrementando(++),privinindo um loop infinito.
- Depois um printf pra imprimir a mensagem,indicando o movimento da peça cavalo.
*/
void moverCavalo(int casas3){
    if (casas3 > 0)
    {
        for (int j = 0; j == 0; j++)
        {
            printf("pra cima\n");
        }
        
       printf("direita\n");

       moverCavalo(casas3 - 1);
    }
}

int main() {


    printf("--- movimento da torre ---\n");//printf imprimindo informação pra deixa mais organizado no terminal.
    movertorrer(5);//codego da recursividade da torre.
    printf("\n");//serve pra somente deixa um espaço em branco no terminal,como se fosse pular uma linha completa.


    printf("--- movimento do bispo ---\n");//printf imprimindo informação pra deixa mais organizado no terminal.
    moverbispo(5);//codego da recursividade do bispo.
    printf("\n");//serve pra somente deixa um espaço em branco no terminal,como se fosse pular uma linha completa.


    printf("--- movimento da rainha ---\n");//printf imprimindo informação pra deixa mais organizado no terminal.
    moverRainha(8);//codego da recursividade da rainha.
    printf("\n");//serve pra somente deixa um espaço em branco no terminal,como se fosse pular uma linha completa.


    printf("--- movimento do cavalo ---\n");//printf imprimindo informação pra deixa mais organizado no terminal.
    moverCavalo(1);//codego da recursividade do cavalo.
    printf("\n");//serve pra somente deixa um espaço em branco no terminal,como se fosse pular uma linha completa.

    return 0;
}