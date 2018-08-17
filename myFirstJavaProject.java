import java.util.Scanner;

public class HelloWorld {

	public static void main(String[] args) {
		
		int idade;
	
		
		Scanner teclado = new Scanner(System.in);
		idade = teclado.nextInt();
		
		System.out.println("Hello world!");
		System.out.println("My first executable Java!");
		System.out.println("I've " + idade + " years");

	}

}
