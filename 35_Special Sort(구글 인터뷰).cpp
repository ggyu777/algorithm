#include <iostream>
using namespace std;
int main() {
	int N;
	int tmp;
	int count=0;
	int array[100];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &array[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (array[i] < 0)
		{
			tmp = array[i];
			for (int j = i; j >count; j--)
			{
				array[j] = array[j-1];
			}
			array[count] = tmp;
			count++;

		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", array[i]);
	}
}