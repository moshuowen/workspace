package cn.moshuowen.String;

public class TestString {
	public static void main(String[] args) {
		String str1 = "core java";
		String str2 = "core java";
		System.out.println(str1.charAt(3));
		System.out.println(str2.length());
		System.out.println(str1.equals(str2));
		System.out.println(str1.equalsIgnoreCase(str2));
		
		System.out.println(str1.indexOf("java"));
		System.out.println(str1.indexOf("apple"));
		
		String s = new String(str1.replace(" ", "&"));
		System.out.println("result is " + s);
		
		
		String s1 = null;
		String s2 = "How are you?";
		System.out.println(s2.startsWith("How"));
		System.out.println(s2.endsWith("you"));
		
	}
}	
