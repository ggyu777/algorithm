//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[20000];
//int main() {
//	std::ios::sync_with_stdio(false);
//	int t,n, m,j;
//	cin >> t;
//	while (t--) {
//		int res = 0;
//		cin >> n >> m;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i];
//		}
//		if (m % 2 != 0) // 홀수일때
//		{
//			for (int i = m/2,j=0 ; m+j < n; j++,i++)
//			{
//				sort(a+j, a + m-1+j);
//				if (a[m + j] >= 2 * a[i])
//					res++;
//			}
//		}
//		else // 짝수일때
//		{
//			for (int i =m / 2,j = 0; m + j < n; j++, i++)
//			{
//				sort(a+j, a + m - 1 + j);
//				if (a[m + j] >= 2 * ((a[i]+a[i-1]))/2)
//					res++;
//			}
//		}
//
//		cout << res << endl;;
//	}
//
//}

//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	std::ios::sync_with_stdio(false);
//	int t, i, n, m, j;
//	cin >> t;
//	while (t--) {
//		int a[20000] = { 0 };
//		int b[20000] = { 0 };
//		int res = 0, cnt = 0;
//		int mid=0,mid1=0;
//		cin >> n >> m;
//		for (i = 0; i < n; i++)
//		{
//			cin >> a[i];
//			b[a[i]]++;
//			
//		}
//		if (m % 2 != 0) // 홀수일때
//		{
//			for ( i=0,j = 0; m+i<n; j++)
//			{
//				if (b[j] != 0)
//				{
//					cnt++;
//					if (cnt == m / 2+i+1)
//					{
//						mid = j;
//						if (a[m + i] >= 2 * mid)
//						{
//							res++;
//
//						}
//						i++;
//
//					}
//
//				}
//				
//			}
//		}
//		else // 짝수일때
//		{
//			for (i = 0, j = 0; m + i < n; j++)
//			{
//				if (b[j] != 0)
//				{
//					cnt++;
//					if (cnt == m / 2 + i)
//					{
//						mid = j;
//					}
//					else if (cnt == m / 2 + i + 1)
//					{
//						mid1 = j;
//						if (a[m + i] >= mid1 + mid)
//						{
//							res++;
//							
//						}
//					}
//					i++;
//
//				}
//
//			}
//		}
//
//		cout << res << endl;;
//	}
//
//} //카운팅 소트!