package one.digitalinnovation.lab.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import one.digitalinnovation.lab.model.Agente;
import one.digitalinnovation.lab.service.AgenteService;

@RestController
@RequestMapping("agentes")
public class AgenteRestController {
    @Autowired
    private AgenteService agenteService;

    @GetMapping
    public ResponseEntity<Iterable<Agente>> buscarTodos() { // Iterable pois basicamente retornará uma lista
        return ResponseEntity.ok(agenteService.buscarTodos());
    }

    @GetMapping("/{id}")
    public ResponseEntity<Agente> buscarPorId(@PathVariable Long id) {
        return ResponseEntity.ok(agenteService.buscarId(id));
    }

    @PostMapping
    public ResponseEntity<Agente> inserir(@RequestBody Agente agente) {
        agenteService.inserir(agente);
        return ResponseEntity.ok(agente);
    }

    @PutMapping("/{id}")
    public ResponseEntity<Agente> atualizar(@PathVariable Long id, @RequestBody Agente agente) {
        agenteService.atualizar(id, agente);
        return ResponseEntity.ok(agente);
    }

    @DeleteMapping("/{id}")
    public ResponseEntity<Void> deletar(@PathVariable Long id) {
        agenteService.deletar(id);
        return ResponseEntity.ok().build();
    }
}
