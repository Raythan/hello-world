import java.util.Scanner;

public class HelloWorld { // Vai gerar erro no repl.it, o nome da classe principal precisa ter o mesmo do arquivo

	public static void main(String[] args) {
		
		int idade;
	
		
		Scanner teclado = new Scanner(System.in);
		idade = teclado.nextInt();
		
		System.out.println("Hello world!");
		System.out.println("My first executable Java!");
		System.out.println("I've " + idade + " years");

	}

}
