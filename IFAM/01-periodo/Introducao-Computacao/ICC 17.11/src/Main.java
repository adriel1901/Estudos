import fixacao.Fixacao1;
import fixacao.Fixacao2;
import fixacao.Fixacao3;
import desafios.Desafio1;
import desafios.Desafio2;
import desafios.Desafio3;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean executando = true;

        while (executando) {
            System.out.println("--- MENU ---");
            System.out.println("1 - Fixação 1");
            System.out.println("2 - Fixação 2");
            System.out.println("3 - Fixação 3");
            System.out.println("4 - Desafio 1");
            System.out.println("5 - Desafio 2");
            System.out.println("6 - Desafio 3");
            System.out.println("0 - Sair");
            System.out.print("Escolha uma opção: ");

            String opcao = scanner.nextLine().trim();
            System.out.println();

            switch (opcao) {
                case "1":
                    Fixacao1.main(args);
                    break;
                case "2":
                    Fixacao2.main(args);
                    break;
                case "3":
                    Fixacao3.main(args);
                    break;
                case "4":
                    Desafio1.main(args);
                    break;
                case "5":
                    Desafio2.main(args);
                    break;
                case "6":
                    Desafio3.main(args);
                    break;
                case "0":
                    executando = false;
                    break;
                default:
                    System.out.println("Opção inválida.");
                    break;
            }
            System.out.println();
        }

        scanner.close();
    }
}
