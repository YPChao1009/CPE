/*
 *(CPE10403, UVA10019) Funny Encryption Method.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int binary(int a) {
	int count = 0;
	while (a >=1) {
		
		if (a % 2 == 1) {
			count++;}
		a /= 2;
	}
	return count;
}

int main() {

	int n;
	cin >> n;
	while (n--) {
		int m;
		int b1=0;
		cin >> m;
		b1 = binary(m);
		int b2=0;
		while (m > 0) {
			b2 += binary(m % 10);
			m /= 10;
		}
		cout << b1 << " " << b2 << endl;
	}
	system("pause");
	return 0;
}
