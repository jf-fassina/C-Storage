#include <stdio.h>
#include <stdlib.h> 

#include "errors.h"

#include "HComp.c"

/*
 * Debian Compile command 
 * cd "/home/fassina/Documentos/Codigos/C/C-Storage"
 * cc Main.c -o C-Storage_Main.out
 * ./C-Storage_Main.out
 */

int main(){

int x;

  do{ // insiste no valor -1, 1 ou 2 pq nois eh comedia
      //Não pode ser zero por que essa desgraça trata o 0 como erro ;(
  char buffer[1];

  printf("\n======================\n[1]Download\n[2]Upload\n\n\n[-1]Sair\n======================\n");
  printf("Digite seu numero de destino: \n");
  
  scanf("%s", &buffer);
  
  //ele retorna o numero de sucesso
  if(sscanf(buffer,"%d",&x) == 0){
  printf("Favor digite UM(1) numero VALIDO.\n");
  }
 } while (x == 0 || x < -1 || x > 2);
  
  if (x == -1){
    printf("Fechamento Solicitado.\n");
    return 0;
  } 
  
  if (x == 1){//Download




    printf("1%s\n", CHCKS);
  } else if (x == 2){//Upload
    printf("2%s\n", CHCKS);
  } else {
    printf("%s, %s\n", CHCKE, E601);
  }


 // printf("Cole o caminho para o arquivo zip ('desktop/exemplo.zip'): ");
  //input reader aqui S2 


  //lerArquivo("Teste.zip");

  return 0;//indica sucesso
}

