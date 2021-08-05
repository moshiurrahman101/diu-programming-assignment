#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n;
  printf("Input numbers of triangle rows : ");
  scanf("%d", &n);
  
  for(int i=1; i <= n; i++){
      for(int j=1; j <= i; j++){
        printf("* ");
      }
    printf("\n");
  }
  return 0;
}
