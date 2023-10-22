package me.dio.domain.model;

import jakarta.persistence.Entity;

@Entity(name = "tb_acoes")
public class Acoes extends InvestimentoBase {
    private double ppl;

    /**
     * @return double return the ppl
     */
    public double getPpl() {
        return ppl;
    }

    /**
     * @param ppl the ppl to set
     */
    public void setPpl(double ppl) {
        this.ppl = ppl;
    }

}
