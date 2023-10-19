import veiculos.Carro;
import veiculos.Moto;

public class Strategy {
    public static void main(String[] args) throws Exception {
        // Nesse caso temos um forte uso de polimorfismo
        // Verifica-se que podemos mudar a maneira que um objeto se comporta com base em
        // uma interface e outras classes
        // No exemplo, temos que o objeto condutor receberá um objeto que é "contratado"
        // por veículo
        // Ou seja, somente receberá veículos
        // E a depender do veículo tem maneiras diferentes de conduzir que pode ser
        // mudado ao decorrer do programa

        Condutor condutor = new Condutor();
        Carro carro = new Carro();
        Moto moto = new Moto();

        condutor.setComportamento(carro);
        condutor.mover();
        condutor.setComportamento(moto);
        condutor.mover();
        condutor.setComportamento(carro);
        condutor.mover();
    }
}
