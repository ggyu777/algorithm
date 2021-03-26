#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	std::ios::sync_with_stdio(false);
	int n1, n2, n3,max=0;
	char v[50][1000] = { 0 };
	string DNA;
	cin >> n1;
	for (int i = 0; i < n1; i++) {
		cin >> n2 >> n3;
		int res = 0;
		char C[1001] = { 0 };
		for (int j = 0; j < n2; j++) {
			cin >>DNA;
			for (int k = 0; k < n3; k++)
			{
				v[j][k]=DNA[k];
			}
		}

		for (int j = 0; j < n3; j++) {
			int B[5] = { 0 };
			for (int k = 0; k < n2; k++)
			{
				if (v[k][j] == 'A')
					B[0]++;
				else if (v[k][j] == 'C')
					B[1]++;
				else if (v[k][j] == 'G')
					B[2]++;
				else 
					B[3]++;
			}
			max = B[0];
			C[j] = 'A';
			if (B[1] > max)
			{
				max = B[1];
				C[j] = 'C';
			}
			if (B[2] > max)
			{
				max = B[2];
				C[j] = 'G';
			}

			if (B[3] > max)
			{
				max = B[3];
				C[j] = 'T';
			}
			res += (n2 - max);
		}
		
			for (int i = 0; i < n3; i++)
			{
				cout << C[i];
			}
			cout << endl;
			cout << res << endl;
		res = 0;
	}
}