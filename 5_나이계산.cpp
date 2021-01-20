//5. 나이 계산

#include <iostream>
#include <string>
using namespace std;
int main() {
	string A;
	int B=0;
	char C;
	cin >> A;
	
	if (A[7]-'0' < 3)
	{
		B = 120 - (((A[0]-'0') * 10) + (A[1]-'0'));
		if (A[7] - '0' ==2)
			C = 'W';
		else 
			C = 'M';
	}

	if (A[7] - '0' >= 3)
	{
		B = 20 - (((A[0] - '0') * 10) + A[1] - '0');
		if (A[7] - '0' == 4)
			C = 'W';
		else
			C = 'M';
	}
	

	cout << B << " " << C;
	
}