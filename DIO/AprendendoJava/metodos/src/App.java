import java.util.Scanner;

public class App {
    public static void main(String[] args) {
        Scanner sc0 = new Scanner(System.in);
        SmartTv smartTv = new SmartTv();

        System.out.println(smartTv.ligada);
        System.out.println(smartTv.volume);
        System.out.println(smartTv.canal);
        System.out.println("------------------");
        smartTv.ligarDesligar();
        smartTv.mudarCanal(sc0.nextInt());
        smartTv.aumentarCanal();
        smartTv.diminuirCanal();
        smartTv.aumentarVolume();
        smartTv.diminuirVolume();

    }
}
