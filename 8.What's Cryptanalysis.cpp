/*
 *(CPE10402, UVA10008) What's Cryptanalysis?.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int n;
	cin >> n;
	string s;
	int str[26] = {};
	
	int total=0;
	for (int i = 0; i < n+1; i++) {
		getline(cin, s);
		for (int j = 0; j < size(s); j++) {
			if (s[j] >= 'A'&&s[j] <= 'Z') {
				str[s[j] - 'A']++;
				total++;
			}
			else if (s[j] >= 'a'&&s[j] <= 'z') {
				str[s[j] - 'a']++;
				total++;
			}
		}
		
	}

	for (int i = total; i >= 1; i--) {                         //*********¶r•¿¡`º∆
		for (int j = 0; j < 26; j++) {
			if (str[j] == i) {
				cout << char(j + 'A') << " " << i << endl;

			}
		}
	}





	system("pause");
	return 0;
}