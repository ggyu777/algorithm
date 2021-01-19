#include <iostream>
int main() {
	int A, B,R;
	scanf("%d", &A);
	scanf("%d", &B);
	R = A;
	while (A <= B)
	{
		printf("%d", A);
		if(A!=B)
		printf(" + ");
		if (A == B)
		{
			printf(" = %d",R);
		}
		A += 1;
		R += A;
		
	}
}