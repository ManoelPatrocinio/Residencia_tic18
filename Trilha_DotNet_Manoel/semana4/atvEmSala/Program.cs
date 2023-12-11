public class Veiculo
{

    public Veiculo(string _model, int _ano, string _cor)
    {
        Modelo = _model;
        Ano = _ano;
        Cor = _cor;
    }

    public string Modelo { get; set; }
    public int Ano { get; set; }
    public string Cor { get; set; }
    public string IdadeVeiculo { get; }

}



namespace Application
{

    class Program
    {

       
        static void Main(string[] args)
        {
            Veiculo v1 = new Veiculo("exe",2022,"cinza");
            Console.WriteLine($"Modelo: {v1.Modelo}, Ano: {v1.Ano}, cor {v1.Cor}");
        }
    }
}

