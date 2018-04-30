#include <stdio.h>
#include <stdlib.h>
#include "btree.h"
#include <string.h>




int main(int argc, char* argv[]){
  if (argc < 3){
    printf("Error sytax\n");
    return 0;
  }
  FILE* f;
  if ((f=fopen(argv[1],"r"))==NULL){
      printf("Open file Error\n");
      return 0;
  }
  BTA *dict = btcrt(argv[2],0,FALSE);
  char name[10],mean[200],ch;
  int i;
  for(i=1;i<=1000000;i++) {
  	fscanf(f,"%s",name);
  	fscanf(f,"%[^\n]%c",mean,&ch);
  	//printf("%s %s",name,mean);
  	btins(dict,name,mean,strlen(mean)+1);
  }
	btcls(dict);
  	close(f);
	return 0;
}