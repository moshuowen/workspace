import org.apache.commons.math3.util.ArithmeticUtils;

public class gcdTest {
	public static void main(String[] args) {
		int a = ArithmeticUtils.gcd(185,189);
		int b = ArithmeticUtils.gcd(12,24);
		
		System.out.println(a);
		System.out.println(b);
	}
}
