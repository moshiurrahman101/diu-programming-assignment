#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    printf("The first 10 natural number is: \n");
    
    for(int i = 0; i <= 10; i++){
        printf("%d ",i);
        sum = sum + i;
    }
    
    printf("\nThe sum is : %d", sum);
    return 0;
}
