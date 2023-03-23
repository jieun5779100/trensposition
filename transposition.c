#include <stdio.h>
#define ROWS 3
#define COLS 6
 
void matrix_transpose(int A[ROWS][COLS], int B[ROWS][COLS])
{
	for (int r = 0; r < ROWS; r++)
		for (int c = 0; c < COLS; c++)
			B[c][r] = A[r][c];
			
}
void matrix_print(int A[ROWS][COLS])
{
	printf("==============\n");
	for (int r = 0; r < ROWS; r++)
	{
		for (int c = 0; c < COLS; c++)
			printf("%d", A[r][c]);
	}
	print("===================\n");


}

int main(void)
{
	int array1[ROWS][COLS] =
	{
		{0,3,7},
		{1,0,9},
		{1,5,8},
		{3,0,6},
		{3,1,5},
		{4,1,5},
		{5,2,2}
	};
	int array2[ROWS][COLS];


}