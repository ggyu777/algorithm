#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	int N;
	int copy;
	int Jarisu=1;
	int j = 10;
	int count = 0;
	scanf("%d", &N);
	copy = N;
	while (N > 0)
	{
		N /= 10;
		Jarisu++;
	}
	N= copy;
	count = (Jarisu-2) * pow(10 , Jarisu-3);

	for (int i = pow(10,Jarisu-2); i <=N ; i++) {
		
		copy = i;
		while (i > 0) {
			if (i % j == 3)
			{
				i /= 10;
				count++;
			}
			else
				i /= 10;
		}
		i = copy;
	
	}
	printf("%d", count);
}