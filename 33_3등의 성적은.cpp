#include <iostream>
using namespace std;
int main() {
	int N;
	int array[100];
	int max;
	int temp;
	int count=0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &array[i]);
	}

	for (int i = 0; i < N; i++) {
		max = i;
		for (int j = i + 1; j < N; j++)
		{
			if (array[j] > array[max])
				max = j;
		}
		temp = array[i];
		array[i] = array[max];
		array[max] = temp;
	}
	

	for (int i = 0; i < N; i++) {
	
		if (array[i] != array[i + 1])
		{
			count++;
			if (count == 2)
			{
				printf("%d", array[i+1]);
				return 0;
			}
		}
	}


}