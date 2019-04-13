/*
 *(CPE11076, UVA11417) GCD.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
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

	int N;
	while (cin >> N) {
		if (N != 0) {
			int G = 0;
			for (int i = 1; i < N; i++) {
				for (int j = i + 1; j <= N; j++) {
					G += GCD(i, j);
				}
			}
			cout << G << endl;
		}
		else if (N == 0) {
			break;
		}
	}


	system("pause");
	return 0;
}