#include <stdio.h>
int main()
{ 
    double a,b,SALARY;
    char name[10];
    //gets(name); //warning: the `gets' function is dangerous and should not be used.
    fgets(name,10,stdin);
    scanf("%lf%lf",&a,&b);
    SALARY = a + b*.15;
    printf("TOTAL = R$ %.2f\n",SALARY);
    return 0;
}

