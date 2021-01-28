#include <iostream>
using namespace std;
int main() {
	int N;
	int array[100];
    int min;
    int temp;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &array[i]);
	}

    for (int i = 0; i < N; i++) {
        min = i;
        for (int j = i + 1; j < N; j++) { 
            if (array[j] < array[min]) {
                min = j;
            }
        }
        temp = array[min]; 
        array[min] = array[i];
        array[i] = temp; 
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
}