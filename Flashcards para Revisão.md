# Flashcards para o Anki (rascunho para revisão)

Tipo de nota: **Basic**. Frente e Verso separados por `;` na importação, ou cole cada bloco no campo correspondente.

Regras (AGENTS.md): um card por ideia; sem trivialidades; sem soluções completas. Revise antes de importar.

---

## Deck: IFAM::Matematica-Discreta

**Frente:** Qual é a negação de "para todo x, P(x)"?
**Verso:** ∃x ¬P(x), ou seja, "existe x tal que não P(x)".

**Frente:** Qual é a contrapositiva de P → Q?
**Verso:** ¬Q → ¬P, logicamente equivalente a P → Q.

**Frente:** Enuncie o princípio da indução matemática.
**Verso:** Se P(1) vale e, para todo k, P(k) → P(k+1), então P(n) vale para todo n ∈ ℕ.

**Frente:** Quantos subconjuntos tem um conjunto com n elementos?
**Verso:** 2ⁿ (inclui o conjunto vazio e o próprio conjunto).

**Frente:** Permutação versus combinação: qual a fórmula de cada uma?
**Verso:** Permutação: n!/(n−k)!. Combinação (sem ordem): C(n,k) = n!/(k!(n−k)!).

**Frente:** O que é uma relação de equivalência?
**Verso:** Reflexiva, simétrica e transitiva. Divide o conjunto em classes de equivalência disjuntas.

**Frente:** Quando uma função f é injetora?
**Verso:** Quando f(a) = f(b) implica a = b.

---

## Deck: IFAM::ATP

**Frente:** O que um ponteiro armazena?
**Verso:** Um endereço de memória. Em `int *p = &x;`, `p` guarda o endereço de `x`.

**Frente:** Qual a diferença entre `p` e `*p`?
**Verso:** `p` é o endereço. `*p` é o valor no endereço (desreferência).

**Frente:** Por que uma string em C precisa do caractere nulo?
**Verso:** Strings são vetores de `char` terminados por `'\0'`. Sem ele, `strlen` e `printf` não sabem onde termina.

**Frente:** O que `malloc` retorna e o que fazer com isso?
**Verso:** Um ponteiro para o bloco alocado, ou `NULL` em caso de falha. Verifique antes de usar e libere com `free`.

**Frente:** Passagem por valor versus por ponteiro: qual a diferença?
**Verso:** Por valor, a função recebe uma cópia. Por ponteiro, pode alterar a variável original.

**Frente:** O que é o caso base em recursão?
**Verso:** A condição que encerra a recursão sem nova chamada. Sem ele, a recursão não termina.

**Frente:** Por que `sizeof` de um vetor recebido como parâmetro não dá o tamanho do vetor?
**Verso:** Ao ser passado para a função, o vetor vira um ponteiro. Passe o tamanho separadamente.

---

> ⚠️ Os cards acima são genéricos. Conforme o AGENTS.md, os melhores são os que surgirem dos seus erros reais nas listas. Adicione-os quando aparecerem.
