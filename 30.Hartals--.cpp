/*
 *(CPE10517, UVA10050) Hartals.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		int total;
		cin >> total;
		int num;
		cin >> num;
		int p[100] = { 0 };
		int day[3650] = { 0 };
		int count = 0;
		for (int i = 0; i < num; i++) {
			cin >> p[i];
			for (int j = p[i]; j <= total; j += p[i]) {         //��Ū�䰵
				day[j] = 1;                                     //�����N�Х�
				if (j % 7 == 6 || j % 7 == 0) {                 //�P�����B������
					day[j] = 0;
				}
			}

		}
		for (int i = 1; i <= total; i++) {
			
			if (day[i] == 1)                                     //���`�Ѽ�
				count++;
		}
		cout << count << endl;
		

	}




	system("pause");
	return 0;
}