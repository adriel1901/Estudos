function Filme(){
    var titulo = document.getElementById("nomeFilme").value
    document.getElementById("resposta1").innerHTML = "O filme é " + titulo
    var duracao = document.getElementById("duracaoMin").value
    var horas = Math.floor(duracao / 60)
    var minutos = duracao % 60
    document.getElementById("resposta2").innerHTML = "Duração: " + horas + " horas e " + minutos + " minutos"
}
var mostrar = document.getElementById("mostrar")
mostrar.addEventListener("click", Filme)