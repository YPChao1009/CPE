/*
 *(CPE10478, UVA11349) Symmetric Matrix.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
#include<cmath>
using namespace std;



int main() {

	int n;
	cin >> n;
	int count = 1;
	while (n--) {
		char str, str1;
		int total;
		int flag = 0;                                      //*********************
		
		int matrix[100][100] = {};                         //**********
		cin >> str >> str1 >> total;
		for (int i = 0; i < total; i++) {
			for (int j = 0; j < total; j++) {
				cin >> matrix[i][j];
				if (matrix[i][j] < 0) {                       //這裡不可BREAK 要讀完
					flag = 1;
				}
			}
		}
		for (int i = 0; i < total; i++) {
			for (int j = 0; j < total; j++) {

				if (matrix[i][j] != matrix[total - 1 - i][total - 1 - j]) {    //檢查對稱
					flag = 1;
					break;                                                     //***************
				}
				else if (matrix[i][j] == matrix[total - 1 - i][total - 1 - j])
				{
					flag = 0;
				}
			}
		}
		if (flag == 0)
			cout << "Test #" << count << ": Symmetric.\n";
		else if(flag == 1)
			cout << "Test #" << count << ": Non-symmetric.\n";
		count++;
	}


	system("pause");
	return 0;
}