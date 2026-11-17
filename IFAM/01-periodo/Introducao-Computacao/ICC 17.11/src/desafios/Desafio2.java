package desafios;

import java.util.Scanner;

public class Desafio2 {
    public static void main(String[] args) {
        String[] alunos = {"Ana Silva", "Bruno Sousa", "Carla Dias", "Daniel Oliveira", "Eduardo Santos"};

        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite o nome do aluno: ");
        String nomeProcurado = scanner.nextLine().trim();

        boolean encontrado = false;
        for (String aluno : alunos) {
            if (aluno.equalsIgnoreCase(nomeProcurado)) {
                encontrado = true;
                break;
            }
        }

        if (encontrado) {
            System.out.println("Aluno(a) matriculado(a)!");
        } else {
            System.out.println("Aluno(a) não encontrado(a) no sistema.");
        }

        scanner.close();
    }
}
