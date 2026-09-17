function tabuada(){
    document.getElementById("resposta").innerHTML = " "
    var numero = Number(document.getElementById("numero").value)

    if(numero == 0 || isNaN(numero)){
        document.getElementById("resposta").innerHTML = "Inserir um número válido"
        return
    }

    var resposta = " "

    for(var i = 1; i<=10; i++){
        resposta= resposta + numero + " * " + i + " = " + numero*i + "\n"
    }

    document.getElementById("resposta"). innerHTML
}