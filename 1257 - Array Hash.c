#include<stdio.h>
#include<string.h>

int calculaValorDaString(char * string, int elementoDeEntrada){

  int i;
  int valorDaString = 0;

  //Percorre toda string calculando elemeto a elemto Valor = (Posição no alfabeto) + (Elemento de entrada) + (Posição do elemento)

  for (i = 0; i < strlen(string); i++){

     valorDaString += (string[i]-65) + elementoDeEntrada + i;
  }

  //Retorna valor da string

  return valorDaString;

}//end calculaValorDaString

int main(){

  int casosDeTestes, numeroDePalavras;
  int i, j, valorDasStrings = 0;

  //Alguns espações a mais pq no gcc costumavam recomendavam colocar

  char string[55];

  //Leio quantidade de casos de testes

  scanf("%d", &casosDeTestes);

  //Leio os casos de testes n vezes de acordo com o valor de elemetos de entrada

  for(i = 0; i < casosDeTestes; i++){

    //printf("i = %d\n", i);

    //Leio o número de linhas

    scanf("%d", &numeroDePalavras);

    //Leio as palavras

    for ( j = 0; j < numeroDePalavras; j++) {

      scanf("%s", string);
      valorDasStrings += calculaValorDaString(string, j);

    }//end for j

    //Printo valor das strings e zero variavel

    printf("%d\n", valorDasStrings);
    valorDasStrings = 0;

  }//end for


  return 0;
}//end main

