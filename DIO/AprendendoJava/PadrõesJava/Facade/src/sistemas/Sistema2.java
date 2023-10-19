package sistemas;

public class Sistema2 {
    private static Sistema2 instancia = new Sistema2();

    public static Sistema2 getInstancia() {
        return instancia;
    }

    public String recuperarCidade(String cep) {
        return "Belo Horizonte";
    }

    public String recuperarEstado(String cep) {
        return "Minas Gerais";
    }
}
