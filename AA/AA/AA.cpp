#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
	int N, M1,M2,R=0;
	scanf("%d", &N);
	scanf("%d", &M1);
	M2 = M1;
	while (M2 <= N)
	{
		R += M2;
		M2 = M2 + M1;

	}
	printf("%d", R);
}