#include <stdio.h>

int main()
{
    int k, n;
    scanf("%d%d",&k,&n);
    int arr[k][n];
    for(int i=0; i < k; i++){
        for(int j=0; j < n; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    /* for(int i=0; i < k; i++){ */
    /*     for(int j=0; j < n; j++){ */
    /*         printf("%d ",arr[i][j]); */
    /*     } */
    /*     printf("\n"); */
    /* } */

    int arr_1d[n*k];
    int size = 0;
    for(int i = 0;i < k; i++ ){
        for(int j = 0; j < n; j++){
            arr_1d[size++] = arr[i][j];
        }
    }
    
    for(int i = 0;i < k*n; i++){
            printf("%d ",arr_1d[i]);
        }
    printf("\n");
    size = n*k-1;
    for(int i = 0; i < size; i++){
       for(int j = 1; j < size; j++) {
           if(arr_1d[j] < arr_1d[j-1]){
               int tmp = arr_1d[j];
               arr_1d[j] = arr_1d[j-1];
               arr_1d[j-1] = tmp;
           }
       }
    }

    for(int i = 0;i < k*n; i++){
            printf("%d ",arr_1d[i]);
        }

// transpose print 
    /* for(int i=0; i < n; i++){ */
    /*     for(int j=0; j < k; j++){ */
    /*         printf("%d ",arr[j][i]); */
    /*     } */
    /*     printf("\n"); */
    /* } */
        
}
