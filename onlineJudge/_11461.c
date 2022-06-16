// Square Numbers	https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2456

#include <stdio.h>
#include <math.h>

int perfect_sqr(int x){
	double f_num,tmp;
	int i_num;
	tmp = x;
	f_num = sqrt(tmp);
	i_num = f_num;
	if(x == i_num*i_num)
		return i_num;
	else
		return ++i_num;
}
int main()
{
	int a,b,count = 0,i = 0,tmp;

	while(scanf("%d%d",&a,&b) && i<=201 && a != 0 && b != 0){
	// scanf("%d",&a);
	// printf("%d\n", perfect_sqr(a));	
		count = 0;
		tmp = perfect_sqr(a);
		while(tmp*tmp >= a && tmp*tmp <= b){
			count++;
			tmp++;
		}
		i++;
		printf("%d\n",count );
	}
	return 0;
}