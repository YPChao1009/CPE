/*
 *(CPE11067, UVA11150) Cola.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int sum=n;
	while (n >= 3) {
		sum += (n / 3);
		n = (n / 3) + (n % 3);

	}
	if (n == 2) {                  //2瓶可以借一瓶換一瓶
		sum += 1;
	}
	cout << sum << endl;

	system("pause");
	return 0;
}