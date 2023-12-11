// aula 5 - questão 5
List <( string name, int height)> tupleList = new();

tupleList.Add(("Manoel", 1000));
tupleList.Add(("John", 1000));
tupleList.Add(("Marcela", 1000));

int soma = 0;
// var media = tupleList.Select( args => soma += args.height ).ToList();

tupleList.ForEach( args => soma += args.height );
Console.WriteLine("soma " + soma);

Func<int,int,int> media = (soma,qtd) => soma / qtd;
Console.WriteLine($"media {media(soma,tupleList.Count)}");
