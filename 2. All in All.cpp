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
		int i=1,j=1;                                           //�q1�}�l
		while (i < a.length() && j < b.length()) {             //************
			if (a[i] == b[j]) {                                //�@�˴N�������
				i++;
				j++;
			}
			else if (a[i] != b[j]) {                           //��ĤG�Ӧr����L�r��
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