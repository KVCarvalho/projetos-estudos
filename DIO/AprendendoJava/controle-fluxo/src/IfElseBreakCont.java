public class IfElseBreakCont {
    void executar() {
        System.out.println("If/Else + Break. O break irá quebrar o fluxo que deveria ir até 10, mas parará em 7");
        for (int i = 0; i < 10; i++) {
            if (i != 7) {
                System.out.println(i);
            } else {
                break;
            }
        }
        System.out.println(
                "Continue irá continuar para o próximo momento do fluxo, ou seja, no caso da lógica abaixo, irá apenas continuar, pulando os números pares");
        for (int i = 0; i < 10; i++) {
            if (i % 2 != 0) {
                System.out.println(i);
            } else {
                continue;
            }
        }
    }
}
