/*
 *(CPE10526, UVA10106) Product.java
 * Author:Yun Pei Chao 
 */
package p1;

import java.math.BigInteger;
import java.util.Scanner;

public class source {

	public static void main(String[] args) {
		// TODO 自動產生的方法 Stub

		BigInteger X,Y;
		Scanner input=new Scanner(System.in);
		while(input.hasNext()) {                           //***********
			X=input.nextBigInteger();
			Y=input.nextBigInteger();
			System.out.printf("%d\n",X.multiply(Y));
		}
	}

}
