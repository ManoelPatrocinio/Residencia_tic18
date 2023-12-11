package questao3;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.Random;
import java.util.Scanner;

public class ManipulaArray {
	
	private ArrayList<Integer>arrayInterio; 
	
	ManipulaArray(){
		arrayInterio  = new ArrayList<Integer>();
	}
	
	public ArrayList<Integer> getArrayInterio() {
		return arrayInterio;
	}

	public void setArrayInterio(int valor) {
		this.arrayInterio.add(valor) ;
	}

	public void addNoArray() {
		Scanner scanner = new Scanner(System.in);
		for(int i = 0; i < 4; i++) {
			System.out.println("Informe o valor inteiro: ");
			int valor = scanner.nextInt(); 
			this.setArrayInterio(valor);
		}
	}
	
	public void gerarArrayAleatorio() {
		Scanner scanner = new Scanner(System.in);
		 Random rand = new Random();
		 
		for(int i = 0; i < 4; i++) {
			int int_random = rand.nextInt(1,100);
			this.setArrayInterio(int_random);
		}
	}
	
	public void somaDoArray(ArrayList<Integer> array) {
		int soma = 0;
		for (int i = 0; i < array.size(); i++) {
		     soma += array.get(i);
		}
		 System.out.println("A soma dos elementos do array é: " + soma );
	}

	public void maiorValorArrayAleatorio(ArrayList<Integer> array) {
		int maior = 0;
		for (int i = 0; i < array.size(); i++) {
			if(maior < array.get(i)) {
				maior = array.get(i);
			}
		}
		 System.out.println("o maior valor do array  é: " + maior );
	}
	public void menorValorArrayAleatorio(ArrayList<Integer> array) {
		int menor = array.get(0);
		for (int i = 0; i < array.size(); i++) {
			
			if(menor > array.get(i)) {
				menor = array.get(i);
			}
		}
		System.out.println("o maior valor do array  é: " + menor);
	}
	
	public static void main(String[] args) {
		ManipulaArray pessoa1 = new ManipulaArray();
		ManipulaArray pessoa2 = new ManipulaArray();
		
		pessoa1.addNoArray();
		pessoa2.gerarArrayAleatorio();
		
		System.out.println("Resultado da pessoa 1 " );
		pessoa1.somaDoArray(pessoa1.getArrayInterio());
		pessoa1.maiorValorArrayAleatorio(pessoa1.getArrayInterio());
		pessoa1.menorValorArrayAleatorio(pessoa1.getArrayInterio());
		
		System.out.println("Resultado da pessoa 2 (valor aleatorio) " );
		pessoa2.somaDoArray(pessoa2.getArrayInterio());
		pessoa2.maiorValorArrayAleatorio(pessoa2.getArrayInterio());
		pessoa2.menorValorArrayAleatorio(pessoa2.getArrayInterio());
		
	}
	
}
