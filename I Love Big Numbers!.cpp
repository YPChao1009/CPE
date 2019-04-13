/*
 *(CPE10559, UVA10220) I Love Big Numbers!.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {


	int digits[3000] = { 0 }, sum[1010] = { 0 };
	digits[0] = 1;
	// Remainder.
	int rem = 0;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 0; j < 3000; j++) {
			rem = digits[j] * i + rem;
			digits[j] = rem % 10;
			rem = rem / 10;
		}
		for (int j = 0; j < 3000; j++)
			sum[i] += digits[j];
	}
	int n;
	while (cin >> n) {
		cout << sum[n] << endl;
	}

	system("pause");
	return 0;
}
