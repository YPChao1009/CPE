/*
 *(CPE10461, UVA10931) Parity.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n && n != 0) {
		int s = 0;
		while (n > 0) {
			if (n % 2 != 0)
				s++;
			n /= 2;
		}
		cout << "The parity of " << n << " is " << s << " (mod 2).\n";
	}

	system("pause");
	return 0;
}
