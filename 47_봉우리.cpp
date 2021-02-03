#include <iostream>
using namespace std;
int main() {
	int N;
	int array[60][60] = { 0 };
	int count = 0;
	scanf("%d", &N);
	for (int i = 1; i < N+1; i++) {
		for (int j = 1; j < N+1; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	for (int i = 1; i < N+1; i++) {
		for (int j = 1; j < N+1; j++)
		{
			if(array[i][j]>array[i][j-1]&& array[i][j] > array[i-1][j])
				if (array[i][j] > array[i + 1][j] && array[i][j] > array[i][j + 1])
				{
					count++;
				}
		}
	}

	printf("%d", count);
}