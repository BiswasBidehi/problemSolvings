#include <stdio.h>

int main()
{
    char month[12][15] = {"January","February",\
                        "March","April","May",\
                        "June","July","August",
                        "September","October","November","December"};
    int a;
    scanf("%d",&a);
    puts(month[a-1]);
    return 0;
}

