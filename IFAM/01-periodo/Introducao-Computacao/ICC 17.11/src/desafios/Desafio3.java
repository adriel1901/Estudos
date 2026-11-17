package desafios;

public class Desafio3 {
    public static void main(String[] args) {
        double[] notas = {7.2, 8.5, 9.0, 6.4};

        for (int i = notas.length - 1; i >= 0; i--) {
            System.out.println("Nota: " + notas[i]);
        }
    }
}
