package exception;
/***
 *自定义的异常s
 * @author 莫硕文
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
				throw new AgeException("年龄不能为负数");
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