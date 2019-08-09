package cn.moshuowen.String;
/**
 * 测试字符串类的基本用法
 * @author moshuowen
 *
 */
public class StringBase {

	public static void main(String[] args) {
			
		String str1 = "msw";
		String str2 = "msw";
		String str3 = "18" + 19;
		String str4 = new String("msw");
		System.out.println(str1 == str2);	//String Pool
		System.out.println(str2 == str4);
		System.out.println(str3);
		System.out.println(str4.equals(str2));		//比较内容
	}

}
