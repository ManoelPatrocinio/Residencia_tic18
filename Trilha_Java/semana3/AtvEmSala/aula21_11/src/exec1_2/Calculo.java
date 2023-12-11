package exec1_2;

import java.util.Scanner;

public class Calculo {
	public static int Somainteiro(int n1, int n2) {
		return n1 + n2;
	}
	
	public static float MediaPonderada(float n1,float n2,float n3, float p1,float p2,float p3) {
		return  (n1 + n2 + n3) / (p1 + p2 + p3);
	}
	
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("A soma entre Inteiros " );
		
		System.out.println("Informe o primeiro inteiro");
		int n1 = scanner.nextInt();
		
		System.out.println("Informe o primeiro inteiro");
		int n2 = scanner.nextInt(); 
		System.out.println("A soma entre " + n1 + " e " + n2 + ": " + Somainteiro(n1,n2));
		
		
		System.out.println("\nCalculo da média ponderada\n" );
		
		System.out.println("Informe a primeira nota");
		float nota1 = scanner.nextFloat();
		System.out.println("peso da primeira nota");
		float peso1 = scanner.nextFloat();
		
		System.out.println("Informe a segunda nota");
		float nota2 = scanner.nextFloat(); 
		System.out.println("Peso a segunda nota");
		float peso2 = scanner.nextFloat(); 
		
		System.out.println("Informe a terceira nota");
		float nota3 = scanner.nextFloat(); 
		System.out.println("Peso a terceira nota");
		float peso3 = scanner.nextFloat();
		
		System.out.println("A média pondera dos valores informados é: " + MediaPonderada(nota1,nota2,nota3,peso1,peso2,peso3));
		System.exit(0);
	}
}
