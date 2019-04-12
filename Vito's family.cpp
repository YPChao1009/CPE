/*
 *(CPE10406, UVA10041) Vito's family.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<vector>
#include<algorithm>                //sorting
using namespace std;
vector<int> num;
int main() {

	int n,s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int r=0;
		cin >> r;
		num.clear();
		for(int k=0;k<r;k++){			
			cin >> s;
			num.push_back(s);                   //放入vector
		}
		int sum = 0;
		sort(num.begin(), num.end());
		int mid = num[r / 2];                    //中位數
		for (int j = 0; j < r; j++) {
			sum += abs(mid - num[j]);
		}
		cout << sum << endl;
		
	}




	system("pause");
	return 0;
}
