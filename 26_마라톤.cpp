#include <iostream>
using namespace std;
int main() {
	int N;
	int array[10000], count[10000] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &array[i]);

	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			if (array[j] >= array[i])
			{
				count[i]++;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", count[i]);
	}

}