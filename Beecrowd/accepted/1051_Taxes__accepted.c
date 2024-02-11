#include <stdio.h>

int main()
{
    float a,tax;
    scanf("%f",&a);
    if(a>=0 && a<=2000.0){
        tax = 0; 
        printf("Isento\n");
    }
    else{
        if(a>4500.00)
            tax = (a-4500.00)*0.28 + (1500*0.18) + 1000.00*0.08;
        else if(a>3000 && a<=4500)
            tax = (a-3000.0)*0.18 + 1000*0.08;
        else if (a>2000.0 && a<=3000)
            tax = (a-2000)*0.08;

        printf("R$ %.02f\n",tax);
    }
    return 0;
}
