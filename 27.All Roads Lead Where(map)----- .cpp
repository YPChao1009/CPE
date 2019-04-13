/*
 *(CPE10508, UVA10009) All Roads Lead Where?.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
#include<map>
using namespace std;



int main(void) {

	int t;
	cin >> t;

	
	while (t--) {
		int m, n;
		cin >> m >> n;

		map<char, char> parent;
		string city1, city2;
		for (int i =0; i < m; i++) {
			cin >> city1 >> city2;
			parent[city2[0]] = city1[0];                //parent['T']='R'
		}
		for (int i = 0; i < n; i++) {
			cin >> city1 >> city2;
			char route1[26], route2[26];
			int r1=0, r2=0;                             //***
			route1[0] = city1[0];                       //初始路線
			while (route1[r1] != 'R') {                 //不是從起點開始
				route1[r1 + 1] = parent[route1[r1]];//把MAP的東西放進來 從城市到羅馬
				r1++;
			}
			route2[0] = city2[0];
			while (route2[r2] != 'R') {
				route2[r2 + 1] = parent[route2[r2]];
				r2++;
			}
			while (route1[r1] == route2[r2]) {           //2個城市到羅馬重複路徑去除
				r1--;
				r2--;
			}

			for (int i = 0; i <= r1+1; i++) {
				cout << route1[i];
			}
			for (int i = r2; i >= 0; i--) {
				cout << route2[i];
			}
			cout << endl;
		}
		
	}

	







	system("pause");
	return 0;
}