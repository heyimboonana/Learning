let currentOperation = '';
let x = '';
let y = '';
let result = '';

function appendNumber(num){
    if (result == ''){
        if (currentOperation == ''){
            document.getElementById('display').value += num;
            x+=num
        }
        else{
            document.getElementById('display').value += num;
            y+=num
        }
    } 
}
function appendOperation(operator){
    if (document.getElementById('display').value == ''){
        return;
    }
    else if (currentOperation == ''){
        document.getElementById('display').value += operator
        currentOperation = operator;
    }
    else if(operator == "="){
        if (x == '' || y == '' ){
            return;
        }
        else{
            calculate();
        }
    }
}
function calculate(){
    if (currentOperation == '+'){
        result = parseInt(x) + parseInt(y);
        document.getElementById('display').value = result;
    }
}