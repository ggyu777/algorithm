// 6. ���ڸ� ����

#include <iostream>
#include <string>
using namespace std;

int main() {
	string A;
	int B[100000];
	int C=0; // �����
	int J=1; // �ڸ���
	int count = 0;
	int Dcount = 0; // ��� ����
	cin >> A;
	A�� char �迭 A1B2
		B�� int �迭 12
	for (int i = 0; i <A.size() ; i++) // A�� ���ڿ��� �޾Ƽ� �ƽ�Ű�ڵ���� �����̸� int ������ B�� ���� 
	{
		if (48 <= A[i] && A[i] < 58)
		{
			if (count == 0 && A[i] == 48) // count �� 0�̰� A[i]�� 0�̸� �ǳʶ�
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
	for (int i=count-1; i >= 0; i--) //B�� �ں��� 1,10,100�� ���ؼ� C�� ����
	{
		
		C += (B[i]) * J;
		J *= 10;
	}
	

	for (int i = 1; i <= C; i++) // 1���� ������Ű�鼭 ����� ���� ����
	{
		if (C % i == 0)
		{
			Dcount += 1;
		}
	}

	cout << C << endl << Dcount;
}