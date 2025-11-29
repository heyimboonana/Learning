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
});