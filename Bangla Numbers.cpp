/*
 *(CPE10414, UVA10101) Bangla Numbers.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

void print(long long int n) {                               
	
	
	if (n / 10000000 > 0) {
		print(n / 10000000);                                //遞迴
		cout<<" kuti ";
		n %= 10000000;
	}

	if (n / 100000>0) {
		print(n / 100000);
		cout << " lakh ";
		n %= 100000;
	}

	if (n / 1000>0) {
		print(n / 1000);
		cout << " hajar ";
		n %= 1000;
	}

	if (n / 100>0) {
		print(n / 100);
		cout << " shata ";
		n %= 100;
	}

	if (n>=0) 
		cout << n;

}

int main() {
	long long int n;
	int i = 0;
	while (cin >> n) {
		i++;
		cout << i << ". ";
		print(n);
		cout << endl;

	}

	system("pause");
	return 0;
}
