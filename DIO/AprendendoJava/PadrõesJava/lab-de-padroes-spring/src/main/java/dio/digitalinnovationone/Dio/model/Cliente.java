package dio.digitalinnovationone.Dio.model;

import java.util.ArrayList;

import jakarta.persistence.Column;
import jakarta.persistence.Entity;
import jakarta.persistence.Id;
import jakarta.persistence.OneToMany;
import jakarta.persistence.OneToOne;

@Entity
public class Cliente {

	@Id
	@Column(unique = true)
	private Long cpf;
	private String nome;
	private boolean principal;

	@OneToOne // Relacionamento One-to-One com Endereco
	private Endereco endereco;

	@OneToMany(mappedBy = "cliente") // Relacionamento One-to-Many com EnderecoLiquido
	private ArrayList<EnderecoLiquido> listaEndereco = new ArrayList<EnderecoLiquido>();

	private String complemento;
	private int number;

	private int imovelPrincipalId;

	public Long getCpf() {
		return cpf;
	}

	public void setCpf(Long cpf) {
		this.cpf = cpf;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public boolean getPrincipal() {
		return principal;
	}

	public void setPrincipal(boolean principal) {
		this.principal = principal;
	}

	public int getImovelPrincipalId() {
		return imovelPrincipalId;
	}

	public void setImovelPrincipalId(boolean principal) {
		if (principal) {

		}
	}

	public void addImovelLista() {
		EnderecoLiquido EnderecoLiquido = new EnderecoLiquido();
		EnderecoLiquido.setEnderecoId(endereco.getId());
		EnderecoLiquido.setComplemento(this.complemento);
		EnderecoLiquido.setNumber(this.number);

		listaEndereco.add(EnderecoLiquido);
	}

	public void removeImovelLista() {
		listaEndereco.remove(listaEndereco.size() - 1);
	}

	public EnderecoLiquido getImovelLista(int i) {
		return listaEndereco.get(i);
	}

	public Endereco getEndereco() {
		return endereco;
	}

	public void setEndereco(Endereco endereco) {
		this.endereco = endereco;
	}

}
