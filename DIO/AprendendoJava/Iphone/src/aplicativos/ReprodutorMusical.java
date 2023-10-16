import interfaces.musicas;

public class ReprodutorMusical implements musicas {

    @Override
    public void tocar(String musica) {
        System.out.println("Tocando música: " + musica);
    }

    @Override
    public void pausar() {
        System.out.println("Pausando música");
    }

    @Override
    public void selecionarMusica(String musica) {

        tocar(musica);
    }

}