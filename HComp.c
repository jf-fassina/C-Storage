#include <stdio.h>
#include <stdlib.h>

#include "errors.h"

/*
 * Debian Compile command
 * cd "/home/fassina/Documentos/Codigos/C/C-Storage"
 * cc Main.c -o hComp.out
 * ./hComp.out
 */


char getSimb(const char *c){

  FILE a = fopen(c, "r");

  if(a != NULL){

  fseek(f, 0, SEEK_END); // seek to end of file
  size = ftell(f);       // get current file pointer
  fseek(f, 0, SEEK_SET); // seek back to beginning of file
  // proceed with allocating memory and reading the file

  char s[size];
  
    do{
      int i;
      char lst;
      
      if(s[i] != lst){
        fgets(s, size, a);
        lst == s[i];
      } 
      ++i;
    }while(size);

  fclose(a);
  return s;
  } else {
    printf("%s, %s", CHCKE, E201);
  }

  
}

void cNode(const char *a){
  
}
