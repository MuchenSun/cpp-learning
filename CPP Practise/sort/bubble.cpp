#include <stdio.h>
#include <stdlib.h>

/// bubble sort

void randIni(int *,int);
void putTest(int *,int);
void bubSort(int *,int);
void choSort(int *,int);

int main(){
  int test[10];
  randIni(test,10);
  putTest(test,10);

  bubSort(test,10);
  putTest(test,10);

  choSort(test,10);
  putTest(test,10);
  return 0;
}

void randIni(int * test,int length){
  for(int i=0;i<length;i++){
    test[i] = rand()%20;
  }
}

void putTest(int * test,int length){
  for(int i=0;i<length;i++){
    printf("%4d",test[i]);
  }
  printf("\n");
}

void bubSort(int * test,int length){
  int i,j,temp;
  for(i=0;i<length-1;i++){
    for(j=0;j<length-1-i;j++){
      if(test[j]>test[j+1]){
        temp = test[j];
        test[j] = test[j+1];
        test[j+1] = temp;
      }
    }
  }
}

void choSort(int * test,int length){ // no need to pick up the biggest one
  int i,j,temp;
  int max=test[0],label=0;
  for(i=length-1;i>0;i--){
    for(j=0;j<i;j++){
      if(test[j]<test[i]){
        temp = test[j];
        test[j] = test[i];
        test[i] = temp;
      }
    }
  }
}
