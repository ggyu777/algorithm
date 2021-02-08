#include <iostream>
using namespace std;
int ch[11];
int n;
void D(int v) {
	int i;
	if (v == n + 1) {
		for (i = 1; i <= n; i++) {
			if (ch[i] == 1) printf("%d ", i);
		}
		printf("\n");
	}
	else {
		ch[v] = 1;
		D(v + 1);
		ch[v] = 0;
		D(v + 1);
	}
}

int main() {
	scanf("%d", &n);

		D(1);
	
	return 0;
}