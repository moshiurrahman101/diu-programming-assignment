#include <stdio.h>

int main(int argc, char const *argv[])
{
    int years, weeks, days, testdata;

    printf("Test Data :");
    scanf("%d", &testdata);

    years = testdata / 365;
    weeks =  (testdata % 365) / 7;
    days = (testdata % 365) % 7;

    printf("\nYears: %d", years);
    printf("\nWeeks: %d", weeks);
    printf("\nDays: %d", days);

    getchar();
    return 0;
}
