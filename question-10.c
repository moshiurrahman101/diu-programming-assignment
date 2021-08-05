#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n, count = 0;
  printf("Input a number : ");
  scanf("%d", &n);
  
  for(int i=2; i < n; i++){
    if(n % i == 0){
        count += 1;
    }
  }
  
  if(count==0){
      printf("%d is prime number.", n);
  }else{
      printf("%d is not prime number.", n);
  }
  return 0;
}
