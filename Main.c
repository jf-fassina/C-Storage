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

int input;

  do{ // insiste no valor entre 0 e 3 pq nois eh comedia
  char buffer[2];
  //[2] = buffer de 2 caracteres S2
  
  printf("\n======================\n[1]Download\n[2]Upload\n\n\n[0]Sair\n======================\n");
  printf("Digite seu destino: \n");
  
  //standard in ou teclado para os noobs como eu
  fgets(buffer,2,stdin);
  
  if(sscanf(buffer,"%d", &input) != 1){
  
  //em teoria essa merda e pra ser segura pra caralho S2
  }
  
  
 } while (input < 0 || input > 3);
 
 //A MERDA DO "DO WHILE" NOA FUNCOINRA PUTA MERDA E UVO UMATAR AGLUEM
 


  if (input == 0){
    printf("Fechamento Solicitado.\n");
  return 0;
  } if (input == 1){
    printf("1%s\n", CHCK_SUCCESS);
  } else if (input == 2){
    printf("2%s\n", CHCK_SUCCESS);
  } else if (input == 3){
    printf("3%s\n", CHCK_SUCCESS);
  } else {
    printf("%s\n", CHCK_ERROR);
  }


 // printf("Cole o caminho para o arquivo zip ('desktop/exemplo.zip'): ");
  //input reader aqui S2 


  //lerArquivo("Teste.zip");

  return 0;//indica sucesso
}

