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
	bool flag = true;                                   //*****��flag�P�_
	while (getline(cin, s)) {
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '"') {
				if (flag == true) {                      //�n==
					 
					cout<<"``";
					flag = false;                        //��窱�A
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