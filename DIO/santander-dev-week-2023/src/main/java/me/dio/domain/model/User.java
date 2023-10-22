package me.dio.domain.model;

import java.util.List;

import jakarta.persistence.CascadeType;
import jakarta.persistence.Entity;
import jakarta.persistence.FetchType;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.OneToMany;

@Entity(name = "tb_user")
public class User {
    @Id
    @GeneratedValue(strategy = GenerationType.AUTO)
    private Long id;
    private String nome;

    @OneToMany(cascade = CascadeType.ALL, fetch = FetchType.EAGER)
    private List<FundoImobiliario> fundoImobiliario;
    @OneToMany(cascade = CascadeType.ALL, fetch = FetchType.EAGER)
    private List<Acoes> acoes;

    /**
     * @return Long return the id
     */
    public Long getId() {
        return id;
    }

    /**
     * @param id the id to set
     */
    public void setId(Long id) {
        this.id = id;
    }

    /**
     * @return String return the nome
     */
    public String getNome() {
        return nome;
    }

    /**
     * @param nome the nome to set
     */
    public void setNome(String nome) {
        this.nome = nome;
    }

    /**
     * @return List<FundoImobiliario> return the fundoImobiliario
     */
    public List<FundoImobiliario> getFundoImobiliario() {
        return fundoImobiliario;
    }

    /**
     * @param fundoImobiliario the fundoImobiliario to set
     */
    public void setFundoImobiliario(List<FundoImobiliario> fundoImobiliario) {
        this.fundoImobiliario = fundoImobiliario;
    }

    /**
     * @return List<Acoes> return the acoes
     */
    public List<Acoes> getAcoes() {
        return acoes;
    }

    /**
     * @param acoes the acoes to set
     */
    public void setAcoes(List<Acoes> acoes) {
        this.acoes = acoes;
    }

}
