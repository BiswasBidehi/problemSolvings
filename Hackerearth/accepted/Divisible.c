#include <stdio.h>
#include <stdbool.h>
#include <malloc.h>
#include <math.h>

char *solve(int *A, int N)
{
    // Write your code here
    long sum = 0;
    int len = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] < 0)
        {
            A[i] = -A[i];
        }

        if (i < N / 2)
        {
            len = (int)log10(A[i]);
            int first = A[i] / pow(10, len);
            // printf("%d\n",first);

            if (i % 2 == 0)
                sum += first;
            else
                sum -= first;
        }
        else
        {
            int last = A[i] % 10;
            // printf("%d\n",last);
            if (i % 2 == 0)
                sum += last;
            else
                sum -= last;
        }
        // This 2 line can be commented that will also accept
        if (sum > 1000)
            sum %= 11;
    }
    // printf("%d\n",sum);
    if (sum % 11 == 0)
        return "OUI\n";
    else
        return "NON\n";
}

int main()
{
    int N;
    scanf("%d", &N);
    int i_A;
    int *A = (int *)malloc(N * sizeof(int));
    for (i_A = 0; i_A < N; i_A++)
        scanf("%d", &A[i_A]);

    char *out_ = solve(A, N);
    printf("%s", out_);
    free(A);
    return 0;
}