package cn.moshuowen.oop;

interface myInterface {
	/*public static final*/ int maxAge = 100;
	/*public abstract */void getAge();

}

class MyClass implements myInterface{

	@Override
	public void getAge() {
		System.out.println(maxAge);
		System.out.println("MyClass.getAge()");
	}
	
}