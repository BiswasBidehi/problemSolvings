#include <stdio.h>

int main(){
	long N = 0;
	scanf("%ld", &N);
	
	long data[N];
	for(auto i=0; i<N; i++)
	    scanf("%ld", &data[i]);
	if(data[N-1]%10==0)
	printf("Yes\n");
	else
	printf("No\n");
	return 0;
}