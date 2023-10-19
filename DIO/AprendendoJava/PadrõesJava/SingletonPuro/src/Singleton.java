public class Singleton {
    public static void main(String[] args) throws Exception {
        // O uso de singleton basicamente faz com que o seja gerado apenas um objeto
        // Não permite uso de setters, uma vez que se trata de um instanciamento
        // estático
        // Basicamente gerará um único objeto de processamento, na qual não precisará
        // ser instanciado para ser usado(vide fim do programa)
        /*
         * SingletonLazy lazy = SingletonLazy.getInstancia();
         * System.out.println(lazy);
         * SingletonLazy lazy1 = SingletonLazy.getInstancia();
         * System.out.println(lazy1);
         * 
         * SingletonEager eager = SingletonEager.getInstancia();
         * System.out.println(eager);
         * SingletonEager eager1 = SingletonEager.getInstancia();
         * System.out.println(eager1);
         * 
         * SingletonLazyHolder lazyholder = SingletonLazyHolder.getInstancia();
         * System.out.println(lazyholder);
         * SingletonLazyHolder lazyholder1 = SingletonLazyHolder.getInstancia();
         * System.out.println(lazyholder1);
         */
        System.out.println(SingletonEager.soma(2, 1));
    }

}
