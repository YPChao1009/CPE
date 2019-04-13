/*
 *(CPE10418, UVA10189) Minesweeper.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
char square[100][101];
int ans[100][100];
using namespace std;

void AddNeighborOne(int a, int b,int m,int n) {
	for (int i = a - 1; i <= a + 1; i++) {
		for (int j = b - 1; j <= b + 1; j++) {
			if (i < 0 || i >= m || j < 0 || j >= n)
				continue;
				ans[i][j]++;
		}
	}
}


int main() {
	int count = 1;
	int a, b;
	while (cin >> a >> b&&(a!=0&&b!=0)) {
		
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cin >> square[i][j];
				ans[i][j] = 0;
			}
		}
		

		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				if (square[i][j] == '*')
					AddNeighborOne(i, j, a, b);
			}
		}
		if (count > 1)
			cout << endl;
		cout << "Field #" << count << ":\n";
		count++;

		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				if (square[i][j] == '*')
					cout<<"*";
				else
				cout << ans[i][j];
			}cout << endl;
		}
		
	}
	
	system("pause");
	return 0;
}