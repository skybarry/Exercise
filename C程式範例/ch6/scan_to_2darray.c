#include <stdio.h>
void dump_2d(int row, int column, int a[row][column]);
int main()
{
    int n, m;
    int i, j;
    scanf("%d %d", &n, &m);
    int a[n][m];

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            scanf("%d", &a[i][j]);
    dump_2d(n, m, a);

    return 0;
}
