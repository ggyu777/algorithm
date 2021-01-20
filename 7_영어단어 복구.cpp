// 7. 영어단어 복구

#include <iostream>
#include <string>
using namespace std;
int main() {
	string A;
	char B[100];
	int count = 0;
	getline(cin,A);
	for (int i = 0; i < A.size(); i++)
	{
		if (65 <= A[i] && A[i] <= 122)
		{
			if (A[i] < 97)
			{
				B[count] = A[i] + 32;
				count += 1;
				
			}
			else
			{
				B[count] = A[i];
				count += 1;

			}
		}
		
	}

	for (int i = 0; i < count; i++)
		cout << B[i];

}