public class Facade {
    // Se trata basicamente de um intermediário para recuperar dados de lugares
    // diferentes
    // "Soma" esses dados e entrega onde será processado
    // No exemplo, o Sistema 2 seria um banco de dados onde coleta as
    // informações/API
    // O Sistema1 realiza o devido processamento das informações tanto
    // inseridas(nome e cep) quanto das coletadas(estado e cidade)
    public static void main(String[] args) throws Exception {
        Migrador migrador = new Migrador();
        migrador.migrarCliente("null", "23214124");
    }
}
