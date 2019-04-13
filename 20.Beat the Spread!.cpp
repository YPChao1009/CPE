/*
 *(CPE10454, UVA10812) Beat the Spread!.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;



int main() {
	int n;
	cin >> n;
	while (n--) {
		int s, d;
		cin >> s >> d;
		int a, b;
		a = (s + d) / 2;
		b = (s - d) / 2;
		
		if (a < 0 || b < 0)
			cout << "impossible\n";
		else
			cout << a << " " << b << endl;
	}
	
	system("pause");
	return 0;
}