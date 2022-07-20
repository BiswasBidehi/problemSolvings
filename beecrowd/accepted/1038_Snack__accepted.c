#include <stdio.h>

int main()
{
    int a,b;
    float c[5] = {4.0,4.5,5.0,2.0,1.5};
    scanf("%d%d",&a,&b);
    printf("Total: R$ %.2f\n",c[a-1]*b);
    return 0;
}
