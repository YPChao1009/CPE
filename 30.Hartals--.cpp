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
			for (int j = p[i]; j <= total; j += p[i]) {         //邊讀邊做
				day[j] = 1;                                     //有的就標示
				if (j % 7 == 6 || j % 7 == 0) {                 //星期五、六不算
					day[j] = 0;
				}
			}

		}
		for (int i = 1; i <= total; i++) {
			
			if (day[i] == 1)                                     //算總天數
				count++;
		}
		cout << count << endl;
		

	}




	system("pause");
	return 0;
}