    let xValues = [];
    let yValues = [];
    let length = 10;

    const expression = "x - Math.sin(x)";
    let xva = document.getElementById('graphInput').value
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