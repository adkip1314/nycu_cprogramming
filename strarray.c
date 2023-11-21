#include<stdio.h>
#include<string.h>

int main(){
  char sarray[3][40];
  char *sptr[3];
  for(int i=0;i<3;i++){
    scanf("%s",sptr[i]);
    //sptr[i]=sarray[i];
  }
  for(int i = 0;i<3;i++){
    printf("%s\n",sptr[i]);
  }
  
  return 0;

}
