#include <stdio.h>

int main()
{
    int a,h,m,s;
    scanf("%d",&a);
//    printf("%d:%d:%d\n",a/3600,(a%3600)/60,(a%3600)%60);
    h = a/3600;
    a %= 3600;
    m = a/60;
    a %= 60;
    s = a;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
