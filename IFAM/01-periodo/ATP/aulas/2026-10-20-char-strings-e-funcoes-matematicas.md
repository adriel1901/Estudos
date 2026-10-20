# Aula: Tratamento de String, Char e Funções Matemáticas

- **Data**: 2026-10-20
- **Disciplina**: Algoritmos e Técnicas de Programação (ATP)
- **Professor**: Prof. Dr. Jucimar Souza (`jucimar.souza@ifam.edu.br`)

---

## 📌 Tópicos Abordados

1. **Manipulação de Caracteres (`<ctype.h>`)**:
   - Conversão de caixa: `toupper()` e `tolower()`.
   - Testes de classificação de símbolos: `isalnum()`, `isalpha()`, `isdigit()`, `isspace()`, `ispunct()`, `isascii()`, `isprint()`.
2. **Manipulação de Strings (`<string.h>`)**:
   - Definição de string em C como vetor de `char` com terminador nulo `\0`.
   - Obtenção do comprimento de strings com `strlen()`.
   - Cópia e atribuição com `strcpy()`.
   - Concatenação com `strcat()`.
   - Comparação lexicográfica com `strcmp()` e comparação sem distinção de maiúsculas com `strcmpi()` / `strcasecmp()`.
   - Funções auxiliares in-place: `strupr()`, `strlwr()`, `strrev()`.
3. **Conversões entre Strings e Tipos Numéricos (`<stdlib.h>`)**:
   - Conversão de string para inteiro: `atoi()`.
   - Conversão de string para ponto flutuante: `atof()`.
   - Conversão de inteiro para texto: `itoa()` / `sprintf()`.
4. **Funções Matemáticas (`<math.h>` e `<stdlib.h>`)**:
   - Módulo absoluto: `abs()` (inteiro) e `fabs()` (real).
   - Exponenciação e logaritmos: `pow()`, `exp()`, `log()`, `log10()`.
   - Raiz quadrada: `sqrt()`.
   - Funções trigonométricas e hiperbólicas: `sin()`, `cos()`, `tan()`, `asin()`, `acos()`, `atan()`, `sinh()`, `cosh()`, `tanh()`.
   - Conversão angular entre graus e radianos ($\text{rad} = \text{graus} \times \pi / 180$).
   - Funções de arredondamento: `round()`, `ceil()`, `floor()`.
5. **Geração de Números Pseudoaleatórios**:
   - Inicialização da semente com `srand(time(NULL))` (`<time.h>`).
   - Sorteio de intervalos com `rand() % N`.

---

## 🔗 Conceitos Relacionados

- [Manipulação de Caracteres, Strings e Funções Matemáticas em C](../conceitos/char-strings-math.md)
- [Vetores (Arrays Unidimensionais) em C](../conceitos/vetores.md)
- [Matrizes Multidimensionais em C](../conceitos/matrizes.md)

---

## 💻 Códigos e Práticas Desenvolvidas

Todos os arquivos práticos da aula estão organizados em [`materiais/char_string_math/`](../materiais/char_string_math/):

- [`uso_funcoes_char.c`](../materiais/char_string_math/src/uso_funcoes_char.c): Demonstração de `toupper`, `tolower` e conversão de frase completa.
- [`uso_funcoes_char2.c`](../materiais/char_string_math/src/uso_funcoes_char2.c): Testes de `isalnum`, `isalpha`, `isascii`, `iscntrl`, `isgraph`, `isprint`.
- [`uso_funcoes_char3.c`](../materiais/char_string_math/src/uso_funcoes_char3.c): Testes de `islower`, `isupper`, `ispunct`, `isspace`, `isdigit`, `isxdigit`.
- [`uso_strcat_strlen.c`](../materiais/char_string_math/src/uso_strcat_strlen.c): Cálculo de tamanho com `strlen` e concatenação com `strcat`.
- [`uso_strcmp_strcmpi.c`](../materiais/char_string_math/src/uso_strcmp_strcmpi.c): Comparação de cadeias com diferenciação e ignorando maiúsculas/minúsculas.
- [`uso_funcoes_string.c`](../materiais/char_string_math/src/uso_funcoes_string.c): Exemplos com `strupr`, `strlwr` e `strrev`.
- [`uso_string_conv.c`](../materiais/char_string_math/src/uso_string_conv.c): Conversão de strings para soma numérica com `atoi` e `atof`.
- [`uso_funcoes_math_1.c`](../materiais/char_string_math/src/uso_funcoes_math_1.c): Aplicação de `abs`, `fabs`, `pow`, `exp`, `sqrt`, `log` e `log10`.

Para compilar e testar:
```bash
cd "materiais/char_string_math"
./build.sh
./bin/uso_funcoes_char
```

---

## 📋 Atividades e Exercícios Propostos

As atividades práticas, exercícios de normalização de frases (Title Case), conversões e desafios de biblioteca matemática foram estruturados em:

- [Atividades Práticas de Char, Strings e Math](../atividades/atividades-char-strings-math.md)

---

## 📝 Observações e Dúvidas

- [ ] Lembrar de vincular a biblioteca matemática (`-lm`) ao compilar programas que utilizem funções de `<math.h>` no GCC.
- [ ] Atentar para a segurança na leitura de strings, evitando `gets` e priorizando `fgets(str, sizeof(str), stdin)`.
