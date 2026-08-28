# Flashcards e Revisão Rápida — FACOMpetindo

> **Perguntas e Respostas para Revisão Ativa e Repetição Espaçada**  
> *Baseadas estritamente nas anotações do FACOMpetindo Pessoal.*

---

## ⚡ 1. Entrada e Saída em C++

Q: O que faz a instrução `ios::sync_with_stdio(false)`?  
A: Desativa a sincronização padrão entre os streams de C++ (`cin`/`cout`) e os streams de C (`stdio`), aumentando a velocidade de entrada e saída em C++.

Q: O que faz a instrução `cin.tie(nullptr)`?  
A: Remove a associação padrão entre `cin` e `cout`, evitando que o C++ faça um `flush` automático no `cout` antes de cada leitura no `cin`.

Q: Qual a diferença fundamental de desempenho entre `'\n'` e `endl`?  
A: `'\n'` apenas insere o caractere de quebra de linha no buffer de saída, enquanto `endl` insere a quebra e força a descarga imediata (`flush`) do buffer, sendo muito mais lento em laços repetitivos.

Q: O que é um buffer em C++?  
A: Uma região temporária de memória RAM utilizada para acumular dados antes de enviá-los em bloco para o dispositivo de saída ou recebê-los da entrada padrão.

Q: O que significa realizar um `flush`?  
A: Solicitar que todos os dados pendentes no buffer sejam enviados imediatamente para o seu destino final.

Q: Quando o uso explícito de `flush` (ou `endl`) é realmente necessário na programação competitiva?  
A: Em problemas do tipo **interativo**, onde o programa precisa enviar uma pergunta ao juiz eletrônico antes de poder ler a resposta.

Q: Por que o operador `cin >>` não lê uma frase inteira com espaços?  
A: Porque `cin >>` trabalha com tokens e interrompe a leitura no primeiro espaço em branco, tabulação ou quebra de linha.

Q: Como ler uma linha inteira contendo espaços em C++?  
A: Utilizando `getline(cin, texto);`.

Q: Por que devemos usar `cin.ignore()` antes de um `getline` que sucede um `cin >> n`?  
A: Porque `cin >> n` deixa o caractere de quebra de linha `\n` no buffer, que seria imediatamente consumido pelo `getline`, retornando uma string vazia.

Q: Como funciona o padrão `while (cin >> x)` para ler até o fim de arquivo (EOF)?  
A: A expressão `cin >> x` é avaliada como verdadeira enquanto houver dados válidos para leitura e torna-se falsa quando atinge o fim do arquivo (EOF) ou entra em falha.

---

## 📈 2. Tipos de Complexidade

Q: O que descreve a Notação Big O ($O$)?  
A: Descreve o comportamento assintótico da ordem de crescimento do tempo de execução de um algoritmo no pior caso, desconsiderando constantes e termos de menor ordem.

Q: O que caracteriza um algoritmo de complexidade $O(1)$ (tempo constante)?  
A: A quantidade de operações realizadas não depende do tamanho da entrada $n$.

Q: Por que uma função com um laço `for (int i=0; i<n; i++)` que possui `return array[0];` na primeira linha é $O(1)$ e não $O(n)$?  
A: Porque a função encerra a execução logo na primeira iteração ($i=0$), executando uma única operação independentemente de $n$.

Q: O que caracteriza a complexidade $O(n)$ (tempo linear)?  
A: O número de operações cresce proporcionalmente ao tamanho da entrada $n$. Exemplo: calcular o fatorial iterativo ou percorrer um vetor uma vez.

Q: Por que a busca binária possui complexidade $O(\log n)$?  
A: Porque a cada etapa o tamanho do espaço de busca é reduzido pela metade, exigindo no máximo $\approx \log_2 n$ comparações.

Q: Qual a condição essencial para que a busca binária funcione?  
A: Os dados devem estar previamente **ordenados** (ou possuir propriedade monotônica que permita descartar metade do espaço).

Q: Como surge a complexidade $O(n \log n)$ no Merge Sort?  
A: O vetor é dividido recursivamente em $\log n$ níveis e, em cada nível, a intercalação processa todos os $n$ elementos linearmente ($n \times \log n$).

Q: Qual a complexidade típica de dois laços aninhados que comparam todos os pares de um vetor de tamanho $n$?  
A: $O(n^2)$ (tempo quadrático) no pior caso.

Q: Por que o Fibonacci recursivo ingênuo `fib(n-1) + fib(n-2)` é ineficiente para $n \ge 40$?  
A: Porque possui complexidade exponencial $O(\phi^n) \le O(2^n)$, recalculando repetidamente as mesmas chamadas e gerando trilhões de operações.

Q: Qual a ordem de eficiência das classes de complexidade fundamentais (da mais rápida para a mais lenta)?  
A: $O(1) < O(\log n) < O(n) < O(n \log n) < O(n^2) < O(2^n)$.

---

## 🔀 3. Estruturas Condicionais em C++

Q: Qual a diferença entre `=` e `==` em C++?  
A: `=` é o operador de atribuição (guarda um valor na variável) e `==` é o operador de comparação de igualdade (retorna `true` se forem iguais).

Q: O que acontece se escrevermos `if (x = 5)` dentro de uma condição?  
A: O valor `5` é atribuído a `x` e a expressão inteira avalia como verdadeira (`true`), executando o bloco incondicionalmente.

Q: O que é a avaliação em curto-circuito (*short-circuit*) em C++?  
A: É a regra onde a avaliação de operadores lógicos (`&&` ou `||`) é interrompida assim que o resultado final for determinado pela primeira condição (ex.: se o primeiro operando de `&&` for falso, o segundo não é executado).

Q: Como funciona o operador ternário em C++?  
A: Sintaxe: `condicao ? valor_se_verdadeiro : valor_se_falso;`.

Q: Quais valores uma variável do tipo `bool` pode assumir?  
A: Apenas dois valores: `true` (verdadeiro / 1) ou `false` (falso / 0).
