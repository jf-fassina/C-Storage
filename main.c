/*Debian Compile command 
cc "/home/fassina/Documentos/Codigos/C/Discord Armazenamento/main.c" -lzip
*/
#include <zip.h>
#include <stdio.h>

int main(){

int erro = 0;
/*
*Vai criar o erro, se 0, deu certo, se der o outro num
*significa que teve erro e seu codigo ficara nesta variavel
*/

const char *caminho = "home/fassina/Imagens/Teste.zip";

struct zip *arquivo = zip_open(caminho, 0, &erro);
/*O 0 indentifica que sera aberto no modo leitura!
*o local que o 0 esta vai as "flags" os parametros que se utiliza 
*neste arquivo, por ex: ZIP_CREATE, cria o arquivo se nao existe
*/

if(arquivo == NULL){
  printf("Erro ao abrir o arquivo: %d\n", erro);
  return 1;//Indica falha!
} else {
  printf("Sucesso ao abrir o arquivo mister Sigma Boy");
}


zip_close(arquivo); 
//Fecha o arquivo

return 0;//indica sucesso
}
