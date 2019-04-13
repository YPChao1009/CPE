/*
 *(CPE23621, UVA11063) B2-Sequence.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<vector>
#include<string>
using namespace std;




int main() {
	
	int b[1000];
	int n;
	int count = 1;
	while (cin >> n) {
		int b2 = 0;
		for (int i = 1; i <= n; i++) {
			cin >> b[i];
			if (b[i] <= b[i - 1])
				b2 = 1;
		}
		int note[10000] = {};                    //***********{}************
		if (b2 == 0) 
			for (int i = 1; i <= n; i++) {
				for (int j = i; j <= n; j++) {
					if (note[b[i] + b[j]] != 0)       //*******檢測位置有沒有人已經坐到 若有就是重複
						b2 = 1;
					note[b[i]+ b[j]]=1;
				}
			}
		


		if (b2==0) {
			cout <<"Case #"<<count<< ": It is a B2-Sequence.\n\n";
		}
		else  {
			cout<< "Case #" << count << ": It is not a B2-Sequence.\n\n";
		}
		count++;
	}


	system("pause");
	return 0;
}