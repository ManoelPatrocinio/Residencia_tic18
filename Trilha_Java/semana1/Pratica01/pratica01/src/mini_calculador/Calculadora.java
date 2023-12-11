package mini_calculador;

import java.util.Scanner;

public class Calculadora {
	
	public static void main(String[] args) {
		 Scanner scanner = new Scanner(System.in);
		 int sair = 0;
        do {
        	   System.out.println("Informe o primeiro número:");
               int a = scanner.nextInt();

               System.out.println("Informe o segundo número:");
               int b = scanner.nextInt();
               
               System.out.println("Qual operação deseja realizar:");

               System.out.println("1 - p/ Adição");
               System.out.println("2 - p/ Subtração");
               System.out.println("3 - p/ Multiplicação");
               System.out.println("4 - p/ Divisão");
               int op = scanner.nextInt();
               
               switch (op) {
       		case 1: {
       	        int sum = a + b;
       	        System.out.println("A soma entre " + a + " e " + b + ": " + sum);
       			break;
       		}
       		case 2: {
       			int difference = a - b;
       	        System.out.println("A subtração  entre " + a + " e " + b + ": " + difference);
       			break;
       		}
       		case 3: {
       			int product = a * b;
       	        System.out.println("A multiplicação  entre " + a + " e " + b + ": " + product);
       			break;
       		}
       		case 4: {
       			 double quotient = (double) a / b;
       	        System.out.println("A divisão  entre " + a + " e " + b + ": " + quotient);
       			break;
       		}
       		default:
       			throw new IllegalArgumentException("Opão inválida: " + op);
       		}
               
           System.out.println("Fazer outra operação ?");
           System.out.println("1 - Sim | 2 - Não");
           sair = scanner.nextInt();   
               
		} while (sair != 2);
        System.exit(0);
	}
}
