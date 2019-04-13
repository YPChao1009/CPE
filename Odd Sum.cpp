/*
 *(CPE10453, UVA10783) Odd Sum.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 1;
	while (n--) {
		int a, b;
		int sum[2] = { 0,0 };                         //分奇偶case
		int odd=0;
		
		cin >> a >> b;
		for (int i = a; i <= b; i++) {
			sum[i % 2] += i;
			
		}
		odd = sum[1];
		cout <<"Case "<<count<<": "<< odd << endl;
		count++;
		}
	
	system("pause");
	return 0;
}
