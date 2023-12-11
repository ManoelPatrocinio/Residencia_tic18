package aula03;

import java.util.ArrayList;
import java.util.Scanner;

public class Usuario {
	private int id = 0,quantidadeDePostagens,pontuacao;
	private String nome, email, nacionalidade;
	private ArrayList<String> postagens;
	
	Usuario(){
		id++;
		quantidadeDePostagens = 0;
		pontuacao = 0;
		postagens  = new ArrayList<String>();
	}
	
	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public String getNacionalidade() {
		return nacionalidade;
	}

	public void setNacionalidade(String nacionalidade) {
		this.nacionalidade = nacionalidade;
	}


	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public void adiconaPostagem(String post) {
		 System.out.println("Postagem adicionada !");
		 this.postagens.add(post);
	}
	
	
	public int getQuantidadeDePostagens() {
		return quantidadeDePostagens;
	}

	public void setQuantidadeDePostagens() {
		this.quantidadeDePostagens = quantidadeDePostagens++;
	}

	public int getPontuacao() {
		return pontuacao;
	}

	public void setPontuacao(int pontuacao) {
		this.pontuacao = pontuacao;
	}

	public void alteraPontuacao(int delta) {
		this.pontuacao += delta;
	}
	public void exibirUsuario(Usuario user) {
		System.out.println("Usuário");
		System.out.println("Id: " + user.getId());
		System.out.println(user.getNome());
		System.out.println(user.getEmail());
		System.out.println(user.getNacionalidade());
		System.out.println("Postagens: " + user.getQuantidadeDePostagens());
		System.out.println("Pontos: " + user.getPontuacao());
		 
	}
	
	public static void main(String[] args) {
		Scanner entrada = new Scanner(System.in);
		Usuario novoUsuario = new Usuario();
		
		
		System.out.println("Digite seu nome : ");
        String nome = entrada.nextLine();
        novoUsuario.setNome(nome);
        
        System.out.println("Digite seu email: ");
        String email = entrada.nextLine();
        novoUsuario.setEmail(email);
        
        System.out.println("Digite sua nacionalidade: ");
        String nacionalidade = entrada.nextLine();
        novoUsuario.setNacionalidade(nacionalidade);
        
        System.out.println("Digite uma postagem: ");
        String postagem = entrada.nextLine();
        novoUsuario.adiconaPostagem(postagem);
        
        
        novoUsuario.exibirUsuario(novoUsuario);
	}
	
}
