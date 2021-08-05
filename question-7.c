#include <stdio.h>

int main(int argc, char const *argv[])
{
  int numbers[10]={};
  int sum = 0;
  float avarage;
  printf("Input the 10 numbers: \n");
    
  for(int i = 0; i < 10; i++){
    printf("Number-%d : \n", i+1);
    scanf("%d", &numbers[i]);
    sum = sum + numbers[i];
  }
    
  avarage = (float)sum / (float)10;
  printf("The sum of 10 number is : %d \n", sum);
  printf("The Avarage is : %f", avarage);
  return 0;
}
