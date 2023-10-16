package aplicativos;

import interfaces.navegador;

public class NavegadorInternet implements navegador {

    @Override
    public void exibirPagina(String endereco) {
        System.out.println("Mostrando pagina: " + endereco);
    }

    @Override
    public void adicionarNovaAba() {
        System.out.println("Adicionando nova aba");
    }

    @Override
    public void atualizarPagina() {
        System.out.println("Atualizando página");
    }

}
