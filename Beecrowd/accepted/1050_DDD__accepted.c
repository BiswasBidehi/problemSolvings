#include <stdio.h>
int main()
{
  int dd[8] = {61,71,11,21,32,19,27,31};
  char str[8][20] = {"Brasilia","Salvador","Sao Paulo",\
                    "Rio de Janeiro","Juiz de Fora",\
                    "Campinas","Vitoria","Belo Horizonte"};
  int input;
  scanf("%d",&input);
  if(input==dd[0]) printf("%s\n",str[0]);
  else if(input==dd[1]) printf("%s\n",str[1]);
  else if(input==dd[2]) printf("%s\n",str[2]);
  else if(input==dd[3]) printf("%s\n",str[3]);
  else if(input==dd[4]) printf("%s\n",str[4]);
  else if(input==dd[5]) printf("%s\n",str[5]);
  else if(input==dd[6]) printf("%s\n",str[6]);
  else if(input==dd[7]) printf("%s\n",str[7]);
  else printf("DDD nao cadastrado\n");
  
  return 0;
}
