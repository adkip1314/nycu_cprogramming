#include<stdio.h>
#include<string.h>

int main(){
  char s[100];
  scanf("%s", s);
  int i = strlen(s);
  for(int j =0; j<i; j++){
    printf("%d\n",(int)s[j]);
  }

  return 0;

}
