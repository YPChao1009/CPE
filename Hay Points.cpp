/*
 *(CPE10579, UVA10295) Hay Points.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(void) {

	int m, n;
	map<string, int> hay;                               //map語法   <a,b>內之a為讀入的字 b為相對的價格
	
		cin >> m >> n;
		string word;
	for (int i = 0; i < m; i++) {		
		
		int price;
		cin >> word >> price;
		hay[word] = price;                                
	}
	string s;
	for (int i = 0; i < n; i++) {
		int money = 0;
	
	while (cin >> word && word != ".") {                 
		money += hay[word];                             
	}

	cout << money << endl;
	}


	system("pause");
	return 0;
}
