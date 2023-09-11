export function convertPokemonHtml(pokemonhtml) {
    console.log(pokemonhtml);
    return `<div style="display: flex; justify-content: space-between;">
                <div id="pokecore">
                    <span id="name" style="font-weight: 500; text-transform: capitalize;">${pokemonhtml.name}</span>
                    <div style="display:flex; padding: 5px 0px;">
                        <span class="type">${pokemonhtml.types[0].type.name}</span>
                        <span class="type">${pokemonhtml.types[1].type.name}</span>
                    </div> 
                    
                </div>  
                <span id="pokenumber" style="width: 50px; padding-top: 10px; font-size: 15px;">#${pokemonhtml.id}</span>
            </div>
            <img id="pokemonimg" src="${pokemonhtml.sprites.other.dream_world.front_default}" alt="${pokemonhtml.name}">
            `;
}
export function convertStatusHtml(pokemonstatus) {
    return `<table>
                    <tr>
                        <td>Base EXP</td>
                        <td class="td1">${pokemonstatus.base_experience}</td>
                    </tr>
                    <tr>
                        <td>Height</td>
                        <td class="td1">${pokemonstatus.height}</td>
                    </tr>
                    <tr>
                        <td>Weight</td>
                        <td class="td1">${pokemonstatus.weight}</td>
                    </tr>
                    <tr>
                        <td>Abilities</td>
                        <td class="td1">${pokemonstatus.abilities[0].ability.name}, ${pokemonstatus.abilities[1].ability.name}</td>
                    </tr>
                </table>
                `;
}
export function convertStatusHtml0(pokemonstatusgame) {
    //console.log(pokemonstatusgame);
    return `<table>
                <caption>Games</caption>
                <tr>
                <td>Generation</td>
                <td class="td1" style="text-transform: uppercase">${pokemonstatusgame.generation.name}</td>
                    
                </tr>
                <tr>
                    <td>First  Appearance</td>
                    <td class="td1">${pokemonstatusgame.name}</td>
                </tr>
                <tr>
                    <td>Region</td>
                    <td class="td1">${pokemonstatusgame.regions[0].name}</td>
                </tr>
            </table>
            `;
}
