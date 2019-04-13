/*
 *(CPE10447, UVA10642) Can You Solve It?.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int pos1, pos2;
		pos1 = ((1 + x1 + y1) * (x1 + y1)) / 2 + x1;
		pos2 = ((1 + x2 + y2) * (x2 + y2)) / 2 + x2;
		cout << "Case " << i << ": " << pos2 - pos1 << endl;

	}


	system("pause");
	return 0;
}
