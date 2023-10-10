public class WhileDo {
    int a = 0, x = 0, y = 0;

    void executar() {
        System.out.println("Ambas possuem logica de i < 0");
        while (a < 5) {
            System.out.println(a++);
        }

        System.out.println("Mas o while para de executar assim que a condicao e alcancada:");
        while (x < 0) {
            System.out.println(x++);
        }

        System.out.println("Ja o do/while Executa ao menos uma vez");
        do {
            System.out.println(y++);
        } while (y < 0);
    }
}
