function restaurante(){
    var quilo = document.getElementById("quilo").value
    var gramas = document.getElementById("gramas").value
    var preco = quilo * (gramas / 1000)
    document.getElementById("resposta").innerHTML = "Valor Total: R$ " + preco.toFixed(2)
}
var mostrar = document.getElementById("mostrar")
mostrar.addEventListener("click", restaurante)