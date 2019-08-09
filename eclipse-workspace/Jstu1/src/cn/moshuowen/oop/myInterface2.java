package cn.moshuowen.oop;

public class myInterface2 {

}

interface A{
	void testa();
}

interface B{
	void testb();
}

interface testc extends A,B{		//接口可以多继承
	void testc();
}

class mySubClass implements testc{

	@Override
	public void testa() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void testc() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void testb() {
		// TODO Auto-generated method stub
		
	}
	
}