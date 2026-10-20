# Aula: Estruturas Condicionais e Tomada de Decisão em C

- **Data**: 2026-09-23
- **Disciplina**: Algoritmos e Técnicas de Programação (ATP)
- **Professor**: > ⚠️ Informação a confirmar

---

## 📌 Tópicos Abordados

1. Tomada de decisão em C com `if`, `else if` e `else`.
2. Aninhamento de condições lógicas.
3. Operadores relacionais (`>`, `<`, `>=`, `<=`, `==`, `!=`).
4. Operador ternário (`?:`) como alternativa compacta para atribuição condicional.
5. Aplicações práticas: cálculo de médias com critério de frequência, reajuste salarial e quadrantes do plano cartesiano.

---

## 🔗 Conceitos Relacionados

- [Estruturas Condicionais em C](../conceitos/estruturas-condicionais.md)

---

## 💻 Códigos e Práticas Desenvolvidas

Todos os códigos implementados nesta aula estão organizados na pasta de exercícios com seus respectivos scripts de compilação:

- [`calcula-media-simples.c`](../exercicios/aula-1-condicionais/src/calcula-media-simples.c): Verificação de aprovação baseada em frequência ($\ge 75\%$) e média ($\ge 7.0$ ou exame $\ge 5.0$).
- [`exemplo_ternario.c`](../exercicios/aula-1-condicionais/src/exemplo_ternario.c): Sintaxe e uso do operador condicional ternário `(a > b) ? a : b`.
- [`plano_cartesiano.c`](../exercicios/aula-1-condicionais/src/plano_cartesiano.c): Identificação do quadrante ou eixo coordenado a partir de coordenadas $(x, y)$.
- [`reajuste_salarial.c`](../exercicios/aula-1-condicionais/src/reajuste_salarial.c): Cálculo percentual de aumento conforme faixas de remuneração.

Para compilar e testar os códigos desta aula:
```bash
cd "exercicios/aula-1-condicionais"
./build.sh
./bin/calcula-media-simples
```

---

## 📝 Observações e Dúvidas

- [ ] Revisar precedência de operadores lógicos (`&&`, `||`, `!`) em expressões complexas.
