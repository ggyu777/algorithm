#include <iostream>
using namespace std;
int main() {
	int N, sum = 0;
	int block[10][10] = { 0 };
	int scan[2][10];
	scanf("%d", &N);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < N; j++)
		{
			scanf("%d", &scan[i][j]);
		}
	}
	for (int i = 0; i < N; i++) // 블록 모두 정면으로 초기화
	// 2 0 3 1
	// 2 0 3 1
	// 2 0 3 1
	// 2 0 3 1
	{
		for (int j = 0; j < N; j++)
		{
			block[j][i] = scan[0][i];
		}
	}

	for (int i = N - 1; i >= 0; i--) {
		for (int j = 0; j < N; j++)
		{
			if (block[i][j] > scan[1][N - i - 1])
				block[i][j] = scan[1][N - i - 1];
		}
	}
	for (int i = 0; i < N; i++) // 블록 모두 정면으로 초기화
	// 2 0 3 1
	// 2 0 3 1
	// 2 0 3 1
	// 2 0 3 1
	{
		for (int j = 0; j < N; j++)
		{
			sum += block[i][j];
		}
	}

	printf("%d", sum);
}