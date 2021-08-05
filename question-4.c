#include <stdio.h>
int main(int argc, char const *argv[])
{
    char months[12][10] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int number;
    printf("Input a number between 1 to 12 to get the month name: ");
    scanf("%d", &number);
    number = number - 1;
    
    printf("%s ", months+number);
    return 0;
}
