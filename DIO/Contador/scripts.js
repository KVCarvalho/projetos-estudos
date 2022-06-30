let currentNumberWrapper = document.getElementById("currentNumber");
let currentNumber = 0;
//let bd = document.getElementsById("currentNum")
function increment() {
    currentNumber++;
    currentNumberWrapper.innerHTML = currentNumber;
}
function decrement() {
    currentNumber--;
    currentNumberWrapper.innerHTML = currentNumber;
}
function increment10() {
    currentNumber = currentNumber + 10;
    currentNumberWrapper.innerHTML = currentNumber;
}
function decrement10() {
    currentNumber = currentNumber - 10;
    currentNumberWrapper.innerHTML = currentNumber;
}
function zero() {
    currentNumber = 0;
    currentNumberWrapper.innerHTML = currentNumber;
}

}
