package cn.moshuowen.oop;

public abstract class Animal {
	abstract public void shout();
	//Ϊ�����ṩ�淶��ģ��
	//�������ʵ����ط���
	
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