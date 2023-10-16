import aplicativos.AparelhoTelefonico;
import aplicativos.NavegadorInternet;
import aplicativos.ReprodutorMusical;

public class Iphone {
    public static void main(String[] args) throws Exception {

        ReprodutorMusical reprodutorMusical = new ReprodutorMusical();
        AparelhoTelefonico aparelhoTelefonico = new AparelhoTelefonico();
        NavegadorInternet navegadorInternet = new NavegadorInternet();

        System.out.println("Saída do reprodutor");
        reprodutorMusical.tocar("The null");
        reprodutorMusical.pausar();
        reprodutorMusical.selecionarMusica("Not Null");

        System.out.println("Saída do telefone");
        aparelhoTelefonico.ligar(10000000);
        aparelhoTelefonico.atender();
        aparelhoTelefonico.iniciarCorreioVoz();

        System.out.println("Saída do navegador");
        navegadorInternet.exibirPagina("DIO");
        navegadorInternet.adicionarNovaAba();
        navegadorInternet.atualizarPagina();
    }
}
