# Algoritmos e Técnicas de Programação (ATP)

Repositório central de notas de aula, conceitos fundamentais, exercícios e materiais da disciplina de ATP no IFAM.

---

## Conteúdos

- [x] Tipos primitivos e variáveis em C
- [x] Entrada e saída padrão (`printf`, `scanf`, `getchar`, `putchar`, `fgets`)
- [x] Operadores aritméticos, relacionais e lógicos
- [x] Estruturas de controle de fluxo: `if`, `else if`, `else`
- [x] Operador condicional ternário (`?:`)
- [x] Vetores unidimensionais (*arrays*)
- [ ] Matrizes multidimensionais
- [ ] Manipulação de strings
- [ ] Funções e modularização
- [ ] Ponteiros e alocação dinâmica de memória
- [ ] Structs e tipos definidos pelo usuário

---

## Aulas

- [2026-09-23 — Estruturas Condicionais e Tomada de Decisão](aulas/2026-09-23-estruturas-condicionais.md)
- [2026-09-30 — Vetores Unidimensionais (Arrays) em C](aulas/2026-09-30-vetores-em-c.md)

---

## Conceitos

- [Estruturas Condicionais em C](conceitos/estruturas-condicionais.md)
- [Vetores (Arrays Unidimensionais) em C](conceitos/vetores.md)

---

## Exercícios e listas

### Exercícios de Aula
- [Aula 1 — Condicionais e Decisões](exercicios/aula-1-condicionais/): `calcula-media-simples.c`, `plano_cartesiano.c`, `reajuste_salarial.c`, `exemplo_ternario.c`.
- [Aula 2 — Vetores](exercicios/aula-2-vetores/): `exemplo1_vetor.c`, `exemplo3_vetor.c`, `exemplo4_vetor.c`, `exemplo5_vetor.c`, `exemplo6_vetor.c`.
- [Lógica — Slide 3](exercicios/slide-3-logica/): `prestacao.c`, `fahrenheit_celsius.c`, `volume_lata.c`, `litros_viagem.c`, `banco.c`, `trocar_numero.c`.
- [Práticas Pessoais](exercicios/praticas-pessoais/): Espaço dedicado a testes livres e experimentos.

### Listas
- [Pasta de Listas](listas/): Diretório reservado para listas de exercícios oficiais.

### Materiais de Apoio
- [Introdução à Linguagem C](materiais/introducao/): Sintaxe básica, tipos, operadores e E/S.
- [Estruturas de Repetição](materiais/estruturas_repeticao/): Laços `for`, `while` e condicionais `switch`/aninhados.
- [Vetores e Matrizes](materiais/vetores_matrizes/): Códigos de exemplo de manipulação de vetores e matrizes.
- [Char, Strings e Math](materiais/char_string_math/): Funções de caracteres (`ctype.h`), strings (`string.h`) e matemática (`math.h`).
- Slides e apresentações em PDF em [materiais/](materiais/).

---

## Provas

- [Pasta de Provas](provas/): Diretório reservado para avaliações, simulados e resoluções.

---

## Pontos para revisar

- Diferença semântica entre operador de atribuição (`=`) e de igualdade (`==`).
- Cuidados com *buffer overflow* ao iterar vetores até `N` em vez de `N - 1`.
- Limpeza do buffer do teclado antes de ler caracteres (`getchar` / `scanf(" %c")`).

---

## Dúvidas pendentes

- [ ] Avaliar se o compilador otimiza expressões com ternário da mesma forma que `if-else`.
- [ ] Como passar vetores como parâmetro de função preservando a integridade da memória.
