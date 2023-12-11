// See https://aka.ms/new-console-template for more information
Console.WriteLine("Hello, World Manoel !");

#region Teste de tipo de dados
    int tipoInteiro;
    double tipoDouble;
    string tipoString;
    long tipoLong;

    tipoInteiro = int.MaxValue;
    tipoLong = long.MaxValue;

    // tipoInteiro = tipoLong;
    tipoLong = tipoInteiro ;

    tipoString = "100";
    tipoDouble = tipoInteiro;
    tipoInteiro = int.Parse(tipoString);

    Console.WriteLine("O maximo interio e:" + tipoInteiro);
    Console.WriteLine("O maximo long e:" + tipoLong);
    Console.WriteLine("O maximo double e:" + tipoDouble);
    Console.WriteLine("O tipo string e:" + tipoString);
   
#endregion


#region  conversão, questão 3 pratica 1

    double d = 765.12;   
    int i = (int)d;               
    Console.WriteLine("Valor de i é " + i ); 
#endregion

#region  operadores, questão 4 pratica 1

    int x = 10 , y = 3;

    Console.WriteLine("Adição de i é " + (x + y)  ); 
    Console.WriteLine("Subtração de i é " + (x - y) ); 
    Console.WriteLine("Multiplicação de i é " + (x * y) ); 
    Console.WriteLine("Divisão de i é " + (x / y) ); 
    Console.WriteLine("Resto da divisão de i é " + (x % y) ); 
#endregion

#region  operadores comparacao , questão 5 pratica 1

     int a = 5, b = 8;

    if(a > b){
       Console.WriteLine("A é maior que B");
    }else{
         Console.WriteLine("A é igual ou menor que B");
    }
#endregion

#region  operadores comparacao , questão 6 pratica 1

    String str1 = "Hello", str2 = "World";

    if(str1 == str2){
       Console.WriteLine("As duas strings são iguais");
    }else{
         Console.WriteLine("As duas strings não são iguais");
    }
#endregion

#region  operadores comparacao , questão 7 pratica 1

    bool condicao1 = true, condicao2 = false;

    if(condicao1 == condicao2){
       Console.WriteLine("As condições são iguais");
    }else{
         Console.WriteLine("As condições não são iguais");
    }
#endregion
#region  operadores comparacao , questão 8 pratica 1
    int num1 = 7, num2 = 3, num3 = 10;

    if(num1 > num2){
       Console.WriteLine("num1 é maior do que num2");
    }
    
    if(num3 == (num1 + num2)){
        Console.WriteLine("num3 é igual a num1 + num2");
    }else{
        Console.WriteLine("num3 não é igual a num1 + num2");

    }
#endregion
