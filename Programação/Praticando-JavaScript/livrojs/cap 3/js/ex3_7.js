function Verificar() {
    document.getElementById("resposta").innerHTML = " "
    var n = document.getElementById("numero").value
    Number(n)

    if(n == " " || isNaN(n)){
        document.getElementById("resposta").innerHTML = "Insira um valor válido"
        return
    }

    if (n % 2 == 0)
        document.getElementById("resposta").innerHTML = "O número é par"
    else
        document.getElementById("resposta").innerHTML = "O número não ímpar"
}
var btn = document.getElementById("mostrarBtn")
btn.addEventListener("click", Verificar)