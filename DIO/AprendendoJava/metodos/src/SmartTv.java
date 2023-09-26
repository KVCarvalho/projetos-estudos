public class SmartTv {
    boolean ligada = false;
    int volume = 25;
    int canal = 1;

    void ligarDesligar() {
        ligada = ligada == false ? true : false;
        System.out.println(ligada);
    }

    void aumentarVolume() {
        volume++;
        System.out.println(volume);
    }

    void diminuirVolume() {
        volume--;
        System.out.println(volume);
    }

    void aumentarCanal() {
        canal++;
        System.out.println(canal);
    }

    void diminuirCanal() {
        canal--;
        System.out.println(canal);
    }

    void mudarCanal(int canaldesejado) {
        canal = canaldesejado;
        System.out.println(canal);
    }
}
