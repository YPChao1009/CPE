/*
 *(CPE10400, UVA100) The 3n + 1 problem.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

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
			int n = i;                         //每次都給新的一組
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
			max=Maximum(max, len);                    //比較範圍裡各個數字的最大長度
		}

		cout<< a <<" "<< b <<" "<< max << endl ;
	}


	system("pause");
	return 0;
}
