package cn.moshuowen.array;

import java.util.Arrays;

/**
 * ²âÊÔÊý×é¿½±´
 * @author moshuuowen	 
 *
 */
public class TestCopyArray {
	public static void main(String[] args) {
		String str1[] = {"aa","bb","cc","dd","cc"};
		String str2[] = new String[10];
		System.arraycopy(str1, 2, str2, 6, 3);
		System.out.println(Arrays.toString(str2));
	}
}
