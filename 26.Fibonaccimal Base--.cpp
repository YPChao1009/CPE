/*
 *(CPE10401, UVA948) Fibonaccimal Base.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
#include<cmath>

using namespace std;



int main() {

	int n;
	cin >> n;
	int F[40] = {};                                      //**�ت�A�]m<100000000�A�ҥHf(39)�N���F
	F[0] = 0, F[1] = 1;
	for (int i = 2; i < 40; i++) {
		F[i] = F[i - 1] + F[i - 2];
	}
	while (n--) {
		int m;
		cin >> m;
		cout << m << " = ";
		bool flag = false;                          //*************************
		for (int i = 39; i >= 2; i--) {
			if (m/F[i]==1) {                        //�q�j���}�l��
				cout << "1";
				m-=F[i];
				flag = true;                        //****************
			}
			else if(flag){                          //****************
				cout << "0";

			}
			
		}
cout << " (fib)\n";

	}
	
	system("pause");
	return 0;
}