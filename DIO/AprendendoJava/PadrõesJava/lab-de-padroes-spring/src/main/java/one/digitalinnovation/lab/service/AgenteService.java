package one.digitalinnovation.lab.service;

import one.digitalinnovation.lab.model.Agente;

public interface AgenteService {
    Iterable<Agente> buscarTodos();

    Agente buscarId(Long id);

    void inserir(Agente agente);

    void atualizar(Long id, Agente agente);

    void deletar(Long id);

}
