"use strict";
let botaoAtualizar = document.getElementById('atualizar-saldo');
let botaoLimpar = document.getElementById('limpar-saldo');
let soma = document.getElementById('soma');
let campoSaldo = document.getElementById('campo-saldo');
if (campoSaldo !== null && botaoAtualizar !== null && botaoLimpar !== null) {
    campoSaldo.innerHTML = '0';
    function somarAoSaldo(soma) {
        if (campoSaldo !== null) {
            campoSaldo.innerHTML += soma;
            /* let x = Number (campoSaldo.innerHTML)
             x += Number(soma);
             campoSaldo.innerHTML = String(x);*/
        }
    }
    function limparSaldo() {
        if (campoSaldo !== null) {
            campoSaldo.innerHTML = '0';
        }
    }
    botaoAtualizar.addEventListener('click', function () {
        somarAoSaldo(soma.value);
    });
    botaoLimpar.addEventListener('click', function () {
        limparSaldo();
    });
}
