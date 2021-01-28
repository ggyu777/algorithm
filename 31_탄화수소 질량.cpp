#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
	string A;
	cin >> A;
	int count = 0;
	int J;
	int result = 0;
	int Hresult=0;
	for (int i = 1; A[i] != 'H';i++)
	{
		count++;
	}

	J = count;

	if (A[1] == 'H')
	{
		result += 12;
	}
	else if (A[1] != 'H')
	{
		for (int i = 1; count >= 1; i++)
		{
			result += (A[i] - '0') * pow(10, count - 1);
			count--;
		}
		result = result * 12;
	}
	for (int i = J+2; A[i] !=NULL ; i++)
	{
		count++;
		
	}
	count--;
	J += count;
	count++;
	if (A[J ] == NULL) {
		result++;
	}


	for (int i = J ; count >= 1; i++)
	{
		Hresult += (A[i] - '0') * pow(10, count-1);
		count--;

	}
	result += Hresult;
	printf("%d", result);

}

// num = 10 * num +str[i] - '0'