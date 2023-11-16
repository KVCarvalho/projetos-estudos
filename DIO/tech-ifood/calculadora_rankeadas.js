let derrotas = 449;
let vitorias = 500;
var nivel = "";

function calculoDePontos(vitorias, derrotas) {
    return vitorias - derrotas;
}

let saldoVitorias = calculoDePontos(vitorias, derrotas);

// Paradigma 1
let saldo = saldoVitorias;

while (saldo % 10 != 0) {
    saldo++;
}

saldo = saldo / 10;


if (saldo < 0) {
    saldo = 0
} else if (saldo > 10) {
    saldo = 11;
}

switch (saldo) {
    case 0:
    case 1:
        nivel = "ferro";
        break;
    case 2:
        nivel = "bronze";
        break;
    case 3:
    case 4:
    case 5:
        nivel = "prata";
        break;
    case 6:
    case 7:
    case 8:
        nivel = "ouro";
        break;
    case 9:
        nivel = "diamante";
        break;
    case 10:
        nivel = "lendário";
        break;
    case 11:
        nivel = "imortal";
        break
    default:
        nivel = "erro";
        break;
}

// Paradigma 2
if (saldoVitorias > 50) {
    if (saldoVitorias > 90) {
        if (saldoVitorias > 100) {
            nivel = "imortal";
        } else {
            nivel = "lendário";
        }
    } else {
        nivel = "diamante";
    }
} else if (saldoVitorias > 20) {
    nivel = "prata";
} else {
    if (saldoVitorias > 10) {
        nivel = "bronze";
    } else {
        nivel = "ferro";
    }
}

console.log("O Herói tem de saldo de " + saldoVitorias + " está no nível de " + nivel);
