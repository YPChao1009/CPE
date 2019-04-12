/*
 *(CPE10425, UVA10222) Decode the Mad man.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<vector>
#include<string>
using namespace std;
char  c[] = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";     //鍵盤上的字

char decode(char a) {
	for (int i = 0; i < 46; i++) {
		if (a == c[i]) {
			return c[i - 2];
			break;
		}
		else if (a == ' ') {
			return ' ';
		}
	}
}

int main() {
	string s;
	char str;
	string sentence;
	while (getline(cin, s)) {
		
		for (int i = 0; i < size(s); i++) {
			str=tolower(s[i]);                     //轉為小寫字母
			sentence+=decode(str);
		}
		cout << sentence << endl;
	}
	

	system("pause");
	return 0;
}
