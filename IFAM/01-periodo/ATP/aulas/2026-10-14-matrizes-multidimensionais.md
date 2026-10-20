# Aula: Matrizes Multidimensionais em C

- **Data**: 2026-10-14
- **Disciplina**: Algoritmos e Técnicas de Programação (ATP)
- **Professor**: Prof. Dr. Jucimar Souza (`jucimar.souza@ifam.edu.br`)

---

## 📌 Tópicos Abordados

1. Introdução a estruturas de dados homogêneas multidimensionais (matrizes 2D e 3D).
2. Representação em memória: alocação estática e contígua (*row-major order*).
3. Declaração, dimensões e total de elementos ($N \times M$).
4. Indexação com base zero e laços aninhados (`for` externo para linhas e interno para colunas).
5. Percurso linha a linha vs. coluna a coluna e impacto no acesso.
6. Operações fundamentais em matrizes quadradas:
   - Diagonal principal ($i = j$) e diagonal secundária ($j = N - 1 - i$).
   - Elementos abaixo ($i > j$) e acima ($i < j$) da diagonal principal.
   - Vetores agregadores de soma por linha (`somaLinha`) e por coluna (`somaColuna`).
7. Matrizes de caracteres (vetores de strings) para manipulação de listas tabulares de texto.

---

## 🔗 Conceitos Relacionados

- [Matrizes Multidimensionais em C](../conceitos/matrizes.md)
- [Vetores (Arrays Unidimensionais) em C](../conceitos/vetores.md)

---

## 💻 Códigos e Práticas Desenvolvidas

Todos os exemplos e exercícios práticos encontram-se estruturados em [`materiais/vetores_matrizes/`](../materiais/vetores_matrizes/):

- [`lendoMatriz.c`](../materiais/vetores_matrizes/src/lendoMatriz.c): Leitura e exibição formatada de elementos de uma matriz $3 \times 3$.
- [`exerc2a_matrz.c`](../materiais/vetores_matrizes/src/exerc2a_matrz.c): Soma elemento a elemento de duas matrizes $5 \times 3$ em uma terceira matriz $C$.
- [`exerc2b_matrz.c`](../materiais/vetores_matrizes/src/exerc2b_matrz.c): Agrupamento de dois vetores unidimensionais de 7 posições em colunas de uma matriz $7 \times 2$.
- [`exerc3_matriz.c`](../materiais/vetores_matrizes/src/exerc3_matriz.c): Matriz $5 \times 5$ com cálculo de diagonais, soma triangular inferior e vetores de soma por linha e coluna.
- [`exercMediaAlunos.c`](../materiais/vetores_matrizes/src/exercMediaAlunos.c): Armazenamento de nomes e notas de 8 alunos com cálculo de média individual e média geral da turma.
- [`usandoMatrizString.c`](../materiais/vetores_matrizes/src/usandoMatrizString.c), [`usandoMatrizString2.c`](../materiais/vetores_matrizes/src/usandoMatrizString2.c), [`usandoMatrizString3.c`](../materiais/vetores_matrizes/src/usandoMatrizString3.c): Manipulação de cadeias de caracteres em matrizes bidimensionais.

Para compilar e testar os códigos:
```bash
cd "materiais/vetores_matrizes"
./build.sh
./bin/lendoMatriz
```

---

## 📋 Atividades e Exercícios Propostos

As questões completas de fixação, testes de mesa e desafios práticos (incluindo o tabuleiro de xadrez e o grafo de distâncias entre cidades) foram compilados em:

- [Atividades Práticas de Matrizes](../atividades/atividades-matrizes.md)

---

## 📝 Observações e Dúvidas

- [ ] Lembrar que ao definir funções que recebem matrizes multidimensionais em C, todas as dimensões subsequentes à primeira precisam ser especificadas (ex.: `void f(int m[][5])`).
- [ ] Atentar para a ordem dos laços: percorrer por linha (`i` externo, `j` interno) aproveita melhor o princípio da localidade espacial de memória cache.
