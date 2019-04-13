/*
 *(CPE10480, UVA11461) Square Numbers.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;



int main() {
	int a, b;
	while (cin >> a >> b) {
		int count = 0;
		if (a == 0 && b == 0) {
			break;
		}
		else {
			for (int i = a; i <= b; i++) {
				
					if ((i*i >= a) && (i*i <= b)) {
						count++;
					}
				
			}
			cout << count << endl;
		}
	}
	
	system("pause");
	return 0;
}