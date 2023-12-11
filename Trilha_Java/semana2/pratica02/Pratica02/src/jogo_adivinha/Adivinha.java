package jogo_adivinha;

import java.util.Random;
import java.util.Scanner;

public class Adivinha {
	public static void main(String[] args) {
		 Random rand = new Random();
		 Scanner scanner = new Scanner(System.in);
		 int int_random = rand.nextInt(1,100);
		 int escola;
		 
		 System.out.println("num: " + int_random);
		 
		 System.out.println("Adivinhe o Númoro de 1 a 100 \n");
		 do {
			 System.out.println("Sua Escolha: ");
			 escola = scanner.nextInt(); 
		 } while (escola != int_random);
		 System.out.println("Parabéns você acertou, o número é: " + int_random);
	}
}
