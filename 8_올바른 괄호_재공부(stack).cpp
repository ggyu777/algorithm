#include <iostream>
#include <string>
using namespace std;
int main() {
	string A;
	getline(cin,A);
	int LeftCount=0, RightCount=0; // (¿Í )ÀÇ °¹¼ö ÆÄ¾Ç

	for (int i = 0; i < A.size(); i++)
	{
		if (A[i] == 40)
			LeftCount += 1;
		else if (A[i] == 41)
			RightCount += 1;
	}

	if (A[0] == 41)
		cout << "NO";

	else if (A[A.size()-1] == 40)
		cout << "NO";

	else if (A[0] == 32)
		cout << "NO";
	
	else {
		if (LeftCount == RightCount)
			cout << "YES";
		else
			cout << "NO";
	}


}