function saque() {
    document.getElementById("resposta1").innerHTML = "";
    document.getElementById("resposta2").innerHTML = "";
    document.getElementById("resposta3").innerHTML = "";
    var resto = 0
    var n = document.getElementById("saque").value

    if (n % 10 !== 0) {
        document.getElementById("resposta1").innerHTML = "Valor Indisponível para o saque"
        return
    }

    if (n == "" || n == "0") {
        document.getElementById("resposta1").innerHTML = "Digite um valor válido para o saque"
        return
    }

    var notas100 = Math.floor(n / 100)
    resto = n % 100
    document.getElementById("resposta1").innerHTML = "Notas de R$100,00: " + notas100

    var notas50 = Math.floor(resto / 50)
    var resto = n % 50
    document.getElementById("resposta2").innerHTML = "Notas de R$50,00: " + notas50

    var notas10 = Math.floor(resto / 10)
    document.getElementById("resposta3").innerHTML = "Notas de R$10,00: " + notas10

}
var btn = document.getElementById("btnSaque")
btn.addEventListener("click", saque)