/*
 *(CPE22801, UVA12019) A - Doom's Day Algorithm.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;



int main() {

	int n;
	
int month, day;
	char week[7][10] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
	int month_days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		
		cin >> month >> day;

		int w = 5;
		for (int j = 1; j < month; j++) {              //Á`¤Ñ¼Æ
			w += month_days[j - 1];
		}
		w = (w + day) % 7;                             //¬P´Á´X
		cout << week[w] << endl;
	}



	system("pause");
	return 0;
}
