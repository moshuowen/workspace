package Collection;
/***
 * ·ºÐÍ
 * @author ÄªË¶ÎÄ
 */
public class TestGeneric {
	public static void main(String[] args) {
		MyCollection<String> mc = new MyCollection<>();
		mc.set("msw",1);
		mc.set("hahaha", 0);
		String a = mc.get(0);
		String b = mc.get(1);
		System.out.println(a + "\n" + b);
	}
}


class MyCollection<E>{
	Object[] objs = new Object[5];
	public void set(E e,int index) {
		objs[index] = e;
	}
	public E get(int index) {
		return (E)objs[index];
	}
}