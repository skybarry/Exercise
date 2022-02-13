#include <stdio.h>
#define ROWS 3
#define COLS 4

void sum_rows(int ar[][COLS], int rows);
void sum_columns(int ar[][COLS], int rows);
int main() {
int junk[][4] = {	
            {2,4,5,8} ,
			{3,5,6,9} ,
			{12,10,8,6} 
		    };

	sum_rows(junk, ROWS); 
	sum_columns(junk, ROWS); 

	getchar();
    	return 0;
}



void sum_rows(int ar[][COLS], int rows)
{
    int r;
    int c;
    int tot;

    for (r = 0; r < rows; r++)
    {
        tot = 0;
        for (c = 0; c < COLS; c++)
            tot += ar[r][c];
        printf("row %d: sum = %d\n", r, tot);
    }
}

void sum_columns(int ar[][COLS], int rows)
{
       int r;
    int c;
    int tot;
    
    for (c = 0; c < COLS; c++)
    {
        tot = 0;
       for (r = 0; r < rows; r++)
            tot += ar[r][c];
        printf("column %d: sum = %d\n", c, tot);
    }  
     
}

