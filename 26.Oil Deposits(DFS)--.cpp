/*
 *(CPE22821, UVA572) Oil Deposits.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
char Map[100][100];
bool Collected[100][100];                                        //是否走訪
int m, n;
void CollectOil(int i, int j) {                                  //DFS
	if (i<0 || i>=m || j<0 || j>=n) {
		return;                                                  //不傳回值
	}
	else if (Map[i][j] == '*' || Collected[i][j] == true) {
		return;
	}
	else {
		Collected[i][j] = true;
		CollectOil(i - 1,j - 1);
		CollectOil(i - 1, j);
		CollectOil(i - 1, j + 1);
		CollectOil(i, j - 1);
		CollectOil(i, j + 1);
		CollectOil(i + 1, j - 1);
		CollectOil(i + 1, j);
		CollectOil(i + 1, j + 1);

	}

}
int main() {
	
	
	while (cin >> m >> n && (m != 0 && n != 0)) {
		
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> Map[i][j];
				Collected[i][j] = false;
			}
			}


		int num = 0;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (Map[i][j] == '@'&&Collected[i][j]==false) {
					num++;
					CollectOil(i, j);
				}
			}
		}
		cout << num << endl;

	}


	system("pause");
	return 0;
}