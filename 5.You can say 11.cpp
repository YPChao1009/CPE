/*
 *(CPE10460, UVA10929) You can say 11.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

int main() {
	string N;
	while (cin >> N) {
		long long int sum[2] = { 0,0 };
		
		int diff = 0;
		if (N != "0") {
			for (int i = 0; i < N.length(); i++) {
				sum[i % 2] += N[i] - '0';                           //©_°¸¤À¸s¡A¦r¦êÂà¼Æ¦r
			}
			diff = abs(sum[0] - sum[1]);
			if (diff % 11 == 0) {
				cout << N << " is a multiple of 11.\n";
			}
			else 
				cout << N << " is not a multiple of 11.\n";
		}
		else {
			break;
		}
	}
	




	system("pause");
	return 0;
}