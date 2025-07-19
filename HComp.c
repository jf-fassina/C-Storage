#include <stdio.h>
#include <stdlib.h>

#include "errors.h"

/*
 * Debian Compile command
 * cd "/home/fassina/Documentos/Codigos/C/C-Storage"
 * cc Main.c -o hComp.out
 * ./hComp.out
 */


char getSimb(const char *_c){

  FILE arq = fopen(_c, "r");

  if(arq != NULL){
  fseek(f, 0, SEEK_END); // seek to end of file
  size = ftell(f);       // get current file pointer
  fseek(f, 0, SEEK_SET); // seek back to beginning of file

  char buff[size][];
  int i = 0;
  char last;

  do{
    if(last == buff[i]){
      i++
    }



    }while(arq != EOF);

  fclose(a);
  return s;

  } else {
    printf("%s, %s", CHCKE, E201);
  }

  
}

void cNode(const char *a){
  
}
