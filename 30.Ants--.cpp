/*
 *(CPE10452, UVA10714) Ants.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {                              //�d���W�h!!!!!!!
	                                      //�����ӹL��I���^�Y �һݮɶ��ۦP!!
	int c;                                 
	cin >> c;
	while (c--) {
		int L, n;
		cin >> L >> n;
		int x;
		int a, b;
		int max = 0, min =0;
		while (n--) {
			cin >> x;
			a = x;                                 //����2�� �@�j�@�p  �A���O��X�̤j����
			b = L - x;
		
			if (a > b) {    
				int temp = a;
				a = b;
				b = temp;
			
		}
				if (a > min) {
					min = a;
				}
				if (b > max) {
					max = b;
				}
			}
		
		cout << min << " " << max << endl;
	}


	system("pause");
	return 0;
}
