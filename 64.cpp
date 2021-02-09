#include <iostream>
using namespace std;

void DFS(int v) {
	if (v == n) {

	}
}


int main() {
	int n, m, i, a, b,cnt=0;
	int array[21][21] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		array[a][b] =1 ;
	}

	DFS(1);
}