## RESOLUÇÃO DA PRÁTICA 01 - TRILHA BÁSICA EM JAVA
### ALUNO: Manoel De Jesus Moura Do Patrocínio
### TURMA: T3


<p>
1. O que é uma classe em Java e qual é a diferença entre uma classe e um
objeto? Dê 5 exemplos mostrando-os em C++ e em Java. 
</p>

Em java, uma classe é um  modelo ou especificação lógica, que consiste em uma maneira de organizar um conjunto de dados, e designar todos os métodos necessários para usar ou alterar esses dados. 

Já Um objeto apresenta um agrupamento de dados e procedimentos lógicos  definidos na classe. E são instanciados a partir dessa classe;

A sintaxe para a criação de Classes é semelhante em C++ e em Java.

Uma diferença é na definição de atributos e métodos públicos,protegidos e privados.

Em C++ a visibilidade público,protegido e privado dos atributos são definidos em um bloco ou area.
Enquanto em Java essa definição é feita em cada atributo individualmente.

Exemplo:

Em Java

 ~~~Java
    //  Java
    public class NomeDaClasse {
        // Atributos da Classe (Variáveis)
        int atributo;
        private privateAtributo;

        //Construtor da Classe
        public NomeDaClasse(int valor){}
        //métodos da clase
        public void nomeDoMetodo(String parametros){
            // Bloco do metodo
        }
    }
 ~~~

Em C++
 ~~~ C++
    // C++
     class NomeDaClasse {
        // Atributos da Classe (Variáveis)
        private:
            privateAtributo;
        public:
            int atributo;
            //Construtor da Classe
            NomeDaClasse(int valor){

            }
            //métodos da clase
            void nomeDoMetodo(String parametros){
            // Bloco do metodo
            }
    }

 ~~~

<p>
2. Como você declara uma variável em Java e quais são os tipos de dados
primitivos mais comuns? Faça um paralelo entre isso e a mesma coisa na
linguagem C++ 
</p>

    1. A declaração de variável é a mesma em Java e C++: TipoDaVariavel nomeDaVariavel  ex: int nome; 
    Com uma ressalva que em  C++ o atributo é especificamente o dado armazenado na memória, enquanto em Java nem sempre, pois é um ponteiro que aponta para uma endereço da memória.

    2. O tipo primitivos também são os mesmos: byte, short, int, long, char, float, double, boolean.

<p>
3. Explique o conceito de herança em Java e como você pode criar uma
subclasse a partir de uma classe existente. Faça um paralelo com C++,
apresentando 5 exemplos.
</p

Herança é uma técnica para reutilizar características de uma classe na definição de outra classe,  sendo possível reutilizar componentes de maneira mais rápida e simples além de facilitar a extensibilidade do sistema.

Tanto Java como C++ a sintaxe para criação de classes são idênticas, sendo considerada apenas a definição dos atributos,métodos e da própria classe como citado anteriormente. 

~~~Java

class NomeDaClasse(){
    int atributo;
        private privateAtributo;

        //Construtor da Classe
        public NomeDaClasse(int valor){}

        //métodos da clase
        public void nomeDoMetodo(String parametros){
            // Bloco do metodo
        }
}
~~~ 
Para criar uma subclasse no Java, basta declará-la com a palavra reservada extends e indicar qual a superclasse que ela vai estender. No exemplo abaixo:

~~~ Java

    public class Veiculo{ 
        public String modelo; 
        public String marca;

        public getModelo(){
            return modelo;
        }
        public setModelo(String parm_modelo){
             modelo = parm_modelo;
        }

    }
    public class Carro extends Veiculo {
        public String portas;

        public listaDados(){
            System.out.println("Marca: " + marca);
            System.out.println("Modelo: " + modelo);
            System.out.println("Portas: " + portas);
            
        }

    }
    public class Moto extends Veiculo {
         public int cilindrados;

          public listaDados(){
            System.out.println("Marca: " + marca);
            System.out.println("Modelo: " + modelo);
            System.out.println("cilindrados: " + cilindrados);
            
        }
    }
~~~
<p>
4. Quando declaramos uma variável em Java, temos, na verdade, um ponteiro.
Em C++ é diferente. Discorra sobre esse aspecto.
</p>

Em C++ quando declaramos e usamos uma variável estamos referindo especificamente a um dado armazenado na memória, em uma posição especifica.

Enquanto em Java uma variável é ponteiro implícito( com ressalva em  raros exceções), que "aponta" para uma posição da memória onde o dado está armazenado. 


