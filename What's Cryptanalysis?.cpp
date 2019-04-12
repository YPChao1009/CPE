/*
 *(CPE10402, UVA10008) What's Cryptanalysis?.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	int str[26] = {};
	
	int total=0;
	for (int i = 0; i < n+1; i++) {
		getline(cin, s);
		for (int j = 0; j < size(s); j++) {
			if (s[j] >= 'A'&&s[j] <= 'Z') {          //將大寫字母放入陣列
				str[s[j] - 'A']++;
				total++;
			}
			else if (s[j] >= 'a'&&s[j] <= 'z') {     //將小寫字母放入陣列
				str[s[j] - 'a']++;
				total++;
			}
		}
		
	}

	for (int i = total; i >= 1; i--) {                         //字母總數往回找大的
		for (int j = 0; j < 26; j++) {
			if (str[j] == i) {
				cout << char(j + 'A') << " " << i << endl;

			}
		}
	}


	system("pause");
	return 0;
}
