/*
 *(CPE10419, UVA10190) Divide, But Not Quite Conquer!.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {
	
	int n, m;
	while (cin >> n >> m) {
		if (n < 2 || m < 2) {                             //例外
			cout << "Boring!\n";
		}
		int backup = n;                                   //備份
		while (n%m == 0 && n > 1) {                       //先檢查能不能做
			n /= m;
		}
		if (n != 1) {
			cout << "Boring!\n";
		}
		else {                                           //真正要print出的
			n = backup;
			while (n%m == 0 && n > 1) {
				cout << n << " ";
				n /= m;
				
			}cout << "1" << endl;                        //因為n=1時就跳出while 不會print
		}
		
	}

	system("pause");
	return 0;
}
