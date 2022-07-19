document.getElementsByName("listar")[0].addEventListener("click", principal);
let lis = [];
let list = document.getElementById("alista");
function principal() {   
    var a = document.getElementsByName("entrada")[0].value;
    var item = document.createElement("li")
    var texto = document.createTextNode(a)
    item.appendChild(texto)
    list.insertBefore(item, list.children[0]);
}