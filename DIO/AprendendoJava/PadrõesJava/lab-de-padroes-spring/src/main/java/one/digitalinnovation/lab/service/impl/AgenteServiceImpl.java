package one.digitalinnovation.lab.service.impl;

import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import one.digitalinnovation.lab.model.Agente;
import one.digitalinnovation.lab.model.AgenteRepository;
import one.digitalinnovation.lab.service.AgenteService;
/*
import one.digitalinnovation.lab.model.RoleRepository;
import one.digitalinnovation.lab.service.ValorantService;
*/

@Service
public class AgenteServiceImpl implements AgenteService {
    @Autowired
    private AgenteRepository agenteRepository;

    /*
     * @Autowired
     * private RoleRepository roleRepository;
     * 
     * @Autowired
     * private ValorantService valorantService;
     */

    @Override
    public Iterable<Agente> buscarTodos() {
        return agenteRepository.findAll();
    }

    @Override
    public Agente buscarId(Long id) {
        Optional<Agente> agente = agenteRepository.findById(id);
        return agente.get();
    }

    @Override
    public void inserir(Agente agente) {
        salvarAgente(agente);
    }

    @Override
    public void atualizar(Long id, Agente agente) {
        Optional<Agente> agenteBd = agenteRepository.findById(id);
        if (agenteBd.isPresent()) {
            salvarAgente(agente);
        }
    }

    @Override
    public void deletar(Long id) {
        agenteRepository.deleteById(id);
    }

    private void salvarAgente(Agente agente) {
    }
}
