// dotNet - Aula 03 - Estruturas de Fluxo


#region  foreach

string[] colecao = {"Item1","Item2","Item3","Item4"};

foreach (string item in colecao)
{
    Console.WriteLine(item); 
}

#endregion

#region Resolução exercício - divisiveis

Console.WriteLine("\nResolução exercício 1\n"); 

for(int i = 0; i <= 30; i++){
    if(i % 3 == 0){
        Console.WriteLine( i + " é divisivel por 3"); 
    }else if(i % 4 == 0){
        Console.WriteLine( i + " é divisivel por 4"); 
    }
}
#endregion 

#region Resolução exercício - Fibonacci
Console.WriteLine("\n Sequencia  Fibonacci\n"); 

int numeroAnterior = 0;
int numeroAtual = 1;
int novoNumero;
int fibonacci;


for (int i = 0; i < 60; i++)
{
    fibonacci = numeroAnterior + numeroAtual;
    Console.WriteLine(fibonacci);

    numeroAnterior = numeroAtual;
    numeroAtual = fibonacci;
}

#endregion 

#region string- entrada de dados

    string? str = Console.ReadLine();
    Console.WriteLine($"Text");
    Console.WriteLine("A string foi " + str);
    
 

#endregion 

#region 

    List<int> numbers = new List<int>();
    numbers.Add(1);
    numbers.Add(2);
    numbers.Add(3);


    foreach (int number in numbers)
    {
        Console.WriteLine(number);
    }
#endregion

