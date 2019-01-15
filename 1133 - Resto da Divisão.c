#include<stdio.h>

int main(){

  int valorX, valorY;
  int aux;
  int i;

  scanf("%d", &valorX);
  scanf("%d", &valorY);

  //Se X menor que Y troco os dois

  if(valorX > valorY){

    aux = valorX;
    valorX = valorY;
    valorY = aux;

  }

  //i percorre o intervalo valorX < i < valorY

  for(i = valorX+1; i < valorY; i++){

    //Caso i%5 igual a 2 ou 3 printa

    if(i%5==2 || i%5==3){
      printf("%d\n", i );
    }

  }//end for

}//end main
