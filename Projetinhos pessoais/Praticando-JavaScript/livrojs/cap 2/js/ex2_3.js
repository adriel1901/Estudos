function Carro() {
    var veiculo = document.getElementById("veiculo").value
    var preco = document.getElementById("preco").value
    var entrada = preco * 0.5
    var parcelas = (preco - entrada) / 12
    document.getElementById("resposta1").innerHTML = "Promoção: " + veiculo
    document.getElementById("resposta2").innerHTML = "Entrada de R$: " + entrada.toFixed(2)
    document.getElementById("resposta3").innerHTML = "+ 12 Parcelas de R$: " + parcelas.toFixed(2)
}
var mostrar = document.getElementById("mostrar")
mostrar.addEventListener("click", Carro)