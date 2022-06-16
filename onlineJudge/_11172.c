//	Relational Operator		https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2113
#include <stdio.h>

int main()
{
	int t,a,b;
	scanf("%d",&t);
	while(t-- && t<15){
		scanf("%d%d",&a,&b);
		if (a > b) printf(">\n");
		else if (a < b) printf("<\n");
		else printf("=\n");
	}
	return 0;
}