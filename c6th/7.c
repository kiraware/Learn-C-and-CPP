#include <stdio.h>

int sum2d(int rows, int cols, int ar[][cols]);

int main(void){
	int rs = 3;
	int cs = 10;
	int varr[rs][cs]; // VLA
	for (int i = 0; i < rs; i++)
		for (int j = 0; j < cs; j++)
			varr[i][j] = i * j + j;
	printf("3x10 VLA\n");
	printf("Sum of all elements = %d\n", sum2d(rs, cs, varr));
	return 0;
	}

int sum2d(int rows, int cols, int ar[rows][cols])
{
int r;
int c;
int tot = 0;
for (r = 0; r < rows; r++)
for (c = 0; c < cols; c++)
tot += ar[r][c];
return tot;
}