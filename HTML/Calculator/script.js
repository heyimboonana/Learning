const display = document.getElementById('display');
let currentOperation = '';
let previousInput = '';
let currentInput = '';

function appendNumber(number){
    currentInput += number;
    document.getElementById('display').value = `${previousInput} ${currentOperation} ${currentInput}`;
}
function appendOperation(operator){
    if (currentOperation === ''){
        return;
    }
    if (currentOperation !== ''){
        display.value += operator;
    }
    currentOperation = operator;
}
