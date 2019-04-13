/*
 *(CPE10422, UVA10209) Is This Integration.cpp
 * Author:Yun Pei Chao 
 */
#include<iostream>
#include<string>
#define PI 2*acos(0.)                                                //*************
using namespace std;



int main() {

	double edge;
	while (cin >> edge) {
		double square = edge * edge;                                               //�����
		double sector = edge * edge*PI/12;                                         //30�ת�����
		double angle = (edge * edge*PI/6) - (edge * (sqrt(3) / 2)*edge / 2);      //60�׮���-���T����
		
		double Y = 5 * sector - 2 * angle - square;
		double X = sector+2*angle-Y;
		double Z = sector - angle - Y;

		printf("%.3f %.3f %.3f\n", X, 4 * Y, 4 * Z);
	}

	system("pause");
	return 0;
}