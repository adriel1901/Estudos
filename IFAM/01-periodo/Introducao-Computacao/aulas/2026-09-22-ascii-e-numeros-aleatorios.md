# Aula: Representação ASCII e Números Pseudoaleatórios

- **Data**: 2026-09-22
- **Disciplina**: Introdução à Computação (IC)
- **Professor**: > ⚠️ Informação a confirmar

---

## 📌 Tópicos Abordados

1. Tabela ASCII: equivalência entre caracteres e valores inteiros numéricos.
2. Uso da função `rand()` da biblioteca `<stdlib.h>` e sua escala com operador `%`.
3. Inicialização de semente randômica com `srand(time(NULL))` de `<time.h>`.
4. Controle de repetição com `while` e tratamento de tentativas/chances.

---

## 🔗 Conceitos Relacionados

- [Tabela ASCII e Geração Aleatória em C](../conceitos/tabela-ascii-e-aleatorios.md)

---

## 💻 Códigos e Práticas Desenvolvidas

Todos os arquivos estão em `exercicios/aula-2/src/`:

- [`sorteado.c`](../exercicios/aula-2/src/sorteado.c): Jogo de adivinhação da letra a partir do código decimal ASCII gerado aleatoriamente.
- [`alfabeto.c`](../exercicios/aula-2/src/alfabeto.c): Exibição e iteração sobre letras do alfabeto.

Para compilar e testar:
```bash
cd "exercicios/aula-2"
./build.sh
```

---

## 📝 Observações e Dúvidas

- [ ] Lembrar sempre do espaço em branco antes do especificador no `scanf(" %c", &var)` para evitar capturar `\n` do teclado.
