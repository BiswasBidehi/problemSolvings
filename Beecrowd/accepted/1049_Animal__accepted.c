#include <stdio.h>
#include <string.h>

int main()
{
    char str[3][20];
    char words1[2][20]={"vertebrado\n","invertebrado\n"};
    char words2[4][20]={"ave\n","mamifero\n","inseto\n","anelideo\n"};
    char words3[5][20]={"carnivoro\n","onivoro\n","herbivoro\n","hematofago\n"};
    char words4[8][20]={"aguia\n","pomba\n","homem\n","vaca\n",\
                        "pulga\n","lagarta\n","sanguessuga\n","minhoca\n"};
    for (int i = 0; i < 3; ++i) {
        fgets(str[i],20,stdin);
    }

    if(!strcmp(words1[0],str[0])){
        if(!strcmp(words2[0],str[1])){
            if(!strcmp(words3[0],str[2]))
                fputs(words4[0],stdout);
            else if(!strcmp(words3[1],str[2]))
                fputs(words4[1],stdout);
        }
        else if(!strcmp(words2[1],str[1])){
            if(!strcmp(words3[1],str[2]))
                fputs(words4[2],stdout);
            else if (!strcmp(words3[2],str[2]))
                fputs(words4[3],stdout);
        }
    }
    else if(!strcmp(words1[1],str[0])){
        if(!strcmp(words2[2],str[1])){
            if(!strcmp(words3[3],str[2]))
                fputs(words4[4],stdout);
            else if(!strcmp(words3[2],str[2]))
                fputs(words4[5],stdout);
        }
        else if(!strcmp(words2[3],str[1])){
            if(!strcmp(words3[3],str[2]))
                fputs(words4[6],stdout);
            else if (!strcmp(words3[1],str[2]))
                fputs(words4[7],stdout);
        }
    }
  /*   fputs(words4[0],stdout); */
  /*   puts(words4[0]); */
    return 0;
}
