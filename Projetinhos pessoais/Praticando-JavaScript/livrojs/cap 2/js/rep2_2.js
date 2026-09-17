function lanHouse(){
    var valor = document.getElementById("valor").value;
    var tempo = document.getElementById("tempo").value;
    var total = Math.floor((tempo / 15) * valor);
    document.getElementById("resposta").innerHTML = "Total a pagar: R$ " + total.toFixed(2);
}
var btn = document.getElementById("calcular");
btn.addEventListener("click", lanHouse);