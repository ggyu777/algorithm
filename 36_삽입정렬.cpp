#include <iostream>
using namespace std;
int main() {
	int N;
	int tmp;
	int j;
	int array[100];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &array[i]);
	}

	for (int i = 1; i < N; i++) {
		tmp = array[i];

		for ( j = i - 1; j >= 0 && array[j] > tmp; j--) {
			array[j + 1] = array[j];
		}
		array[j + 1] = tmp;
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", array[i]);
	}

}