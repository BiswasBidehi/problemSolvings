#include <stdio.h>

int main()
{
    int long long has, oppo;
    while(scanf("%lld%lld",&has,&oppo) != EOF){
        printf("%lld\n",(has <= oppo) ? oppo - has : has - oppo);
    }
    return 0;
}
