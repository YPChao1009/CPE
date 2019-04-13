/*
 *(CPE23561, UVA495) Fibonacci Freeze.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {

	int n;
	int F[5000];
	F[0] = 0, F[1] = 1;
    int sum=0;
	while (cin >> n) {
		
		for (int i = 2; i < 5000; i++) {
			F[i] = F[i - 1] + F[i - 2];
			if (n == i) {
				sum = F[i];
				break;
				}
		
		}
		cout << "The Fibonacci number for " << n << " is " << sum << endl;
	}
	system("pause");
	return 0;
}
