public class TiposVariaveis {
    short ncurto = 0; // Diferença dada pela quantidade de memória
    int numero = 22224;// alocada para cada variável
    long nlongo = 1545401542;
    float decimal = 2.56F; // Utilizar letra F no final para indicar ser um float
    double dobrodecimais = 2.56;

    final int CONSTANTE = 1; // Definição de uma constante

    void conversor() {
        decimal = (float) dobrodecimais; // Quando tiver que converter uma variável mais precisa para menos precisa,
                                         // deve deixar explicíto a conversão.
        numero = ncurto; // O contrário não é necessário
    }

}
