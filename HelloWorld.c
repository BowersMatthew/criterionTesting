#include <stdio.h>
#include "HelloWorld.h"

char* helloWorld(){
  printf("Hello World!\n");
  return "Hello World!";
}

double square(double num){
  return num*num;
}

int countEvens(int* arr, int size){
  int i, count=0;
  for(i = 0; i < size; i++){
    if(arr[i]%2 == 0){
      count++;
    }
  }
  return count;
}

int countBits(int num){
  int count = 0;
  // strip leading 0
  printf("%x\n", num);
  if(num & (1<<31))
    num = num ^ (0x1<<31);
  printf("%x\n", num);
  while (num != 0){
    if( num & 1){
      count++;
    }
    num = num >> 1;

  }
  return count;
}
