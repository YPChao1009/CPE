/*
 *(CPE10520, UVA11286) Conformity.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<map>
#include<set>
using namespace std;

int main() {

	int n;
	while (cin >> n && n != 0) {
		
		map<set<int>, int> count;                         //set<int>是選課組合
		int M = 0, MC = 0;
		while (n--) {
			set<int> suit;
			int course;
			for (int i = 0; i < 5; i++) {                 //每行分開一個一個讀
				cin >> course;
				suit.insert(course);
			}
			
			count[suit]++;
			int h = count[suit];
			if (h == M)
				MC++;
			if (h > M)
			{
				M = h;
				MC = 1;
			}
		}
		cout << M * MC << endl;
	}

	system("pause");
	return 0;
}
