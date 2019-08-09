package cn.moshuowen.innerClass;

public class TestStaticInnerClass {
	public static void main(String[] args) {
		Outer2.Inner2 inner2 = new Outer2.Inner2();
		inner2.getAge();
	}
}

class Outer2
{	
	static int age = 10;
	static class Inner2{
		public void getAge() {
			System.out.println(age);
		}
	}
}