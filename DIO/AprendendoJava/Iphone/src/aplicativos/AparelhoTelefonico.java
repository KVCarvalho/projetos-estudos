import interfaces.telefone;

public class AparelhoTelefonico implements telefone {

    @Override
    public void ligar(int numero) {
        System.out.println("Ligando para: " + numero);
    }

    @Override
    public void atender() {
        System.out.println("Atendendo ligacao");
    }

    @Override
    public void iniciarCorreioVoz() {
        System.out.println("Iniciando correio de voz");
    }

}
