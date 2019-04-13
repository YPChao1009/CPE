/*
 *(CPE11019, UVA10409) Die Game.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
using namespace std;



int main() {
	
	int a;
	while (cin >> a && a != 0) {
		int up = 1, n = 2, w = 3, e = 4, s = 5, down = 6;
		string b;
		int t;                                            //************buffer
		for (int i = 0; i < a; i++) {
			cin >> b;                                     //往哪方滾 就往反方向紀錄回去
			if (b == "north")
			{
				t = up;
				up = s;
				s = down;
				down = n;
				n = t;
			}
			if (b == "south")
			{
				t = up;
				up = n;
				n = down;
				down =s;				
				s = t;
			}
			if (b == "west")
			{
				t = up;
				up = e;
				e = down;
				down = w;
				w = t;
			}
			if (b == "east")
			{
				t = up;
				up = w;
				w = down;
				down = e;
				e = t;
			}
		}
		cout << up << endl;
	}

	system("pause");
	return 0;
}