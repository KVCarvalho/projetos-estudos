package me.dio.domain.model;

import jakarta.persistence.Entity;

@Entity(name = "tb_fii")
public class FundoImobiliario extends InvestimentoBase {
    private Double pvp;

    /**
     * @return Double return the pvp
     */
    public Double getPvp() {
        return pvp;
    }

    /**
     * @param pvp the pvp to set
     */
    public void setPvp(Double pvp) {
        this.pvp = pvp;
    }

}
