/*
 *(CPE10424, UVA10221) Satellites.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
using namespace std;
int main() {
	double s, a;
	string str;
	while (cin >> s >> a >> str) {
		if (str[0] == 'm') a /= 60;
		if (a>180)   a = 360 - a;
		s += 6440;
		printf("%.6lf %.6lf\n", a*acos(-1.0) / 180.0*s, 2.0*s*sin(a*acos(-1.0) / 180.0 / 2.0));

	}
	system("pause");
	return 0;
}
