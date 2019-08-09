package cn.moshuowen.array;

import java.util.Arrays;

/**
 * 测试拷贝数组
 * @author moshuuowen	 
 *
 */
public class TestCopyArray {
	public static void main(String[] args) {
		
		
		
	}
	public static void testBasicCopy() {
		String str1[] = {"aa","bb","cc","dd","cc"};
		String str2[] = new String[10];
		System.arraycopy(str1, 2, str2, 6, 3);
		System.out.println(Arrays.toString(str2));
	}
}