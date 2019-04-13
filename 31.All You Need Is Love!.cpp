/*
 *(CPE10421, UVA10193) All You Need Is Love!.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int StringToInt(string a) {
	int sum=0;
	for (int i = 0; i < size(a); i++) {
		if (a[i] == '1')                       //***********
		sum +=pow(2, size(a) - 1 - i);
	}
	return sum;
}

int GCD(int m, int n) {
	while (n != 0) {
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}

int main() {
	int n;
	string s1, s2;

	cin >> n;
	int count = 1;
	for(int i=0;i<n;i++){
		cin >> s1 >> s2;

			int n1 = StringToInt(s1);
			int n2 = StringToInt(s2);
			if (GCD(n1, n2) > 1) {                         //********
				cout << "Pair #" << count << ": All you need is love!\n";
			}
			else
				cout << "Pair #" << count << ": Love is not all you need!\n";
			count++;
		
	}
	system("pause");
	return 0;
}