import java.util.InputMismatchException;
import java.util.Scanner;

public class TryCatch {

    void getInfos() {
        try {
            Scanner scanner = new Scanner(System.in);

            System.out.println("Digite respectivamente o nickname, posição e nota");

            String nickname = scanner.nextLine();
            int position = scanner.nextInt();
            float note = scanner.nextFloat();

            System.out.println("Nickname: " + nickname + " Posição: " + position + " nota: " + note);
        } catch (InputMismatchException e) {
            System.out.println("Entradas inválidas!");
        }
    }
}
