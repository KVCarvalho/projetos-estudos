const url = 'https://valorant-api.com/v1/agents';
import { Agent } from "./card.js";
/*
function convertHTML(agentjson){

    const agente = new Agent(agentjson.displayName, agentjson.fullPortrait, agentjson.role.displayName, agentjson.role.displayIcon);
    agente.name = agentjson.displayName;
    agente.imagem = agentjson.fullPortrait;
    agente.role = agentjson.role.displayName;
    agente.roleicon = agentjson.role.displayIcon;
    console.log(agente);
    return agente;
}*/
fetch(url)
    .then((response) => response.json())
    .then((jsonBody) => jsonBody.data)
    .then((listaAgents) => listaAgents.map(new Agent(listaAgents.displayName, listaAgents.fullPortrait, listaAgents.role.displayName, listaAgents.role.displayIcon)))
    .then((agentes) => Promise.all(agentes));
