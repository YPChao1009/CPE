/*
 *(CPE10510, UVA10013) Super Long Sums.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	while (n--) {
		int m;
		int a[10000], b[10000],c[10000];
		cin >> m;
		int count = 0;
		
		memset(a, 0, sizeof(a));                      //memset 指令是用來把 big 陣列先全都清零
			memset(b, 0, sizeof(b));
			memset(c, 0, sizeof(c));
		for (int i = 0; i <m; i++) {
			
			cin >> a[i] >> b[i];
			if ((a[i] + b[i]) > 9) {
				c[i] = (a[i] + b[i])% 10;
				
				c[i - 1] += (a[i] + b[i]) / 10;
				count = (i + 1);
			}
			else {
				c[i] = a[i] + b[i];
				count = i+1;
			}
		}

		for (int i = 0; i<count; i++) {
			cout << c[i];
			
		}
		cout << endl<<endl;
		
	}
	
	system("pause");
	return 0;
}