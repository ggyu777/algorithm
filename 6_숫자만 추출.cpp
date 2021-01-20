// 6. 숫자만 추출

#include <iostream>
#include <string>
using namespace std;

int main() {
	string A;
	int B[100000];
	int C=0; // 결과값
	int J=1; // 자릿수
	int count = 0;
	int Dcount = 0; // 약수 갯수
	cin >> A;
	A의 char 배열 A1B2
		B의 int 배열 12
	for (int i = 0; i <A.size() ; i++) // A를 문자열로 받아서 아스키코드안의 범위이면 int 값으로 B에 저장 
	{
		if (48 <= A[i] && A[i] < 58)
		{
			if (count == 0 && A[i] == 48) // count 가 0이고 A[i]도 0이면 건너뜀
			{
				
				
			}
			else
			{
				B[count] = A[i] - '0';
				count += 1;
			}
			
		}
	}
	1234
	for (int i=count-1; i >= 0; i--) //B를 뒤부터 1,10,100을 곱해서 C에 저장
	{
		
		C += (B[i]) * J;
		J *= 10;
	}
	

	for (int i = 1; i <= C; i++) // 1부터 증가시키면서 약수의 갯수 구함
	{
		if (C % i == 0)
		{
			Dcount += 1;
		}
	}

	cout << C << endl << Dcount;
}