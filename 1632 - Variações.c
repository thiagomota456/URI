#include<stdio.h>

int variacoesPossiveis(char * string){

  int i;

  //Inicializo variavel com elemento neutro da multiplicacao

  int possibilidade = 1;

  //Faz a multiplicação das combinações possiveis do elemento

  for(i = 0; string[i] != '\0'; i++){

    //Se existe 3 combinações possiveis pra letra

    if( string[i] == 'A' || string[i] == 'a' ||
        string[i] == 'E' || string[i] == 'e' ||
        string[i] == 'I' || string[i] == 'i' ||
        string[i] == 'O' || string[i] == 'o' ||
        string[i] == 'S' || string[i] == 's'   ){

          possibilidade *= 3;

        }else{

          //Caso exista 2 combinações possiveis pra letra

          possibilidade *= 2;
        }

  }//end for

  return possibilidade;

}//end variacoesPossiveis

int main(){

  int quantidadeDeSenhas;

  //Novamente deixando uma folga seguindo as recomentações do gcc

  char senha[20];

  //Le quantidade de quantidade de senhas

  scanf("%d", &quantidadeDeSenhas);

  //Le senha e printa o numero de combinações possiveis

  while (quantidadeDeSenhas--) {

    scanf("%s", senha);
    printf("%d\n", variacoesPossiveis(senha));

  }//end while


  return 0;
}//end main
