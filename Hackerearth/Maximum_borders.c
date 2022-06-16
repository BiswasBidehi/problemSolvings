#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1416
#define loop(i, n) for (int i = 0; i < n; ++i)      // 0 <= num < n
#define Loop(i, k, n) for (int i = k; i < n; ++i)   // k <= num < n
#define LOOP(i, k, n) for (int i = k; i <= n; ++i)  // k <= num <= n
#define rloop(i, n) for (int i = n; i >= 0; --i)    // n >= num >= 0
#define rLoop(i, k, n) for (int i = k; i > n; --i)  // k >= num > n
#define rLOOP(i, k, n) for (int i = k; i >= n; --i) // k >= num >= n

int main()
{
    freopen("/tmp/_inputs_", "r", stdin);
    // freopen("/tmp/_outputs_","w",stdout);

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m, n;
        scanf("%d%d", &n, &m);
        char grid[n][m];
        // input grid array
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char tmp;
                scanf("%c", &tmp);
                if (tmp == '\n' || tmp == ' ' || tmp == '\t')
                    j--;
                else
                    grid[i][j] = tmp;
            }
        }

        if (m == 0 && n == 0)
        {
            printf("%d\n", 0);
        }
        else if (m == 1 && n == 1)
        {
            if (grid[0][0] == '#')
                printf("%d", 1);
            else if (grid[0][0] == '.')
                printf("%d", 0);
        }
        else
        {
            int row = 0, col = 0, max = 0;
            if (n == 1 || (m > 1 && n > 1))
            {

                for (int i = 0; i < n; i++)
                {
                    for (int j = 1; j < m - 1; j++)
                    {
                        if (grid[i][j] == '#' && grid[i][j] == grid[i][j + 1])
                        {
                            row++;
                            if (row > max)
                                max = row;
                        }
                        else if (grid[i][j] == '.')
                            row = 0;
                        // printf("%c ",grid[i][j]);
                    }
                    // printf("\n");
                }
            }
            
            if (m == 1 || (m > 1 && n > 1))
            {

                for (int i = 0; i < m; i++)
                {
                    for (int j = 0; j < n - 1; j++)
                    {
                        if (grid[j][i] == '#' && grid[j][i] == grid[j + 1][i])
                        {
                            col++;
                            if (col > max)
                                max = col;
                        }
                        else if (grid[j][i] == '.')
                            col = 0;
                        // printf("(j=%d,i=%d) ", j, i);
                    }
                    // printf("\n");
                }
                printf("%d\n", max);
            }
        }
    }
    return 0;
}
