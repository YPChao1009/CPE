/*
 *(CPE10473, UVA11332) Problem J: Summing Digits.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

int F(int a) {
	int total=0;
	while (a > 0) {                        //所有位數的數字相加
		total += a % 10;
		a /= 10;
	}
	return total;
}

int main() {
	int n;
	
	while (cin >> n&& n!=0) {
     
		while (n > 9) {                   //變成十進位數的時候要做FUNCTION
           int total=0;
			total += F(n);
			n = total;
		}
		cout << n << endl;
	}
	

	system("pause");
	return 0;
}
