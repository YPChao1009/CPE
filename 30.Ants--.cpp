/*
 *(CPE10452, UVA10714) Ants.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {                              //搞懂規則!!!!!!!
	                                      //擦身而過跟碰撞回頭 所需時間相同!!
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
			a = x;                                 //先分2堆 一大一小  再分別找出最大的值
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
