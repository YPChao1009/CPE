/*
 *(CPE10410, UVA10062) Tell me the frequencies!.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

int main() {

	string s;
	
	while (cin >> s) {
		int arr[256] = {};
		for (int i = 0; i < s.size(); i++) {
			arr[s[i]]++;
		}


		for (int i = 1; i <= s.size(); i++) {                 //�`�ӼƤj���b��
			for (int j = 256; j >= 0; j--) {                  //ASCII�j���b�e
				if (arr[j] == i) {
					cout << j << " " << i << endl;
				}
			}
		}
		cout << endl;
	}


	system("pause");
	return 0;
}