#include <stdio.h>
int main(int argc, char const *argv[])
{
    int numbers[5], sum = 0;

    for(int i = 0; i < 5; i++){
        printf("Input the %dst number: ", i+1);
        scanf("%d", &numbers[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        if(numbers[i]%2 !=0){
            sum = sum + numbers[i];
        }  
    }
    
    printf("Sum of all odd values %d", sum);
    
    return 0;
}
