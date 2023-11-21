#include<stdio.h>
#include<string.h>
int main(){
  char s[80];
  scanf("%s",s);
  int l= strlen(s);
  char *ptr=s;
  for(int i =0;i<l;i++){
    if(s[i]=='c'){
      printf("%s\n",ptr+i);
      break;
    }
  }
  return 0;

}
