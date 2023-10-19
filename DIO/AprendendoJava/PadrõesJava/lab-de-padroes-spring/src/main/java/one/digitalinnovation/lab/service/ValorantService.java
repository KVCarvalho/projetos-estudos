package one.digitalinnovation.lab.service;

import org.springframework.cloud.openfeign.FeignClient;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;

import one.digitalinnovation.lab.model.Agente;

@FeignClient(name = "valorant", url = "https://dash.valorant-api.com/endpoints/agents")
public interface ValorantService {
    @GetMapping("/{agentUuid}")
    Agente consultarAgente(@PathVariable("agentUuid") String agentUuid);
}
