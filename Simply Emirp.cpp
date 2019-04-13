/*
 *(CPE10428, UVA10235) Simply Emirp.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

bool is_Prime(int a) {                                        //判斷質數
	for (int i = 2; i < a ; i++) {
		if (a%i == 0)
			return false;
		
	}
}
int main() {
	
	int n,rn;
	while (cin >> n) {

		int tmp = n;
		int result = 0;
		while (true) {                                  //數字反轉
			int digit = tmp % 10;
			result = result * 10 + digit;
			tmp /= 10;
			if (tmp == 0)
				break;
		}
		rn = result;

		if ((is_Prime(n)!=false) && (is_Prime(rn) != false)) {
			cout << n << " is emirp.\n";
		}
		else if (is_Prime(n) == false)
			cout << n << " is not prime.\n";
		else if ((is_Prime(n) != false) && (is_Prime(rn) == false))
			cout << n << " is prime.\n";
	}
	system("pause");
	return 0;
}
