/*
 *(CPE11009, UVA10340) All in All.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;

int main(void) {


	string a, b;
	while (cin >> a >> b) {
		int i=1,j=1;                                           //從1開始
		while (i < a.length() && j < b.length()) {             //************
			if (a[i] == b[j]) {                                //一樣就都往後比
				i++;
				j++;
			}
			else if (a[i] != b[j]) {                           //比第二個字的其他字母
				j++;
			}
		}

		if (i == a.length()) {                                  
			cout << "Yes\n";
		}
		else if (i != a.length())
			cout << "No\n";
	}



	system("pause");
	return 0;
}