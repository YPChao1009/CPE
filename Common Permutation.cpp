/*
 *(CPE10567, UVA10252) Common Permutation.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

int main() {
	string a, b;
	
	while (cin >> a >> b) {
		string total;
	int str[26] = { 0 };
		for (int i=0; i < a.length(); i++)
		{
			for (int j = 0; j < b.length(); j++) {
				if (a[i] == b[j]) {
					total += a[i];
				}
		}

		}

		for (int i = 0; i < total.length(); i++) {
			str[total[i] - 'a']++;
		}
		for (int i = 0; i < 26; i++) {
			if (str[i] != 0) {
				cout << char(i + 'a');
			}
		}
		cout << endl;
	}




	system("pause");
	return 0;
}
