#region Expressão lambda

    string[] people = { "Manoel", "Marcela", "John"};

    char letter = 'M';
    Console.WriteLine($"People with name started with '{letter}': {string.Join(", ", people.Where(x => x.StartsWith(letter)))}");
#endregion

#region Linq

List<int> list = new() {1,2,3,4,5,6,7};

var squareList = list.Select(x => x * x);

Console.WriteLine($"Original List: {string.Join(", ", list)}"); 
Console.WriteLine($"Original List: {string.Join(", ", squareList)}"); 

var summedList = list.Select((x,index) => x + squareList.ElementAt(index));
Console.WriteLine($"Summed List: {string.Join(", ", summedList)}");

var listMultipleOfTree = list.Where(x => x % 3 == 0).ToList();

listMultipleOfTree.AddRange(squareList.Where(x => x % 3 == 0).ToList());
listMultipleOfTree.AddRange(summedList.Where(x => x % 3 == 0).ToList());
Console.WriteLine($"List Multiple of Three: {string.Join(", ",listMultipleOfTree)}");
Console.WriteLine($"List Multiple of Three: {string.Join(", ",listMultipleOfTree.Order())}");
#endregion