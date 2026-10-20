# Introdução à Computação (IC)

Repositório central de notas de aula, conceitos básicos, práticas de programação e materiais de IC no IFAM.

---

## Conteúdos

- [x] Conceito de algoritmos e programas
- [x] Estrutura básica de um programa em C
- [x] Variáveis, tipos e operadores aritméticos
- [x] Representação de dados: inteiros, caracteres e tabela ASCII
- [x] Geração de números pseudoaleatórios (`rand`, `srand`)
- [ ] Representação de dados binários e hexadecimal
- [ ] Arquitetura básica de computadores (Von Neumann, CPU, memória, barramentos)
- [ ] Sistemas operacionais e compilação

---

## Aulas

- [2026-08-25 — Lógica Básica, Médias e Condicionais](aulas/2026-08-25-logica-basica-e-medias.md)
- [2026-09-22 — Representação ASCII e Números Pseudoaleatórios](aulas/2026-09-22-ascii-e-numeros-aleatorios.md)

---

## Conceitos

- [Tabela ASCII e Geração Aleatória em C](conceitos/tabela-ascii-e-aleatorios.md)

---

## Exercícios e listas

### Práticas de Aula
- [Aula 1 — Médias e Condições](exercicios/aula-1/): `calculaMedia.c`, `calculaMediaPonderada.c`, `mediaAlunos.c`, `verificaIdade.c`.
- [Aula 2 — ASCII e Aleatórios](exercicios/aula-2/): `sorteado.c`, `alfabeto.c`.
- [Exemplos Complementares](exercicios/exemplos/): `matriz_indentidade.c`.

### Listas
- [Pasta de Listas](listas/): Listas e tarefas da disciplina.

### Materiais
- [Pasta de Materiais](materiais/): Slides, apostilas e notas técnicas.

---

## Provas

- [Pasta de Provas](provas/): Espaço reservado para avaliações e resoluções.

---

## Pontos para revisar

- Limpeza de buffer de entrada ao ler caracteres com `scanf(" %c")`.
- Uso correto de `srand(time(NULL))` uma única vez no início do programa.
- Atenção ao código `matriz_indentidade.c`:
  > ⚠️ Possível erro: o código em `exercicios/exemplos/src/matriz_indentidade.c` possui `if (i = j)` utilizando o operador de atribuição `=` em vez do operador de comparação `==`.

---

## Dúvidas pendentes

- [ ] Estudar a precisão do tipo `float` versus `double` em médias com dízimas.
