package cn.moshuowen.oop;

public class myInterface2 {

}

interface A{
	void testa();
}

interface B{
	void testb();
}

interface testc extends A,B{		//�ӿڿ��Զ�̳�
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