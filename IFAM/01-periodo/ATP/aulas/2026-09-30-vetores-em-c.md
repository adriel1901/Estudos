# Aula: Vetores Unidimensionais (Arrays) em C

- **Data**: 2026-09-30
- **Disciplina**: Algoritmos e Técnicas de Programação (ATP)
- **Professor**: > ⚠️ Informação a confirmar

---

## 📌 Tópicos Abordados

1. Introdução a estruturas de dados homogêneas.
2. Alocação estática de vetores unidimensionais em C.
3. Indexação base zero ($0$ até $N-1$) e acesso direto por colchetes `[]`.
4. Laços de repetição `for` para leitura (`scanf`) e exibição (`printf`).
5. Manipulação de múltiplos vetores: união e concatenação de dados.

---

## 🔗 Conceitos Relacionados

- [Vetores (Arrays Unidimensionais) em C](../conceitos/vetores.md)

---

## 💻 Códigos e Práticas Desenvolvidas

Todos os exemplos da aula encontram-se em:

- [`exemplo1_vetor.c`](../exercicios/aula-2-vetores/src/exemplo1_vetor.c): Declaração de vetor de 10 floats, leitura interativa e impressão formatada.
- [`exemplo3_vetor.c`](../exercicios/aula-2-vetores/src/exemplo3_vetor.c): Leitura e verificação de condições sobre elementos.
- [`exemplo4_vetor.c`](../exercicios/aula-2-vetores/src/exemplo4_vetor.c): Processamento sequencial de elementos de um array.
- [`exemplo5_vetor.c`](../exercicios/aula-2-vetores/src/exemplo5_vetor.c): Manipulação de posições e iteração.
- [`exemplo6_vetor.c`](../exercicios/aula-2-vetores/src/exemplo6_vetor.c): Intercalação e concatenação de dois vetores de tamanho 4 em um vetor de tamanho 8.

Para compilar e testar os códigos desta aula:
```bash
cd "exercicios/aula-2-vetores"
./build.sh
./bin/exemplo1_vetor
```

---

## 📝 Observações e Dúvidas

- [ ] Verificar como vetores de caracteres (*strings*) diferem de vetores numéricos quanto ao terminador nulo `\0`.
