package aula03;
import java.util.Scanner;
public class Cliente {
	private String nome, email, cpf;
	private int id = 0, nascDia, nascMes, NascAno;
	private String telefones[];
	private boolean ativo;
	
	Cliente(String nome,String cpf){
		id++;
		setNome(nome);
		setCpf(cpf);
		System.out.println("Constructor called");
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

	public String getCpf() {
		return cpf;
	}

	public void setCpf(String cpf) {
		this.cpf = cpf;
	}

	public int getNascDia() {
		return nascDia;
	}

	public void setNascDia(int nascDia) {
		this.nascDia = nascDia;
	}

	public int getNascMes() {
		return nascMes;
	}

	public void setNascMes(int nascMes) {
		this.nascMes = nascMes;
	}

	public int getNascAno() {
		return NascAno;
	}

	public void setNascAno(int nascAno) {
		NascAno = nascAno;
	}

	public String[] getTelefones() {
		return telefones;
	}

	public void setTelefones(String[] telefones) {
		this.telefones = telefones;
	}

	public boolean isAtivo() {
		return ativo;
	}

	public void setAtivo(boolean ativo) {
		this.ativo = ativo;
	}

	
	public int getId() {
		return id;
	}

	public void setId(int id) {
		this.id = id;
	}

	public static void main(String[] args) {
		Scanner entrada = new Scanner(System.in);
		
		System.out.println("Digite o nome do cliente: ");
        String nome = entrada.nextLine();
        System.out.println("Digite o cpf do cliente: ");
        String cpf = entrada.nextLine();
//        System.out.println(in.nextLine());
		
        Cliente novoClitente = new Cliente(nome,cpf);
		System.out.println("ID: " + novoClitente.getId());
		System.out.println("Novo cliente: " + novoClitente.getNome());
		System.out.println("CPF: " + novoClitente.getCpf());
		
	}
}
