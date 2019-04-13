/*
 *(CPE11069, UVA11321) Sort! Sort!! and Sort!!!.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<algorithm>
using namespace std;
int n, m;
bool cmp(int x, int y) {
	int xodd = (abs)(x % 2), yodd =(abs)(y % 2);
	
	if (x%m != y % m)
		return x % m < y%m;

	else if (xodd != yodd)
		return xodd > yodd;
	else if (xodd == 1)
		return x > y;
	else
		return x < y;
}

int main() {

	int a[10000];

	while (cin >> n >> m && (n != 0 && m != 0)) {
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			
		}
		cout << n << " " << m << endl;
		sort(a, a + n, cmp);
		for (int i = 0; i < n; i++) {
			cout << a[i] << endl;
		}
		cout << "0 0\n";
	}
	

	system("pause");
	return 0;
}
