package conversor_moedas;

import java.util.Scanner;

public class Conversor {
	
	static int Menu() {
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("1 - Dolar p/ Reais");
		System.out.println("2 - Dolar p/ Euro");
		System.out.println("3 - Dolar p/ Yuan");
		System.out.println("0 - Sair");
		System.out.println("Sua Escolha: ");
		int op = scanner.nextInt(); 
		
		return op;
	}
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int op; 
		
		System.out.println("Informe o valor em dolar que deseja converter: ");
		double vDolar = scanner.nextDouble(); 
		
		do {
			op = Menu();
			
			switch (op) {
				case 1: {
					double res = vDolar * 4.92;
					System.out.println(vDolar + "U$ convertido em Reais é : " + res + " R$");
				}
				case 2: {
					double res = vDolar * 0.92;
					System.out.println(vDolar + " U$ convertido em Euro é : " + res + " EUR");
				}
				case 3: {
					double res = vDolar * 7.74;
					System.out.println(vDolar + " U$ convertido em Youn Chinês é : " + res);
				}
				case 0:{
					return;
				}
				default:
					throw new IllegalArgumentException("Unexpected value: " + op);
				}
			
		} while (true);
	}
}
