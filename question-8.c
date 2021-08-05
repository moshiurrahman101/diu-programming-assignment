#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n;
  printf("Input the number (Table to be calcualted) : ");
  scanf("%d", &n);
  
  for(int i=1; i <= 10; i++){
      printf("%d x %d = %d \n",n, i, n*i);
  }
  return 0;
}
