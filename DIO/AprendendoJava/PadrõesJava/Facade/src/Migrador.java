import sistemas.Sistema1;
import sistemas.Sistema2;

public class Migrador {
    public void migrarCliente(String nome, String cep) {
        String cidade = Sistema2.getInstancia().recuperarCidade(cep);
        String estado = Sistema2.getInstancia().recuperarEstado(cep);
        Sistema1.gravarCliente(nome, cep, estado, cidade);
    }
}
