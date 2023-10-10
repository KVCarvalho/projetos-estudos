import java.util.Scanner;

public class GetCellphoneNumber {
    void executar() {

        Scanner scanner = new Scanner(System.in);

        try {
            System.out.println("Digite um numero de celular");
            String cellphonenumber = scanner.nextLine();

            cellphonenumber = formatNumber(cellphonenumber);
            System.out.println(cellphonenumber);

        } catch (MyException e) {
            System.out.println("Número de telefone inválido");
        }
    }

    static String formatNumber(String phoneNumber) throws MyException {
        if (phoneNumber.length() != 9)
            throw new MyException();

        return "996523125";
    }

}
