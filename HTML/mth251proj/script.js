// Handle motion checkbox to stop/start animations
const motionCheckbox = document.getElementById("motionCheckbox");
const bodyElement = document.body;

motionCheckbox.addEventListener("change", function() {
    if (this.checked) {
        bodyElement.classList.remove("stop-animations");
    } else {
        bodyElement.classList.add("stop-animations");
    }
});

const expression = "x - Math.sin(x)";

function plotGraph(length) {
    let xValues = [];
    let yValues = [];

    for (let x = -length; x <= length; x += 0.1) {
        xValues.push(x);
        yValues.push(eval(expression));
    }
    
    const data = [{
        x: xValues,
        y: yValues,
        mode: "lines"
    }];

    const layout = {
        title: "Graph of y = x - sin(x)"
    };
    
    Plotly.newPlot("myPlot", data, layout);
}

// Initial plot with default value
plotGraph(10);

// Update graph when range input changes
document.getElementById('graphInput').addEventListener('change', function() {
    plotGraph(this.value);
})

if (document.getElementById("firstDerivativeTest") !== ''){
    const myinput = document.getElementById("firstDerivativeTest");
    myinput.addEventListener("keypress", function(event) {
        if (event.key === "Enter") {
            const x = parseFloat(this.value);
            let result = Math.cos(x * Math.PI);
            result = result - 1;
            console.log(result);
            const firstDerResult = document.getElementById('firstDerResult');
            firstDerResult.textContent = "f ' ("+x+") = "+result;

            
            if(result === 0){
                criticalPointValue.textContent = "Since the derivative at x= "+x+" is 0, there IS a critical point";
                resultImg.src = "assets/checkmark.png";
                resultGraph.src = "assets/yes0.png"
            }
            else if(result !== 0){
                criticalPointValue.textContent = "Since the derivative at x= "+x+" is NOT 0, there is NO critical point";
                resultImg.src = "assets/Red_x.png";
                resultGraph.src = "assets/not0.png"
            }
        }
    })
}

;