package cn.moshuowen.oop;

public class LreanInterface {
	public static void main(String[] args) {
		angle a1 = new angle();
		a1.fly();
		a1.helpOther();
	}
}


interface volant {
	int FLY_HRIGHT = 1000;
	void fly();
}

interface helpOther{
	void helpOther();
}

class angle implements volant,helpOther{

	@Override
	public void helpOther() {
		System.out.println("angle.helpOther()");
		
	}

	@Override
	public void fly() {
		System.out.println("angle.fly()");
		
	}
	
}


class bridman implements volant{

	@Override
	public void fly() {
		System.out.println("bridman.fly()");
	}
	
}

class goodman implements helpOther
{

	@Override
	public void helpOther() {
		System.out.println("goodman.helpOther()");
		
	}
	
}