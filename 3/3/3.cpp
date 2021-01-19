#include <iostream>

int main() {
	int A,B=1,R,C=0,D=0;
	scanf("%d", &A);
	R = 0;
	while (B<A)
	{
		if (A % B == 0)
		{
			printf("%d", B);
			if(B!=D)
			printf(" + ");
			R += B;
			C+=1;
			if (C == 2)
				D = A / B;
		}
		B += 1;
		
	}
	printf(" = %d", R);
}