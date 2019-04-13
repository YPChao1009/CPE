/*
 *(CPE10417, UVA10170) The Hotel with Infinite Rooms.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
#include<cmath>
using namespace std;



int main() {

	int S, D;
	while (cin >> S >> D) {
		int sum = 0;
		int count = S;                              //從當日繼續算人數
		while(sum<D){
			sum += S;
			S++;
			
			count++;

		}
		cout << count-1 << endl;
	}


	system("pause");
	return 0;
}