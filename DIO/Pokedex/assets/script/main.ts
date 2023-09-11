import { convertPokemonHtml, convertStatusHtml, convertStatusHtml0 } from "./pokemonchara";

const url0 = "https://pokeapi.co/api/v2/pokemon/392";
const url1 = "https://pokeapi.co/api/v2/version-group/8/"

const cardcore = document.getElementById("upcard")
const pokestatusjs = document.getElementById("pokestatus")


fetch(url0)
    .then((response) => response.json())
    .then((jsonBody) => {
        const nulo = convertStatusHtml(jsonBody);

        if (nulo !== null) {
            pokestatusjs!.innerHTML += nulo;
        }  // Erro 204 para resposta ser nulo

        const nulo0 = convertPokemonHtml(jsonBody)
        if(nulo0 !== null) {
            cardcore!.innerHTML += nulo0;
        }
    })
    .catch((error) => console.log(error))

    fetch(url1)
    .then((response) => response.json())
    .then((jsonBody0) => pokestatusjs!.innerHTML += convertStatusHtml0(jsonBody0))