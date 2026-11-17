package fixacao;

public class Fixacao2 {
    public static void main(String[] args) {
        double[] notasTurma = {7.5, 8.0, 6.5, 9.0, 10.0};
        double soma = 0;

        for (int i = 0; i < notasTurma.length; i++) {
            System.out.println("Nota " + (i + 1) + ": " + notasTurma[i]);
            soma += notasTurma[i];
        }

        double media = soma / notasTurma.length;

        System.out.println("Soma total: " + soma);
        System.out.println("Média da turma: " + media);
    }
}
