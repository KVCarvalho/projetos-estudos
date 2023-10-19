import veiculos.Veiculo;

public class Condutor {

    private Veiculo comportamento;

    public void setComportamento(Veiculo comportamento) {
        this.comportamento = comportamento;
    }

    public void mover() {
        comportamento.mover();
    }
}
