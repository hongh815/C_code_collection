#include <stdio.h>



int main(void)

{

	int ary[5][5] = { 0, };

	int *pAry[5];

	int val = 1;

	int size_row = sizeof(ary) / sizeof(ary[0]);

	int size_col = sizeof(ary[0]) / sizeof(ary[0][0]);



	for (int i = 0; i < size_row; i++)

	{

		pAry[i] = ary[i];

	}



	for (int j = 0; j < size_row; j++)

	{

		if ((j % 2) == 0)

		{

			for (int k = 0; k < size_col; k++)				//홀수 번째 줄일때

			{

				pAry[j][k] = val++;

			}

		}

		else

		{

			for (int k = (size_col - 1); k >= 0; k--)		//짝수 번째 줄일때

			{

				pAry[j][k] = val++;

			}

		}

	}



	for (int l = 0; l < size_row; l++)						//출력

	{

		for (int m = 0; m < size_col; m++)

		{

			printf("%5d", ary[l][m]);

		}

		printf("\n");

	}



	return 0;

}
