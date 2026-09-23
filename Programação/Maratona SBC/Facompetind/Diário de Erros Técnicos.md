# Diário de Erros Técnicos — FACOMpetindo

> **Registro de Diagnóstico, Lições Aprendidas e Prevenção de Falhas em C++**  
> *Baseado nas notas e códigos práticos do FACOMpetindo Pessoal.*

---

## 🧭 Estrutura do Diário

Cada entrada deste diário explica detalhadamente:
- **O que eu fiz:** Descrição do código implementado;
- **Por que estava errado:** O mecanismo técnico do erro;
- **Como perceber:** Sintomas, saídas estranhas ou vereditos do juiz;
- **Como corrigir:** A implementação correta;
- **Como evitar novamente:** A regra prática para o futuro.

---

## 📕 Catálogo de Erros Técnicos

---

### 1. Quebra de Linha Residual no Buffer (`cin >>` seguido de `getline`)

#### Erro que cometi
- **O que eu fiz:** Li um número com `cin >> n;` e logo em seguida chamei `getline(cin, texto);` para ler uma frase.
- **Por que estava errado:** O `cin >> n` consumiu apenas os caracteres numéricos e deixou o `\n` da quebra de linha pendente no buffer de entrada. O `getline` seguinte consumiu imediatamente esse `\n` residual e retornou uma string vazia `""`.
- **Como perceber:** O programa pula a leitura da primeira linha de texto ou a variável `texto` fica com tamanho zero (`texto.empty() == true`).
- **Como corrigir:** Limpar o buffer antes do `getline`:
  ```cpp
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ou cin.ignore();
  getline(cin, texto);
  ```
- **Como evitar novamente:** Regra mental: *"Ao alternar de `cin >>` para `getline`, use sempre `cin.ignore()` imediatamente antes"*.

---

### 2. Uso Excessivo de `endl` Causando Time Limit Exceeded (TLE)

#### Erro que cometi
- **O que eu fiz:** Imprimi resultados dentro de um laço com $10^6$ iterações usando `cout << i << endl;`.
- **Por que estava errado:** O `endl` não apenas insere uma quebra de linha, mas também executa um `flush` no buffer de saída a cada iteração. Fazer $10^6$ descargas forçadas no sistema operacional é extremamente lento.
- **Como perceber:** O algoritmo possui complexidade teórica aceitável (ex.: $O(n)$), mas recebe TLE no juiz online.
- **Como corrigir:** Substituir por `cout << i << '\n';`.
- **Como evitar novamente:** Regra prática: *"Em programação competitiva, use sempre `'\n'`, reservando `endl` exclusivamente para problemas interativos"*.

---

### 3. Condição Incorreta em Valor Sentinela (`||` em vez de `&&`)

#### Erro que cometi
- **O que eu fiz:** Em um problema cujo término era indicado pelo par `0 0`, escrevi:
  ```cpp
  if (atacantes == 0 || defensores == 0) break;
  ```
- **Por que estava errado:** A condição com `||` encerrou o laço quando **qualquer um** dos valores era zero, mesmo quando o outro ainda continha um caso de teste válido (ex.: `0 5`), deixando de processar partes da entrada e gerando Wrong Answer (WA).
- **Como perceber:** O programa encerrava a execução antes de processar todos os casos de teste do exemplo do enunciado.
- **Como corrigir:** Ajustar para a conjunção lógica estrita:
  ```cpp
  if (atacantes == 0 && defensores == 0) break;
  ```
- **Como evitar novamente:** Ler com máxima atenção as instruções de término de entrada: se o enunciado disser *"a entrada termina quando ambos forem 0"*, use `&&`.

---

### 4. Mistura de `cin`/`cout` com `scanf`/`printf` após `sync_with_stdio(false)`

#### Erro que cometi
- **O que eu fiz:** Adicionei `ios::sync_with_stdio(false);` no início do programa e usei `cin` para ler um vetor e `printf` para imprimir saídas formatadas.
- **Por que estava errado:** Desativar a sincronização desconecta os buffers do C++ e do C. As operações passam a ser executadas em buffers independentes e a saída final sai embaralhada ou incompleta.
- **Como perceber:** A saída no terminal aparece fora de ordem ou faltam dados no arquivo de saída.
- **Como corrigir:** Escolher uma única família de I/O por programa. Para C++ moderno, use exclusivamente `cin`/`cout` com Fast I/O.
- **Como evitar novamente:** Nunca misture `scanf`/`printf` com `cin`/`cout` no mesmo arquivo de código.

---

### 5. Supor que Todo Laço `for` é Automaticamente $O(n)$

#### Erro que cometi
- **O que eu fiz:** Analisei uma função que continha um laço `for (int i = 0; i < n; i++)` e classifiquei sua complexidade como $O(n)$, sem notar que a primeira linha do laço continha um `return array[0];`.
- **Por que estava errado:** A complexidade não depende da aparência visual do código, mas de **quantas vezes as instruções realmente executam**. Como o `return` interrompe a função logo na primeira iteração ($i=0$), a função executa em tempo constante $O(1)$.
- **Como perceber:** Rastreando a execução passo a passo ou medindo o tempo para diferentes valores de $n$.
- **Como corrigir:** Avaliar o fluxo real de execução considerando instruções de interrupção (`return`, `break`).
- **Como evitar novamente:** Analisar o corpo de cada laço antes de concluir sua ordem assintótica.

---

### 6. Uso de Fibonacci Recursivo Ingênuo $O(2^n)$

#### Erro que cometi
- **O que eu fiz:** Calculei números de Fibonacci usando a função recursiva ingênua:
  ```cpp
  int fib(int n) {
      if (n < 2) return n;
      return fib(n - 1) + fib(n - 2);
  }
  ```
- **Por que estava errado:** Essa implementação recalcula os mesmos subproblemas repetidamente de forma exponencial ($O(\phi^n) \le O(2^n)$). Para $n = 45$, ela realiza trilhões de chamadas, travando a execução.
- **Como perceber:** O programa demora vários segundos ou minutos para responder para valores de $n \ge 40$.
- **Como corrigir:** Usar um laço iterativo linear $O(n)$:
  ```cpp
  long long fib_linear(int n) {
      if (n < 2) return n;
      long long a = 0, b = 1;
      for (int i = 2; i <= n; i++) {
          long long c = a + b;
          a = b;
          b = c;
      }
      return b;
  }
  ```
- **Como evitar novamente:** Identificar subproblemas sobrepostos e substituir recursões exponenciais por iteração ou memoização.

---

### 7. Confusão entre Atribuição `=` e Comparação `==`

#### Erro que cometi
- **O que eu fiz:** Escrevi `if (x = 5)` dentro de uma condição de teste.
- **Por que estava errado:** O operador `=` realizou uma atribuição forçando `x` para `5`. Como o resultado da atribuição foi `5` (diferente de zero), o `if` avaliou como verdadeiro (`true`) em todos os casos, executando o bloco incondicionalmente.
- **Como perceber:** A variável `x` mudava de valor misteriosamente durante a execução do `if` e o programa sempre entrava no mesmo ramo.
- **Como corrigir:** Substituir pelo operador de igualdade `if (x == 5)`.
- **Como evitar novamente:** Habilitar as flags do compilador `-Wall -Wextra`, que geram avisos automáticos de `suggest parentheses around assignment used as truth value`.

---

### 8. Caractere Extra em Strings Literais de Saída (`\nc` em vez de `\n`)

#### Erro que cometi
- **O que eu fiz:** No `teste1.cpp`, escrevi `cout << "Você é menor de idade\nc";`.
- **Por que estava errado:** O caractere `'c'` foi enviado ao fluxo de saída padrão após a quebra de linha, gerando uma discrepância exata com o gabarito do juiz online (Wrong Answer).
- **Como perceber:** Comparar a saída do programa localmente com o exemplo do problema usando um comando de `diff`.
- **Como corrigir:** Remover o caractere excedente: `cout << "Você é menor de idade\n";`.
- **Como evitar novamente:** Revisar cuidadosamente os textos e quebras de linha impressos.

---

## 🛠️ Checklist Rápido de Compilação Segura

Ao testar seus códigos localmente no terminal Linux:

```bash
g++ -O2 -Wall -Wextra -Wshadow sol.cpp -o sol
```
- `-Wall -Wextra`: Aponta erros de atribuição `=` em `if` e variáveis não utilizadas.
- `-Wshadow`: Aponta quando uma variável local mascara uma variável global.
