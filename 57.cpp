#include <iostream>
using namespace std;


void Leejinsu(int value) {
	if (value==1)
	{
		printf("%d", value);
		return;
	}
	else
	{
		Leejinsu(value / 2);
		printf("%d", value%2);
	}
}

int main() {
	int N;
	scanf("%d", &N);
	Leejinsu(N);
}