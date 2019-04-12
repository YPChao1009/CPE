/*
 *(CPE10404, UVA10035) Primary Arithmetic.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {

	int a, b;
	
	while (cin >> a >> b && (a != 0 && b != 0)) {
		int count = 0;
		int c=0;                                            //進位值
		while ((a != 0 || b != 0)) {
			if (a % 10 + b % 10 + c >= 10)              //判斷進位
			{
				count++;
				c = 1;
			}
			else {
				c = 0;
			}
			a /= 10;
			b /= 10;

		}
		if (count == 0)                                     
			cout << "No carry operation.\n";
		else if (count == 1)
			cout << count << " carry operation.\n";
		else                                                 //進位個數顯示
			cout<<count<<" carry operations.\n";

	}

	

	system("pause");
	return 0;
}
