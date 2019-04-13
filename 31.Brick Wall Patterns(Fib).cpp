/*
 *(CPE10500, UVA900) Brick Wall Patterns.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int GCD(int m, int n) {
	int r;
	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}

int main() {

	int n;
	while (cin >> n && n != 0) {
		long long int table[50];
		table[0] = 0;
		table[1] = 1;
		table[2] = 2;
		for (int i = 3; i < 50; i++) {                              //������
			table[i] = table[i - 1] + table[i - 2];
		}
		 
		cout << table[n] << endl;                                   //�A�d
	}

	system("pause");
	return 0;
}