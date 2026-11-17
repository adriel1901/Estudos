package fixacao;

public class Fixacao1 {
    public static void main(String[] args) {
        int[] acertos = new int[4];

        acertos[0] = 8;
        acertos[1] = 5;
        acertos[2] = 10;
        acertos[3] = 7;

        int total = acertos[0] + acertos[1] + acertos[2] + acertos[3];

        System.out.println("Total de acertos: " + total);
    }
}
