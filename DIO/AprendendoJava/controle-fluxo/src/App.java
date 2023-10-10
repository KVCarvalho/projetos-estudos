import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        boolean fim = false;

        do {
            Scanner scanner = new Scanner(System.in);
            WhileDo whileDo = new WhileDo();
            Fors fors = new Fors();
            IfElseBreakCont ifElseBreakCont = new IfElseBreakCont();
            SwitchConversa switchConversa = new SwitchConversa();
            TryCatch tryCatch = new TryCatch();
            GetCellphoneNumber getCellphoneNumber = new GetCellphoneNumber();

            System.out.println("Qual controle de fluxo deseja ver?");
            System.out.println("0 - While/DoWhile");
            System.out.println("1 - For/For + Array");
            System.out.println("2 - IfElse/ContinueBreak");
            System.out.println("3 - Switch");
            System.out.println("4 - Tratamento de exceções");
            System.out.println("5 - Tratamento de exceções especiais");

            int x = scanner.nextInt();

            switch (x) {
                case 0:
                    whileDo.executar();
                    break;

                case 1:
                    fors.executar();
                    break;

                case 2:
                    ifElseBreakCont.executar();
                    break;

                case 3:
                    switchConversa.executar();
                    break;

                case 4:
                    tryCatch.getInfos();
                    break;

                case 5:
                    getCellphoneNumber.executar();
                    break;

                default:
                    break;
            }
            System.out.println("Deseja repetir?");
            System.out.println("0 - Não 1 - Sim");

            int a = scanner.nextInt();

            fim = a == 1 ? false : true;

        } while (fim == false);

    }
}
