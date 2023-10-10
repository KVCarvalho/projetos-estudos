public class Fors {
    int[] array = new int[4];

    void executar() {
        System.out.println("For");
        for (int i = 0; i < 10; i++) {
            System.out.println(i);
        }

        System.out.println("Outro For");
        for (int i = 0; i < 4; i++) {
            array[i] = i + 2;
            System.out.println(array[i]);
        }
    }
}
