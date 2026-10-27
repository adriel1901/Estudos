# Painel de Rotina

Painel de rotina semanal. O calendário oficial continua no Google Agenda; este arquivo mostra as pendências de estudo e a estrutura da semana.

---

## Estrutura da semana (padrão)

| Dia | Período | Atividade |
|---|---|---|
| Segunda | Noite | ATP em C (ponteiros, strings) |
| Terça | — | Aula de Introdução à Computação |
| Quarta | Noite | Maratona SBC: estruturas de dados |
| Quinta | Noite | Matemática: ciclo da semana |
| Sexta | Noite | Revisão de 30 min (preparatório da Maratona, se houver) |
| Sábado | Manhã | Bloco principal de matemática; ATP ou Maratona como reserva |
| Domingo | Manhã | Revisão da semana e planejamento da próxima |

> ⚠️ Informação a confirmar: horário de trabalho na Visteon (manhã) e dias de RPG, que mudam a disponibilidade.

Ciclo de matemática (três semanas): Matemática Discreta → Álgebra Linear → Cálculo I → repetir.

---

## Pendências de MD e ATP

```dataview
TASK
FROM "IFAM/01-periodo"
WHERE !completed AND (contains(text, "[ATP]") OR contains(text, "[Matemática Discreta]"))
GROUP BY file.link
```

## Pendências de Álgebra Linear e Cálculo I

```dataview
TASK
FROM "IFAM/01-periodo"
WHERE !completed AND (contains(text, "[Álgebra Linear]") OR contains(text, "[Cálculo I]"))
GROUP BY file.link
```

## Concluídas nesta semana

```dataview
TASK
FROM "IFAM/01-periodo" OR "Programação/Maratona SBC"
WHERE completed AND file.mtime >= date(today) - dur(7 days)
GROUP BY file.link
```

---

## Maratona SBC

Último registro: ver [Registro](Programação/Maratona%20SBC/Registro.md).

---

## Checklist (projeto)

- [ ] Validação física ponta a ponta em aparelho Android
- [ ] Continuação dos fluxos de geofencing e fotos
- [ ] Alertas via WhatsApp/FCM
