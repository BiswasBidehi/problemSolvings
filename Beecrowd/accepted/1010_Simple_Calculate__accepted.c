#include <stdio.h>

int main()
{
    int product, number;
    float unit;
    int product1, number1;
    float unit1;
    scanf("%d%d%f",&product,&number,&unit);
    scanf("%d%d%f",&product1,&number1,&unit1);
    printf("VALOR A PAGAR: R$ %.2f\n",number*unit+number1*unit1);
    return 0;
}
