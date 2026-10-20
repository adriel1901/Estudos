# Estruturas Condicionais em C

## Conceito

Estruturas condicionais permitem que o fluxo de execução de um programa se ramifique, tomando decisões com base na avaliação de expressões lógicas ou relacionais (verdadeiro ou falso).

Em C, qualquer valor diferente de zero (`!= 0`) é tratado como verdadeiro (*true*), enquanto o valor `0` é tratado como falso (*false*).

---

## Intuição

Pense em uma estrutura condicional como uma bifurcação em uma estrada: dependendo do sinal (a condição testada), o programa segue por um caminho e ignora os demais.

---

## Definições importantes

### 1. `if` simples e composto (`if-else`)
Executa um bloco se a condição for verdadeira; opcionalmente executa o bloco `else` caso contrário:
```c
if (condicao) {
    // bloco executado se condicao for verdadeira
} else {
    // bloco executado se condicao for falsa
}
```

### 2. Condicionais encadeadas (`if - else if - else`)
Utilizadas para avaliar múltiplas condições mutuamente exclusivas em sequência:
```c
if (nota >= 7.0) {
    printf("Aprovado\n");
} else if (nota >= 5.0) {
    printf("Recuperacao\n");
} else {
    printf("Reprovado\n");
}
```

### 3. Operador Ternário (`?:`)
Expressão condicional compacta para atribuição ou retorno:
```c
resultado = (condicao) ? valor_se_verdadeiro : valor_se_falso;
```

---

## Exemplos

### Exemplo 1: Verificação de Situação Acadêmica
Código baseado na prática de sala (`calcula-media-simples.c`):

```c
#include <stdio.h>

int main() {
  float n1, n2, n3, media;
  int freq = 75;

  printf("Nota 1: \n");
  scanf("%f", &n1);
  printf("Nota 2: \n");
  scanf("%f", &n2);
  printf("Nota 3: \n");
  scanf("%f", &n3);

  printf("Coloque a frequencia do aluno: ");
  scanf("%d", &freq);

  media = (float)(n1 + n2 + n3) / 3;

  if (freq >= 75) {
    if (media >= 7) {
      printf("Aprovado com a media %.2f!\n", media);
    } else if (media >= 5) {
      printf("Reprovado, mas com direito de fazer um exame.\n");
    } else {
      printf("Reprovado e sem direito de fazer exame\n");
    }
  } else {
    printf("Reprovado por falta\n");
  }
  return 0;
}
```

- **Objetivo**: Determinar aprovação de aluno com base em média aritmética e percentual de frequência.
- **Entrada**: Três notas float e frequência inteira em %.
- **Saída**: Status do aluno (Aprovado, Exame, Reprovado ou Reprovado por falta).
- **Algoritmo**: Primeiro filtra pela barreira de frequência (`freq >= 75`), depois aninha a decisão da média.
- **Conceitos utilizados**: `if` aninhado, operadores relacionais (`>=`), conversão de tipos (cast).

### Exemplo 2: Operador Ternário
```c
#include <stdio.h>

int main() {
  int a = 10, b = 20;
  int maior = (a > b) ? a : b;
  printf("Maior valor: %d\n", maior);
  return 0;
}
```

---

## Aplicação

- Validação de dados de entrada em formulários e consoles.
- Controle de estados em algoritmos (ex.: ordenação, busca, critérios de parada).
- Roteamento e tomada de decisão lógica em sistemas embarcados e drivers.

---

## Erros comuns

1. **Confundir atribuição (`=`) com igualdade (`==`)**:
   ```c
   // ERRO GRAVE: sempre avalia para verdadeiro se x != 0
   if (x = 5) { ... }
   
   // CORRETO:
   if (x == 5) { ... }
   ```
2. **Omitir chaves em blocos com múltiplas linhas**:
   Sem `{ }`, apenas a primeira instrução seguinte ao `if` pertence ao escopo da condição.
3. **Divisão inteira involuntária**:
   `media = (n1 + n2 + n3) / 3;` se as variáveis forem inteiras descarta a parte decimal. Use `3.0` ou cast explícito `(float)`.

---

## Dúvidas

- [ ] Avaliar se o compilador otimiza expressões com ternário da mesma forma que `if-else`.

---

## Exercícios relacionados

- [Calcula Média Simples](../exercicios/aula-1-condicionais/src/calcula-media-simples.c)
- [Plano Cartesiano](../exercicios/aula-1-condicionais/src/plano_cartesiano.c)
- [Reajuste Salarial](../exercicios/aula-1-condicionais/src/reajuste_salarial.c)
- [Exemplo Ternário](../exercicios/aula-1-condicionais/src/exemplo_ternario.c)

---

## Revisão rápida

| Estrutura | Sintaxe | Uso principal |
| :--- | :--- | :--- |
| `if` | `if (cond) { ... }` | Ação única condicional |
| `if-else` | `if (cond) { ... } else { ... }` | Escolha binária |
| `if-else if-else` | `if (c1) { ... } else if (c2) { ... } else { ... }` | Múltiplas faixas / opções |
| Ternário | `(cond) ? expr1 : expr2` | Atribuição compacta inline |
