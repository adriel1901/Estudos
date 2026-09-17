function raizQuadrada() {
    var input = document.getElementById("numero").value
    var n = Number(input)

    if (n === "" || n === isNaN || n === 0) {
        document.getElementById("resposta").innerHTML = "Insira um número válido"
        return
    }

    var raiz = Math.sqrt(n)


    //Nessa condição pode-se usar o método floor()
    if(Math.round(raiz)!=raiz){
        document.getElementById("resposta").innerHTML="Não é um quadrado perfeito"
        return
    }else{
        document.getElementById("resposta").innerHTML=raiz
        return
    }
}
var btn = document.getElementById("mostrarBtn")
btn.addEventListener("click", raizQuadrada)