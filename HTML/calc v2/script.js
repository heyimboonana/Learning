let currentOperation = '';
let x = '';
let y = '';
let result = '';
let prevResult = '';
let decimal = false;

//Add Numbers to display and to variables depending if operater has been pressed
function appendNumber(num){
    if (result == ''){
        if (num == '.'){
            decimal = true;
        }
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

//opperater function
function appendOperation(operator){
    if (result !== ''){
        x = result;
        currentOperation = '';
        y = '';
        result = ''
    }
    

    //if DEL is pressed, remove last character from the display and update variable
    if (operator === 'DEL'){
        const disp = document.getElementById('display').value;
        document.getElementById('display').value = disp.slice(0,-1);
        if(y !== ''){
            y = y.slice(0,-1);
        }
        else if(currentOperation !== ''){
            currentOperation = ''
        }
        else if(x !== ''){
            x = x.slice(0,-1);
        }
    }

    //if C is pressed, Clear display and make all variables blank
    if (operator == 'C'){
        document.getElementById('display').value = ''
        currentOperation = '';
        x = '';
        y = '';
        result = '';
    }


    //if NEGATIVE is pressed, it will make it negative if positive and vice versa
    if (operator == 'NEGATIVE'){
        if(y !== ''){
            y = -y;
        }
        else if(x !== ''){
            x = -x;
        }
        document.getElementById('display').value = x + currentOperation + y;
    }

    //if display is blank and operator is pressed, return and not output anything
    else if (document.getElementById('display').value == ''){
        return;
    }

    //update operator if numbers have been pressed 
    else if (currentOperation == '' && operator !== 'DEL' && currentOperation !== '='){
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
    if (decimal = true){
        x = parseFloat(x);
        y = parseFloat(y);
    }
    else{
        x = parseInt(x);
        y = parseInt(y)
    }
    if (currentOperation == '+'){
        result = (x) + (y);
        document.getElementById('display').value = result;
    }
    if (currentOperation == '-'){
        result = (x) - (y);
        document.getElementById('display').value = result;
    }
    if (currentOperation == '*'){
        result = (x) * (y);
        document.getElementById('display').value = result;
    }
    if (currentOperation == '/'){
        result = (x) / (y);
        document.getElementById('display').value = result;
    }
}