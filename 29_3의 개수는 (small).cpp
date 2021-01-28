#include <iostream>
using namespace std;
int main() {
	int N;
	int copy;
	int j = 10;
	int count = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		copy = i;
		while (copy > 0) {
			if (copy % j == 3)
			{
				copy /= 10;
				count++;
			}
			else
				copy /= 10;
		}
	}
	printf("%d", count);
}