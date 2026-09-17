function farmacia(){
    var medicamento = document.getElementById("medicamento").value
    var preco = document.getElementById("preco").value
    var promocao = Math.floor(preco)
    document.getElementById("resposta1").innerHTML = "Promoção de " + medicamento
    document.getElementById("resposta2").innerHTML = "Preço promocional: R$ " + promocao.toFixed(2)
}
var botao = document.getElementById("mostrar")
botao.addEventListener("click", farmacia)