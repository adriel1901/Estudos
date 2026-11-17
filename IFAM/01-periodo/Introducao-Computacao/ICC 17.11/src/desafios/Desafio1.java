package desafios;

public class Desafio1 {
    public static void main(String[] args) {
        double[] notas = {5.5, 8.0, 4.2, 9.5, 7.0, 6.8};

        double maior = notas[0];
        double menor = notas[0];

        for (int i = 1; i < notas.length; i++) {
            if (notas[i] > maior) {
                maior = notas[i];
            }
            if (notas[i] < menor) {
                menor = notas[i];
            }
        }

        System.out.println("Maior nota: " + maior);
        System.out.println("Menor nota: " + menor);
    }
}
