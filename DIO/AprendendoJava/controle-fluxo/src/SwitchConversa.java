public class SwitchConversa {
    void executar() {
        for (int i = 0; i < 10; i++) {
            switch (i) {
                case 0:
                    System.out.println("O numero 0 nao pode ser usado como divisor");
                    break;
                case 1:
                    System.out.println("O numero 1 e um numero unico");
                    break;
                case 2:
                    System.out.println("O numero 2 e um numero que esta sempre acompanhado");
                    break;
                case 3:
                    System.out.println("O numero 3 e um numero matematicamente curioso");
                    break;
                case 4:
                    System.out.println("O numero 4 e o numero perfeito!");
                    break;
                case 5:
                    System.out.println("O numero 5 e um numero que da pra contar com uma mao so");
                    break;
                case 6:
                case 7:
                    System.out.println("O numero 7 e outro numero considerado perfeito ou sagrado");
                    break;
                case 8:
                    System.out.println("O numero 8");
                    break;

            }
        }
    }
}
