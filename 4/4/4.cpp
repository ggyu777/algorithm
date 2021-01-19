#include <iostream>
int main() {
	int A,M=2,N=100;
	int B[100];
	scanf("%d", &A);
	for (int i = 0; i < A; i++)
	{
		scanf("%d", &B[i]);
		if (B[i] > M)
		{
			M = B[i];
		}
		if (B[i] < N)
		{
			N = B[i];
		}
	}
	printf("%d", M - N);

}