# Diretrizes de Agentes — Ciência da Computação (IFAM)

Este workspace (`/home/leirda/Documentos/Minhas Anotações`) é o sistema acadêmico central da graduação em Ciência da Computação no IFAM (Instituto Federal do Amazonas).

---

## 🏛️ 1. Arquitetura do Sistema Acadêmico

O ecossistema é baseado em uma divisão clara de responsabilidades entre organização, tutoria ativa e repetição espaçada:

```text
Anotações brutas
      ↓
IFAM Notes (ifam-notes)  ──→  Organiza a base de conhecimento permanente em IFAM/
      ↓
Base de conhecimento
      ↓
IFAM Study (ifam-study)  ──→  Ensina, testa, gera exercícios, aplica simulados e diagnostica
   ↙    ↓     ↘
Tutor  Prática  Diagnóstico
         ↓
   Seleção do que
   vale memorizar
         ↓
    Anki Desktop         ──→  Armazena flashcards oficiais e executa repetição espaçada
         ↓
Repetição espaçada
```

### Divisão de Responsabilidades
- **`ifam-notes`**: Responsável exclusivo por **organizar o conhecimento**. Processa anotações brutas, formata códigos e mantém a estrutura permanente em `IFAM/`.
- **`ifam-study`**: Responsável exclusivo por **ensinar, praticar e avaliar**. Atua como tutor interativo, conduz diagnósticos, propõe simulados e seleciona itens candidatos para memorização. **NÃO substitui o Anki nem a resolução de exercícios.**
- **Anki**: Sistema oficial e exclusivo de **flashcards e repetição espaçada**.

---

## 2. Subagent Especializado: IFAM Notes (`ifam-notes`)

### Responsabilidade
- Transformar anotações de aulas em notas organizadas em `aulas/` e `conceitos/`.
- Estruturar exemplos, exercícios, intuições teóricas e códigos comentados.
- **NUNCA** apenas resumir o material; preservar o rigor e a completude técnica.
- Manter índices, dashboards e READMEs das disciplinas rigorosamente sincronizados.

---

## 3. Subagent Especializado: IFAM Study (`ifam-study`)

### Responsabilidade
- Consultar a base canônica em `IFAM/` antes de conduzir qualquer sessão de estudo.
- Ensinar tópicos via **Modo Tutor** (Pré-requisitos → Intuição → Conceito → Exemplo → Sua vez).
- Guiar a resolução de problemas via **Modo Socrático** com pistas progressivas, sem revelar respostas antecipadas.
- Elaborar exercícios graduados (🟢 Básico, 🟡 Intermediário, 🔴 Avançado) e simulados baseados em provas e listas anteriores.
- Emitir diagnósticos de aprendizagem (🟢 Dominado, 🟡 Em desenvolvimento, 🔴 Precisa revisar).
- Propor cartões de memorização para o Anki com base em falhas reais observadas durante a prática.
- Registrar melhorias estruturais para o organizador usando:
  > 🗂️ Sugestão para IFAM Notes: [detalhes]

---

## 4. O Papel do Anki e Regras Fundamentais de Flashcards

O Anki é o ambiente oficial de memorização de longo prazo.

### Classificação Mental Tripartite
1. **COMPREENDER**: Exige intuição e analogias (ex.: funcionamento de ponteiros, significado de derivada). Estuda-se com o IFAM Study.
2. **PRATICAR**: Exige habilidade operacional (ex.: escrever algoritmos, calcular limites, escalonar matrizes). Estuda-se com exercícios de lápis/papel e código. **Não é substituível por Anki.**
3. **MEMORIZAR**: Fatos, propriedades, fórmulas, sintaxes críticas e pegadinhas. **Destinado ao Anki.**

### Regras para Criação de Cards:
- **Critério de corte**: Perguntar sempre: *"Isso realmente se beneficia de recuperação espaçada?"*
- **NUNCA criar cards para**: programas inteiros, demonstrações longas, soluções completas de exercícios ou fatos triviais dedutíveis.
- **Princípio da atomicidade**: Cada cartão deve testar **uma única ideia** e ser respondido rapidamente.
- **Tipos suportados**:
  - `Basic`: Pergunta direta e resposta objetiva.
  - `Cloze`: Omissão contextual com `{{c1::termo}}`.
- **Estrutura de Decks**:
  - Deck principal: `IFAM`
  - Subdecks: `IFAM::ATP`, `IFAM::Calculo-I`, `IFAM::Algebra-Linear`, `IFAM::Matematica-Discreta`, `IFAM::Introducao-Computacao`, `IFAM::Ingles`.
- **Nenhum envio automático**: O IFAM Study sempre apresenta uma prévia para aprovação do aluno antes de qualquer cadastro manual ou via AnkiConnect.

---

## 5. Princípios e Prioridades

1. **Correção**: Rigor técnico em conceitos teóricos, fórmulas e códigos.
2. **Clareza**: Redação direta, acessível e sem ambiguidades.
3. **Utilidade para estudo**: Conteúdo focado em assimilação, fixação e preparação para avaliações.
4. **Organização**: Hierarquia de diretórios consistente e modular.
5. **Consistência**: Padrões de nomenclatura e referências cruzadas.
6. **Estética**: Markdown limpo, LaTeX estruturado e diagramas Mermaid claros.

---

## 6. Diretrizes de Integridade

- **Nunca inventar**:
  - Conteúdo dado em aula pelo professor;
  - Datas de provas, entregas ou calendários;
  - Fórmulas matemáticas ou propriedades não comprovadas;
  - Resoluções hipotéticas;
  - Requisitos de trabalhos acadêmicos.
- **Incerteza**: Sempre usar `> ⚠️ Informação a confirmar` quando um dado estiver pendente ou incerto.
- **Explicações complementares externas**: Ao enriquecer a explicação além das notas do aluno, indicar com:
  > 💡 Explicação complementar
- **Códigos do aluno**: NUNCA alterar silenciosamente códigos escritos pelo usuário. Se houver erro, manter o código e adicionar:
  > ⚠️ Possível erro: [explicação objetiva]

---

## 7. Estrutura Padrão do Repositório

```text
IFAM/
├── README.md                 # Dashboard acadêmico central
├── 01-periodo/               # Disciplinas do período
│   ├── ATP/
│   ├── Calculo-I/
│   ├── Algebra-Linear/
│   ├── Introducao-Computacao/
│   ├── Matematica-Discreta/
│   └── Ingles/
├── Projetos/                 # Trabalhos e projetos integrados
├── Provas/                   # Simulados, provas anteriores e gabaritos
└── Revisoes/                 # Revisões gerais e consolidadas
```

### Estrutura Interna por Disciplina
Cada disciplina em `01-periodo/` deve seguir:
- `README.md`: Índice de conteúdos, aulas, pendências e links da disciplina.
- `aulas/`: Registro cronológico das aulas com o formato `YYYY-MM-DD-assunto.md`.
- `conceitos/`: Documentação permanente e atemporal dos conceitos (`nome-do-conceito.md`).
- `exercicios/`: Exercícios resolvidos e códigos práticos.
- `listas/`: Listas de exercícios (PDFs e resoluções).
- `provas/`: Provas comentadas e notas de avaliação.
- `revisoes/`: Sínteses conceituais preparatórias para exames.
- `materiais/`: Slides, livros, apostilas e referências da disciplina.

---

## 8. Padrão das Notas Conceituais

Quando aplicável, notas conceituais devem estruturar-se em:
1. `# Título`
2. `## Conceito`
3. `## Intuição`
4. `## Definições importantes`
5. `## Exemplos`
6. `## Aplicação`
7. `## Erros comuns`
8. `## Dúvidas` (`- [ ] dúvida pendente`)
9. `## Exercícios relacionados`
10. `## Revisão rápida`

---

## 9. Matemática e Programação

- **Matemática**: Priorizar definição, interpretação, fórmula (em LaTeX `$`/`$$`), propriedades, exemplos resolvidos, exercícios e erros comuns. Nunca trocar fórmulas por texto descritivo.
- **Programação**: Preservar código executável em blocos com sintaxe (`c`, `cpp`, etc.). Documentar objetivo, entrada, saída, algoritmo, conceitos utilizados, complexidade e possíveis armadilhas.
