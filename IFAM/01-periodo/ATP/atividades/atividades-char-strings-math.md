# Atividades Práticas: Caracteres, Strings e Funções Matemáticas

Este arquivo reúne todas as questões e desafios de programação apresentados na **Aula 11: Tratamento de String, Char e Funções Matemáticas**.

---

## Exercício 1 — Conversão de Frase para Minúsculo

Com base nas funções `toupper` e `tolower` da biblioteca `<ctype.h>`:
- Desenvolva um programa que solicite uma frase ao usuário contendo caracteres mistos (maiúsculas e minúsculas).
- Percorra a cadeia de caracteres convertendo todas as letras para o formato **minúsculo** (`tolower`).
- Exiba a frase convertida resultante.

---

## Exercício 2 — Capitalização de Nomes e Frases (Title Case)

Crie um programa em C que leia uma frase qualquer do usuário e normalize a sua formatação:
- A primeira letra de cada palavra deve ser convertida para **maiúscula** (`toupper`).
- As demais letras de cada palavra devem ser convertidas para **minúsculas** (`tolower`).
- O programa deve funcionar perfeitamente independentemente de como a frase original foi digitada (ex.: toda em maiúsculas, toda em minúsculas ou intercalada).

Exemplo:
- Entrada: `eNgeNHaRia dE cOMpuTAcAo iFaM`
- Saída: `Engenharia De Computacao Ifam`

---

## Exercício 3 — Leitura, Comprimento e Concatenação de Palavras

Utilizando as funções `<string.h>`:
1. Declare uma matriz de caracteres capaz de armazenar 3 palavras de até 50 caracteres cada (`char palavras[3][50]`).
2. Leia as 3 palavras do usuário (usando `fgets` de forma segura).
3. Calcule e imprima na tela o comprimento exato de cada uma das palavras utilizando a função `strlen`.
4. Concatene a segunda palavra ao final da primeira utilizando `strcat` e exiba o resultado.

---

## Exercício 4 — Comparação Lexicográfica com Diferenciação de Caixa

Implemente um programa que receba duas strings e demonstre a diferença prática entre `strcmp` e `strcmpi` (ou `strcasecmp` no padrão POSIX):
1. Avalie as cadeias com `strcmp` e indique se são idênticas ou qual delas é lexicograficamente maior considerando a tabela ASCII.
2. Repita o teste utilizando comparação case-insensitive para demonstrar quando palavras como `"Computacao"` e `"computacao"` são consideradas equivalentes.

---

## Exercício 5 — Conversão de Strings para Inteiros e Ponto Flutuante

Utilizando a biblioteca `<stdlib.h>`:
1. Leia duas strings numéricas inteiras do usuário e realize a soma aritmética delas utilizando `atoi`.
2. Leia duas strings numéricas reais do usuário e realize a soma aritmética delas utilizando `atof`.
3. Demonstre o comportamento das funções de conversão quando a string de entrada contém caracteres não numéricos misturados (ex.: `" -56abc"` vs `"abc"`).

---

## Exercício 6 — Cálculos Matemáticos com `<math.h>` e `<stdlib.h>`

Desenvolva um programa modular que demonstre e teste as seguintes funções matemáticas:
1. **Módulo**: Calcular o valor absoluto de inteiros com `abs()` e de valores reais com `fabs()`.
2. **Potenciação e Exponencial**:
   - Calcular $x^y$ com `pow(base, expoente)`.
   - Calcular a raiz cúbica de um número utilizando `pow(valor, 1.0/3.0)`.
   - Calcular potências neperianas $e^x$ utilizando `exp(x)`.
3. **Raiz Quadrada e Logaritmos**:
   - Calcular $\sqrt{x}$ com `sqrt(x)`.
   - Calcular logaritmo natural $\ln(x)$ com `log(x)` e logaritmo na base 10 com `log10(x)`.
   - Calcular logaritmo em base arbitrária (ex.: $\log_2(10)$) por meio da propriedade de mudança de base:
     $$\log_b(a) = \frac{\ln(a)}{\ln(b)}$$
4. **Trigonometria e Conversão Angular**:
   - Receber um ângulo em graus, convertê-lo para radianos ($\text{rad} = \text{graus} \times \frac{\pi}{180}$) e calcular `sin`, `cos` e `tan`.
   - Calcular as funções trigonométricas inversas (`asin`, `acos`, `atan`) e hiperbólicas (`sinh`, `cosh`, `tanh`).
5. **Arredondamentos**:
   - Comparar a aplicação de `round()`, `ceil()` e `floor()` sobre valores decimais positivos e negativos (ex.: $3.2, 3.8, -3.2, -3.8$).

---

## Exercício 7 — Geração de Números Aleatórios com Faixa Definida

Utilizando `<stdlib.h>` e `<time.h>`:
- Inicialize o gerador de semente randômica com a hora do sistema: `srand(time(NULL));`.
- Gere e imprima um vetor com 10 números inteiros aleatórios distribuídos no intervalo $[0, 100]$ utilizando o operador resto da divisão (`% 101`).
- Calcule a média aritmética dos números sorteados.
