function horaFranca() {
    const horaInput = document.getElementById("hora");
    const fusoHora = 5;
    const valorHora = horaInput.value;

    if (!valorHora) {
        document.getElementById("resposta").innerHTML = "Informe uma hora válida.";
        return;
    }

    const [hora, minuto] = valorHora.split(":").map(Number);
    const data = new Date();
    data.setHours(hora, minuto, 0, 0);

    data.setHours(data.getHours() + fusoHora);

    const formatador = new Intl.DateTimeFormat('pt-BR', {
        hour: '2-digit',
        minute: '2-digit',
        hour12: false
    });
    const horaFormatada = formatador.format(data);
    document.getElementById("resposta").innerHTML = horaFormatada;
}

const botao = document.getElementById("botaoHora");
botao.addEventListener("click", horaFranca);