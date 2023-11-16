class Heroi {
    constructor(nome, idade, tipo){
        if (tipo == "guerreiro" || tipo == "mago" || tipo == "monge" || tipo == "ninja") {
            this.tipo = tipo;
            this.nome = nome;
            this.idade = idade;

            switch (tipo) {
                case "guerreiro":
                    this.ataque = "espada";
                    break;
                case "mago":
                    this.ataque = "magia";
                    break;
                case "monge":
                    this.ataque = "artes marciais";
                    break;
                case "ninja":
                    this.ataque = "shuriken";
                    break;    
                default:
                    break;
            }
        } else {
            console.log("Classe não existente!");
        }     
    }
    
    atacar(){
        console.log("O " + this.tipo + " atacou usando " + this.ataque);
    }
}



const heroi = new Heroi("letal", 20, "ninja");

console.log(heroi);
heroi.atacar();