#include <iostream>
using namespace std;
int dx[101];
int D(int N) {
	if (dx[N] > 0) return dx[N];
	if (N == 1 || N == 2) return N;
	else return dx[N] = D(N - 1) + D(N - 2);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a;
	cin >> a;
	cout << D(a);



}