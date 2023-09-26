public class operadores {
    public static void main(String[] args) {
        String palavra = "Rubro"; // Sinal de igual como sinal de "alocamento"
        float soma = 2.5F + 8.6F; // Operadores aritméticos padrão funcionam
        short sub = 6 - 5;
        long multiplica = 7 * 20;
        double divisao = 5 / 2; // Não calcula decimais
        int modulo = 5 / 2;
        double resultado = (10 * 9) + (1 + 7); // Há respeito pelo pela preferência dos parenteses

        System.out.println(palavra); // Algumas funções não conseguem processar múltiplas variáveis simultâneamente
        System.out.println(soma);
        System.out.println(sub);
        System.out.println(multiplica);
        System.out.println(divisao);
        System.out.println(modulo);
        System.out.println(resultado);
        System.out.println("----------------------------------------------------------");

        String concatenacao = "";
        concatenacao = "Sinal" + "de" + "mais"; // Sinal de + pode ser usado para concatenar
        System.out.println(concatenacao);
        concatenacao = 1 + 1 + "1" + 1; // A soma é feita até o momento de se concatenar uma string, onde passa a ser
        System.out.println(concatenacao);// feita apenas concatenação
        System.out.println("----------------------------------------------------------");

        System.out.println(-resultado);// Sinal de menos serve também como "inversor de polos"
        resultado = -resultado;
        resultado = -resultado;
        System.out.println(resultado);
        System.out.println("----------------------------------------------------------");

        System.out.println(resultado--);// Operadores de incremento e decremento, sendo respeitado o posicionamento para
        System.out.println(resultado);// comportamento: A frente, executa a linha depois a operação; atrás, executa
        System.out.println(++resultado);// operação, depois linha
        System.out.println("----------------------------------------------------------");

        boolean ternario = resultado < 100 ? true : false; // Mesma lógica de if/else, mas com sinal de alocamento
        System.out.println(ternario);
        System.out.println("----------------------------------------------------------");

        ternario = resultado == 100; // Sinal de dois iguais é o de comparação, retornando booleano
        System.out.println(ternario); // != é sinal de diferente e === é de estrita igualdade/inclui tipo(ou usar
        System.out.println("----------------------------------------------------------"); // .equals())

        ternario = resultado != 100 || soma < 0; // && = lógica 'and' e || = lógica 'or'
        System.out.println(ternario);
        ternario = resultado != 100 && soma < 0;
        System.out.println(ternario);

    }
}
