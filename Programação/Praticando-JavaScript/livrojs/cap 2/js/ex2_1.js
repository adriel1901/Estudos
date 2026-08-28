function mostrarOla(){
    var nome = document.getElementById("nome").value
    document.getElementById("resposta").innerHTML = "Olá " + nome + "!"
}
var mostrar = document.getElementById("mostrar")
mostrar.addEventListener("click", mostrarOla)