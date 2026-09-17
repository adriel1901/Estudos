function pesoIdeal() {
    var nome = document.getElementById("nome").value;
    var masc = document.getElementById("masc").checked;
    var fem = document.getElementById("fem").checked;
    var alt = parseFloat(document.getElementById("altura").value).toFixed(2);

    if (nome === "" || (masc == false && fem == false)) {
        alert("Informe os campos nome e sexo corretamente!");
        document.getElementById("nome").focus();
        return;
    }

    if (alt === 0 || isNaN(alt)) {
        alert("Informe a altura corretamente!");
        document.getElementById("altura").focus();
        return;
    }
    if (masc) {
        var peso = 22 * Math.pow(alt, 2);
    } else {
        var peso = 21 * Math.pow(alt, 2);
    }

    document.getElementById("resposta").innerHTML = nome + ", seu peso ideal é: " + peso.toFixed(2) + " kg.";
}
var btn = document.getElementById("calcular");
btn.addEventListener("click", pesoIdeal);

function limpar() {
    document.getElementById("nome").value = "";
    document.getElementById("masc").checked = false;
    document.getElementById("fem").checked = false;
    document.getElementById("altura").value = "";
    document.getElementById("resposta").innerHTML = "";
    document.getElementById("nome").focus();
}
var btnLimpar = document.getElementById("limpar");
btnLimpar.addEventListener("click", limpar);