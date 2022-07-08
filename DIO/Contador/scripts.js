let currentNumberWrapper = document.getElementById("currentNumber");
let currentNumber = 0;
let add = document.getElementsByName("adicionar")[0];
let less = document.getElementsByName("subtrair")[0];
function increment() {
    currentNumber++;
    currentNumberWrapper.innerHTML = currentNumber;
    negative()
}
function decrement() {
    currentNumber--;
    currentNumberWrapper.innerHTML = currentNumber;
    negative()
}
function zero() {
    currentNumber = 0;
    currentNumberWrapper.innerHTML = currentNumber;
    negative()
}
function negative() {
    if (currentNumber<0) {
        currentNumberWrapper.style.color = "red";
        if (currentNumber == -10) {
            less.style.display = "none"
        } else{
            less.style.display = "block"
        }
    } else{
            currentNumberWrapper.style.color = "black"
            if (currentNumber == 10) {
            add.style.display = "none"         
            } else{
                add.style.display = "block"
            }
    }
}
/*function increment10() {
    currentNumber = currentNumber + 10;
    currentNumberWrapper.innerHTML = currentNumber;
    negative()}
function decrement10() {
    currentNumber = currentNumber - 10;
    currentNumberWrapper.innerHTML = currentNumber;
    negative()
}*/
