package exception;
/***
 *�Զ�����쳣s
 * @author Ī˶��
 *
 */
public class Test01 {
	public static void main(String[] args) {
		Person p = new Person();
		p.setAge(-10);
	}
}

class Person{
	private int age;

	public int getAge() {
		return age;
	}

	public void setAge(int age) {
		if(age < 0) {
			try {
				throw new AgeException("���䲻��Ϊ����");
			} catch (AgeException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
		this.age = age;
	}


}

class AgeException extends Exception{
	public AgeException() {
		
	}
	public AgeException(String msg) {
		super(msg);
	}
}