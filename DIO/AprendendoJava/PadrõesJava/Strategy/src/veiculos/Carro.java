package veiculos;

public class Carro implements Veiculo {

    @Override
    public void mover() {
        System.out.println("Dirige um carro, que é diferente de uma moto.");
    }
}
