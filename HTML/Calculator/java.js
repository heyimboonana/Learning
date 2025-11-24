function calculate(){
    const x = parseInt(document.getElementById("int1").value);
    const y = parseInt(document.getElementById("int2").value);
    let z = x + y;
    z = "Hello world"


    document.getElementById("demo").innerHTML = z;
}
function helloPrint(){
    // add image only once
    if (!document.getElementById("myImage")) {
        const imageContainer = document.getElementById("image-display-area");
        const newImage = document.createElement("img");
        newImage.id = "myImage";
        newImage.src = "https://i.programmerhumor.io/2025/08/972f2fdfbfdb40d50f356754ba8aa0f242f9ecf2ac1b8c9c1b6c064976373aeb.jpeg";
        // use CSS class for sizing and responsiveness
        newImage.classList.add("calc-image");
        newImage.alt = "Calculator result image";
        <!--newImage.loading = "lazy"-->;

        imageContainer.appendChild(newImage);
    }
}