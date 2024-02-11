#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d", &n);
    int arr[n];
    for(int i =0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    // sorting
    for(int i = 0; i < n-1; i++){
        for(int j = 1; j < n; j++){
            if(arr[j] < arr[j-1]){
                int tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
            }
        }
    }

    /* for(int i = 0; i < n; i++){ */
    /*     printf("%d ",arr[i]); */
    /* } */
    /* printf("\n"); */
    
    // remove duplicates
    int arr_sortd[n];
    arr_sortd[0] = arr[0];
    int pr = 1;
    for(int i = 1; i < n; i++){
        if(arr[i - 1] == arr[i])
            continue;
        arr_sortd[pr] = arr[i];
        pr++;
    }

    /* for(int i = 0; i < pr; i++){ */
    /*     printf("%d ",arr_sortd[i]); */
    /* } */
    /* printf("\nKth:\n"); */


    // print k number of max 

    /* int ini; */
    /* if(k <= pr) */
    /*     ini = pr - k; */
    /* else */
    /*     ini = 0; */
    /* for(int i = ini; i < pr; i++){ */
    /*     printf("%d ",arr_sortd[i]); */
    /* } */
    /* printf("\n"); */

    // kth max and min
    printf("%d\n", arr_sortd[pr-k]);

    // kth min
    printf("%d\n", arr_sortd[k-1]);

    return 0;
}
