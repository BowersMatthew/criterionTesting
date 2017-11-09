#include<criterion/criterion.h>
#include<stdio.h>
#include "HelloWorld.h"

void setup(void){

}

Test(asserts, helloWorldReturnTest){
  cr_assert_str_eq(helloWorld(), "Hello World!");
}

Test(asserts, squaredWorks){
  cr_assert_eq(square(4), 4*4);
}

Test(asserts, countEvensTest1){
  int values[10] = {1,2,3,4,5,6,7,8,9,10};
  cr_assert_eq(countEvens(values, 10), 5);
}

Test(asserts, countEvensTest2){
  int values[10] = {2,2,16,4,8,6,7,8,9,10};
  cr_assert_eq(countEvens(values, 10), 8);
}

Test(asserts, count1Bits2){
  int num = 2;
  cr_assert_eq(countBits(num), 1);
}

Test(asserts, count1Bits16){
  int num = 15;
  cr_assert_eq(countBits(num), 4);
}

Test(asserts, count1BitsNeg){
  int num = -2;
  cr_assert_eq(countBits(num), 30);
}
