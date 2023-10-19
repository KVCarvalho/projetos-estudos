public class SingletonEager {
    private static SingletonEager instancia = new SingletonEager();

    public static SingletonEager getInstancia() {
        return instancia;
    }

    public static int soma(int x, int y) {
        return x + y;
    }
}