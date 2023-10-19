public class SingletonLazy {

    private static SingletonLazy instancia;

    public static SingletonLazy getInstancia() {
        if (instancia == null) {
            instancia = new SingletonLazy();
        }
        return instancia;
    }
}
