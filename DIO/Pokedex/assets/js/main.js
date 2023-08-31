const url0 = "https://pokeapi.co/api/v2/pokemon/392";
const url1 = "https://pokeapi.co/api/v2/version-group/8/"

const cardcore = document.getElementById("upcard")
const pokestatusjs = document.getElementById("pokestatus")


fetch(url0)
    .then((response) => response.json())
    .then((jsonBody) => {
        pokestatusjs.innerHTML += convertStatusHtml(jsonBody);
        cardcore.innerHTML += convertPokemonHtml(jsonBody);
    })
    .catch((error) => console.log(error))

    fetch(url1)
    .then((response) => response.json())
    .then((jsonBody0) => pokestatusjs.innerHTML += convertStatusHtml0(jsonBody0))

