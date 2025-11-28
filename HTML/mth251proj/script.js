    let xValues = [];
    let yValues = [];
    let length = 5;

    const expression = "x - Math.sin(x)";
    let xva = document.getElementById('graphInput').value
    for (let x = 0; x <= document.getElementById('graphInput').value; x += 0.1) {
        xValues.push(x);
        yValues.push(eval(expression)); // Using eval for demonstration, consider safer alternatives for user input
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

