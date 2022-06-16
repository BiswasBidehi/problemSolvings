// Egypt	https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2954

#include <stdio.h>

int right(int x, int y, int z){
	if(x*x + y*y == z*z) return 1;
	else return 0;
}

int main()
{
	int a,b,c,x,y,z;
	while(scanf("%d%d%d",&a,&b,&c) && a != 0 && b != 0 && c != 0){
		if(a>=b && a>=c) {z = a; x = b; y = c;}
		else if(b>=a && b>=c){z = b; x = a; y = c;}
		else if(c>=a && c>=b){z = c; x = a; y = b;}

		if(right(x,y,z)) printf("right\n");
		else printf("wrong\n");
	}

	return 0;
}
