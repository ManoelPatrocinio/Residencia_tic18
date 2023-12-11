package conversor;

import java.util.Scanner;

public class Conversor {

		public static void main(String[] args) {
			Scanner scanner = new Scanner(System.in);
			
			System.out.println("Qual conversão deseja realizar:");

            System.out.println("1 - De Celsius p/ Fahrenheit ");
            System.out.println("2 - De Fahrenheit p/ Celsius ");
            int op = scanner.nextInt(); 
            
    	  if (op == 1) {
    		  System.out.println("Informe a temperatura em Celsius: ");
    		  double celsius = scanner.nextDouble(); 
              
    		  double result = (celsius * 1.8) + 32;
              
              System.out.println("A temperatura em Celsius = " + celsius + "; Em Fahrenheit = " + result);
    	  }else if(op == 2) {
    		  System.out.println("Informe a temperatura em Fahrenheit: ");
    		  double fahrenheit = scanner.nextDouble(); 
    		  
    		  double result = (fahrenheit - 32 ) / 1.8;
    		  
    		   System.out.println("A temperatura em Fahrenheit = " + fahrenheit + "; Em Celsius = " + result);
    	  }else {
    		  System.out.println("Opção inválida");
    	  }
    	  System.exit(0);
		}
}
