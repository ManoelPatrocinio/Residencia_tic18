using System.Globalization;

public class Pessoa
{

    public Pessoa(string _nome, DateTime _dataNasc, string _CPF)
    {
        Nome = _nome;
        DataNasc = _dataNasc;
        CPF = _CPF;
    }

    public string Nome { get; set; }
    public DateTime DataNasc { get; set; }
    public string CPF;

    public string _CPF
    {
        get { return CPF; }

        set
        {
            if (value.Length == 11)
            {
                bool isValid = value.All(Char.IsDigit);

                if (isValid)
                {
                    CPF = _CPF;

                }
                else
                {
                    throw new Exception("O CPF precisa ter exatamente 11 dígitos numéricos");
                    return;
                }

            }
            else
            {
                throw new Exception("O CPF precisa ter exatamente 11 dígitos");

            }
        }
    }



}


public class Advogado : Pessoa
{

    public Advogado(string _nome, DateTime _dataNasc, string _CPF, string _CNA) : base(_nome, _dataNasc, _CPF)
    {

        CNA = _CNA;
    }

    public string CNA { get; set; }

}
public class Cliente : Pessoa
{

    public Cliente(string _nome, DateTime _dataNasc, string _CPF, string _estadoCivil, string _profissao) : base(_nome, _dataNasc, _CPF)
    {

        EstadoCivil = _estadoCivil;
        Profissao = _profissao;
    }

    public string EstadoCivil { get; set; }
    public string Profissao { get; set; }

}


namespace Application
{

    class Program
    {
        static void Main(string[] args)
        {
            List<Advogado> listAdvogados = new();
            List<Cliente> listCliente = new();

            Advogado advogado1 = new Advogado("Manoel", DateTime.Parse("1999/07/19"), "00000000001", "0938595");
            Advogado advogado2 = new Advogado("Luiza", DateTime.Parse("1975/07/19"), "00000000002", "309430");

            Cliente cliente1 = new Cliente("Sandra", DateTime.Parse("2002/10/20"), "00000000003", "solteiro", "gamer");
            Cliente cliente2 = new Cliente("Pedro", DateTime.Parse("1972/10/20"), "00000000004", "casado", "reporter");






            listAdvogados.Add(advogado1);
            listAdvogados.Add(advogado2);

            listCliente.Add(cliente1);
            listCliente.Add(cliente2);

            Console.WriteLine("\n\n---Lista de Advogados ---\n\n");
            foreach (var advogado in listAdvogados)
            {

                Console.WriteLine($"Nome: {advogado.Nome} \nCPF: {advogado.CPF}\nCNA:{advogado.CNA}\nData Nascimento: {advogado.DataNasc} \n\n");
            }

            Console.WriteLine("\n\n---Lista de Clientes ---\n\n");

            foreach (var cliente in listCliente)
            {
                Console.WriteLine($"Nome: {cliente.Nome} \nCPF: {cliente.CPF}\nData Nascimento: {cliente.DataNasc}\nEstado Civil:{cliente.EstadoCivil}\nProfissão:{cliente.Profissao} \n\n");
            }

        }
    }
}

