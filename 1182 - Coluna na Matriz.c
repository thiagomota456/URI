#include<stdio.h>
#define TAM 12
void preencheMatrizQuadrada(double matriz[TAM][TAM]){

}
int main(){

  int coluna, i, j;
  char operacao;
  double matriz[TAM][TAM], elemento;

  //Le coluna e operação a ser realizadas

  scanf("%d", &coluna);
  scanf(" %c", &operacao);

  //preenche matriz

  for(i = 0; i < TAM; i++){

    for(j = 0; j < TAM; j++){

      scanf("%lf", &elemento);
      matriz[i][j]= elemento;

    }//end j

  }//end for i

  //Zero varaivel que recebera o resultado
  elemento = 0;

  //Realizo a operacao sobre a coluna escolhida

  for(i = 0; i < TAM; i++){
    elemento += matriz[i][coluna];
  }

  //Caso media

  if ('M' == operacao)
    elemento = elemento/i;

  printf("%.1f\n", elemento);


  return 0;
}//end main
