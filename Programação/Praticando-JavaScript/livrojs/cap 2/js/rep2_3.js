function SuperMecado(){
    var nome = document.getElementById("produto");
    var valor = document.getElementById("preco");
    var promocao = valor.value - (valor.value*0.5)
    var total = (2*valor.value) + promocao
    document.getElementById("resposta1").innerHTML = nome.value + " Promoção: Leve 3 por R$" + total.toFixed(2);
    document.getElementById("resposta2").innerHTML = " e na promoção a terceira unidade custa R$" + promocao.toFixed(2);
}
var mostrar = document.getElementById("calcular");
mostrar.onclick = SuperMecado;