#include <stdio.h>
int main()
{
	int num,dig;
	while(scanf("%d",&num) && num != 0){
		dig = num;
		while(1){
			while(num > 0){
				dig += (num%10);
				num /= 10;
				printf("%d %d\n", dig,num);
			}
		}
		printf("%d", num);
        printf("%d\n", dig);
	}
	return 0;
}
