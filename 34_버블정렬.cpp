#include <iostream>
using namespace std;
int main() {
	int N;
	int tmp;
	int array[100];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &array[i]);
	}

		for (int i = N-1; i >0; i--)
		{
			for (int j = 0; j < i; j++)
			{
				if (array[j] > array[j+1])
				{
					tmp = array[j];
					array[j] = array[j+1];
					array[j+1] = tmp;
				}
			}
		}
	
	for (int i = 0; i < N; i++) {
		printf("%d ", array[i]);
	}

}