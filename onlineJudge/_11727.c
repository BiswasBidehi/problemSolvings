// Cost Cutting 	https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2827

#include <stdio.h>
int main()
{
	int t,a,b,c,i = 1;
	scanf("%d",&t);
	while(i <= t && t < 20){
		scanf("%d%d%d",&a,&b,&c);
		if(a > b && b > c) printf("Case %d: %d\n", i,b);
		if(a > c && c > b) printf("Case %d: %d\n", i,c);
		if(b > a && a > c) printf("Case %d: %d\n", i,a);
		if(b > c && c > a) printf("Case %d: %d\n", i,c);
		if(c > a && a > b) printf("Case %d: %d\n", i,a);
		if(c > b && b > a) printf("Case %d: %d\n", i,b);
		i++;
	}

	return 0;
}