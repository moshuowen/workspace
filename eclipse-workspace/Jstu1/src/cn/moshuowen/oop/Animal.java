package cn.moshuowen.oop;

public abstract class Animal {
	abstract public void shout();
	//为子类提供规范的模板
	//子类必须实现相关方法
	
	public void run() {
		System.out.println("Animal run..");
	}
	public static void main(String[] args) {
		Animal a = new Dog();
		MyClass b = new MyClass();
		a.shout();
		b.getAge();
	}
}

class Dog extends Animal{

	@Override
	public void shout() {
		System.out.println("Dog Shouting...");
		
	}
	
	
}