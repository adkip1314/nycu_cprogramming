#include<stdio.h>
#include<string.h>
#include<assert.h>
#define pathlen 40
#define File 40

int main(void){
  char pathname[pathlen];
  scanf("%s",pathname);
  char *start = pathname;
  char file[File][pathlen]; //字串陣列

  int filecount = 0;
  if(*start =='/') //跳過一個根
    start++;

  while(start!= NULL){
    char *slash=strchr(start, '/'); //找到下一個根的位置
    if(slash == NULL){ //如果沒有下一個根
      strcpy(file[filecount], start); //將剩餘的字元印至字串陣列
      filecount++; 
      start=NULL;
    }
    else{
      strncpy(file[filecount],start,slash-start); //將下一個子目錄前的字元印至字串陣列
      file[filecount][slash-start] = '\0'; //設字串陣列最後一個字元為0 以檢查
      filecount++;
      start = slash +1; //調整至下一個子目錄的第一個字元
    }
    assert(filecount<File);
  }
  for(int i =0; i < filecount; i ++)
    printf("%s\n", file[i]);

  return 0;
}
