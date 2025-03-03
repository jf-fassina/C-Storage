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

  printf("EU SEI QUE NAO TA ACEITANDO INPUT NESSA JOCA VEIA POR QUE EU TO COM PREGUICA DE FAZER O SCANNER");

  short input = 69;

  do // insiste no valor entre 0 e 2 pq nois eh comedia
  printf("\n======================\n[1]Download\n[2]Upload\n\n\n\n\n[0]Sair\n======================\n");
    printf("Digite seu destino: \n");
    //input reader aqui S2 

  while (input < 0 || (input > 2 && input != 22));
  //22 eh o acesso de adm S2 viva bosonaro
  if (input == 0){
    printf("Fim do Programa!\n");
  return 0;
  } if (input == 1){
    printf("%s\n", CHCK_SUCCESS!);
  } else if (input == 2){
    printf("%s\n", CHCK_SUCCESS!);
  } else if (input == 22){
    printf("%s\n", CHCK_SUCCESS!);
  } else {
    printf("%s\n", CHCK_ERROR);
  }


  printf("Cole o caminho para o arquivo zip ('desktop/exemplo.zip'): ");
  //input reader aqui S2 


  lerArquivo("Teste.zip");

  return 0;//indica sucesso
}

unsigned long long lerArquivo(const char *caminho){
  //const char *caminho = "Teste.zip";

  int erro = 0;
  /*
   * Vai criar o erro, se 0, deu certo, se der o outro num
   * significa que teve erro e seu codigo ficara nesta variavel
   */



  struct zip *arquivo = zip_open(caminho, 0, &erro);
  /* O 0 indentifica que sera aberto no modo leitura!
   * o local que o 0 esta vai as "flags" os parametros que se utiliza 
   * neste arquivo, por ex: ZIP_CREATE, cria o arquivo se nao existe
   */

  if(arquivo == NULL){
    printf("Erro ao abrir o arquivo: %d\n", erro);
    printf("%s\n", CHCK_ERROR);
    //ERRO 9 --> DEU CAQUINHA NO ZIP, TIPO .ZIPS DA ERRO 9
    return 1;//Indica falha, finaliza o programa!
  } 
  printf("%s\n", CHCK_SUCCESS);



  unsigned long long *maxSize = malloc(sizeof(unsigned long long)); 
  /*
   * Valor Maximo: 18446744073709551615ULL representa 18.4 exabytes (EB)
   * U signinifica Unsigned, LL long long!
   * 18,4 EB = 16,000 PB = 16,384,000 TB  
   * se pa nao chega no limite disso KKKKKKKKKK
   * precisa de um sistema x86 pra acessar tudo dessa merda que eu to fazendo S2
   */
  if(maxSize == NULL){ printf("Allocation error\n%s\n", CHCK_ERROR);}
  printf("%s\n", CHCK_SUCCESS);


  free(maxSize);
  //Libera a memoria alocada pelo malloc

  zip_close(arquivo); 
  //Fecha o arquivo

  return bytes;

}
