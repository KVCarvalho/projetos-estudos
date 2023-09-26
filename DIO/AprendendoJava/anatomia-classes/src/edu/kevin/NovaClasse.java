package edu.kevin;
public class NovaClasse {
    public static void main(String[] args) {
        System.out.println("Bom dia");
        String primeiro = "Kevin";
        String segundo = "Letal";
        System.out.println(nomeCompleto(primeiro, segundo));
    }

    public static String nomeCompleto(String p, String s) {
        return p.concat(" ").concat(s);
    }
}
