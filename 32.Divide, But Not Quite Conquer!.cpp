/*
 *(CPE10419, UVA10190) Divide, But Not Quite Conquer!.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {
	
	int n, m;
	while (cin >> n >> m) {
		if (n < 2 || m < 2) {                             //�ҥ~
			cout << "Boring!\n";
		}
		int backup = n;                                   //�ƥ�
		while (n%m == 0 && n > 1) {                       //���ˬd�ण�వ
			n /= m;
		}
		if (n != 1) {
			cout << "Boring!\n";
		}
		else {                                           //�u���nprint�X��
			n = backup;
			while (n%m == 0 && n > 1) {
				cout << n << " ";
				n /= m;
				
			}cout << "1" << endl;                        //�]��n=1�ɴN���Xwhile ���|print
		}
		
	}



	system("pause");
	return 0;
}