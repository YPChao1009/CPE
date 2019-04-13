/*
 *(CPE10526, UVA10106) Product.java
 * Author:Yun Pei Chao 
 */
package p1;                                        //大數運算使用java內建BigInteger函式

import java.math.BigInteger;
import java.util.Scanner;

public class source {

	public static void main(String[] args) {
		// TODO ¦Û°Ê²£¥Íªº¤èªk Stub

		BigInteger X,Y;
		Scanner input=new Scanner(System.in);
		while(input.hasNext()) {                           
			X=input.nextBigInteger();
			Y=input.nextBigInteger();
			System.out.printf("%d\n",X.multiply(Y));
		}
	}

}
