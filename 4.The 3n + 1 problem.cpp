/*
 *(CPE10400, UVA100) The 3n + 1 problem.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<vector>

using namespace std;
vector<int> num;
int Maximum(int a, int b) {
	if (a > b)
		return a;
	else if (a < b)
		return b;
}

int main() {
	int a,b;
	while (cin >> a >> b) {
		if (a > b) {
			int c = a;
			a = b;
			b = c;
		}

		int max = 0;
		for (int i = a; i <= b; i++) {
			int n = i;                         //�C�������s���@��
			int len = 1;
			while (true) {
				if (n == 1)
					break;
				else if (n % 2 != 0) {
					n = 3*n + 1;
				}
				else if (n%2==0){
					n = n / 2;
				}
				len++;
			}
			max=Maximum(max, len);                    //����d��̦U�ӼƦr���̤j����
		}

		cout<<a<<" "<<b<<" "<<max<<endl ;
	}


	system("pause");
	return 0;
}