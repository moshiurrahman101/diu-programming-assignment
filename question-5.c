#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number;
    printf("Input an Integer : ");
    scanf("%d", &number);
    
    for(int i = 1; i <= number; i++){
        if(number%i==0){
            printf("%d \n", i);
        }
    }
    return 0;
}
