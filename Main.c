#include <zip.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * Debian Compile command 
 * cd "/home/fassina/Documentos/Codigos/C/C-Storage"
 * cc Main.c -lzip -o C-Storage_Main.out
 * ./C-Storage_Main.out
 */

//ERROR CHECKPOINTS BECAUS YO SOY MACACO
#define CHCK_SUCCESS "FULL BOX, 200"
#define CHCK_ERROR "SADDAM HUSSEIN HIDING SPOT FOUND"


int main(){

int x;


  do{ // insiste no valor entre 0 e 3 pq nois eh comedia

  char buffer[1];

  printf("\n======================\n[1]Download\n[2]Upload\n\n\n[-1]Sair\n======================\n");
  printf("Digite seu numero de destino: \n");
  
  scanf("%s", &buffer);
  
  //ele retorna o numero de sucesso
  if(sscanf(buffer,"%d",&x) == 0){
  printf("Favor digite UM(1) numero VALIDO.\n");
  }

 } while (x < 0 || x > 3);
  
 //A MERDA DO "DO WHILE" NOA FUNCOINRA PUTA MERDA E UVO UMATAR AGLUEM
 


  if (x == 0){
    printf("Fechamento Solicitado.\n");
    return 0;
  } 
  
  if (x == 1){
    printf("1%s\n", CHCK_SUCCESS);
  } else if (x == 2){
    printf("2%s\n", CHCK_SUCCESS);
  } else {
    printf("%s\n", CHCK_ERROR);
  }


 // printf("Cole o caminho para o arquivo zip ('desktop/exemplo.zip'): ");
  //input reader aqui S2 


  //lerArquivo("Teste.zip");

  return 0;//indica sucesso
}

