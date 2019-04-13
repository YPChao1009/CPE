/*
 *(CPE22131, UVA272) TeX Quotes.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

int main() {
	
	string s;
	int count = 0;
	bool flag = true;                                                //用flag判斷
	while (getline(cin, s)) {
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '"') {
				if (flag == true) {                      //遇到第一個"，flag為true
					 
					cout<<"``";
					flag = false;                     //遇到後改狀態
				}
				else {
					cout << "''";
					flag = true;
				}
				
			}
			else {
				cout << s[i];
			}
			
			
		}
	}

	system("pause");
	return 0;
}
