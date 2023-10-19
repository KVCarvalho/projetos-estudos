public class SingletonLazyHolder {

    private static class Holder {
        public static SingletonLazyHolder instancia = new SingletonLazyHolder();
    }

    public static SingletonLazyHolder getInstancia() {
        return Holder.instancia;
    }

}
