/*

85

*/

#include <iostream>
using namespace std;
int ch[11];
int a[11];
int b[5];
int c[5];
int n;
int sum;
int max=-214700000;
int min = 214700000;
void D(int v) {
	int i;
	if (v == n ) {
		for (i = 2; i <= n; i++) {
			if (ch[i] == 1 && b[1]!=0)
			{
				sum += a[i];
				b[1]--;
				
			}
			else if (ch[i] == -1 && b[2] != 0)
			{
				sum -= a[i];
				b[2]--;
			}
			else if (ch[i] == 0 && b[3] != 0)
			{
				sum *= a[i];
				b[3]--;
			}
			else if (ch[i] == 2 && b[4] != 0)
			{
				sum /= a[i];
				b[4]--;
			}
		}
	}
	else { 
			ch[v] =1 ;
			D(v + 1);
			ch[v] = -1;
			D(v + 1);
			ch[v] = 0;
			D(v + 1);
			ch[v] = 2;
			D(v + 1);
	}
	if (max < sum)
	{
		max = sum;
	}
	if (min > sum)
	{
		min = sum;
	}
	b[1] = c[1];
	b[2] = c[2];
	b[3] = c[3];
	b[4] = c[4];

	sum = a[1];
}

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= 4; i++)
	{
		scanf("%d", &b[i]);
		c[i] = b[i];
	}
	sum = a[1];
	D(1);

	cout << max << endl;
	cout << min;

	return 0;
}

// 공집합 때문에 min 안나옴
// if에 정답 도달하면 심플한코드, else에 조건문