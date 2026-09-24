# Lista de Exercícios 01 — Algoritmos e Pensamento Computacional

**Universidade:** Universidade Positivo — ETI | Escola de Tecnologia da Informação  
**Professor:** MSc Diego Fernando Maia  
**Período:** 2026/02  
**Aluno:** Kauã Palota

## Objetivo

Repositório com as soluções da Lista de Exercícios 01, do exercício 01 ao 56,
em linguagem C, priorizando soluções introdutórias, simples e didáticas.

## Estrutura

```text
lista-exercicios-01/
├── README.md
├── .gitignore
└── exercicios/
    ├── ex01.c
    ├── ex02.c
    ├── ...
    ├── ex55.c
    └── ex56.c
```

## Exercícios

| Exercício | Arquivo |
|---:|---|
| 01 | `exercicios/ex01.c` |
| 02 | `exercicios/ex02.c` |
| 03 | `exercicios/ex03.c` |
| 04 | `exercicios/ex04.c` |
| 05 | `exercicios/ex05.c` |
| 06 | `exercicios/ex06.c` |
| 07 | `exercicios/ex07.c` |
| 08 | `exercicios/ex08.c` |
| 09 | `exercicios/ex09.c` |
| 10 | `exercicios/ex10.c` |
| 11 | `exercicios/ex11.c` |
| 12 | `exercicios/ex12.c` |
| 13 | `exercicios/ex13.c` |
| 14 | `exercicios/ex14.c` |
| 15 | `exercicios/ex15.c` |
| 16 | `exercicios/ex16.c` |
| 17 | `exercicios/ex17.c` |
| 18 | `exercicios/ex18.c` |
| 19 | `exercicios/ex19.c` |
| 20 | `exercicios/ex20.c` |
| 21 | `exercicios/ex21.c` |
| 22 | `exercicios/ex22.c` |
| 23 | `exercicios/ex23.c` |
| 24 | `exercicios/ex24.c` |
| 25 | `exercicios/ex25.c` |
| 26 | `exercicios/ex26.c` |
| 27 | `exercicios/ex27.c` |
| 28 | `exercicios/ex28.c` |
| 29 | `exercicios/ex29.c` |
| 30 | `exercicios/ex30.c` |
| 31 | `exercicios/ex31.c` |
| 32 | `exercicios/ex32.c` |
| 33 | `exercicios/ex33.c` |
| 34 | `exercicios/ex34.c` |
| 35 | `exercicios/ex35.c` |
| 36 | `exercicios/ex36.c` |
| 37 | `exercicios/ex37.c` |
| 38 | `exercicios/ex38.c` |
| 39 | `exercicios/ex39.c` |
| 40 | `exercicios/ex40.c` |
| 41 | `exercicios/ex41.c` |
| 42 | `exercicios/ex42.c` |
| 43 | `exercicios/ex43.c` |
| 44 | `exercicios/ex44.c` |
| 45 | `exercicios/ex45.c` |
| 46 | `exercicios/ex46.c` |
| 47 | `exercicios/ex47.c` |
| 48 | `exercicios/ex48.c` |
| 49 | `exercicios/ex49.c` |
| 50 | `exercicios/ex50.c` |
| 51 | `exercicios/ex51.c` |
| 52 | `exercicios/ex52.c` |
| 53 | `exercicios/ex53.c` |
| 54 | `exercicios/ex54.c` |
| 55 | `exercicios/ex55.c` |
| 56 | `exercicios/ex56.c` |

## Compilação com GCC

Para compilar um exercício:

```bash
gcc exercicios/ex23.c -o ex23
./ex23
```

Nos exercícios que utilizam funções da biblioteca matemática (`math.h`),
é necessário adicionar `-lm` ao comando:

```bash
gcc exercicios/ex28.c -o ex28 -lm
./ex28
```

Isso também se aplica, por exemplo, aos exercícios que usam `sqrt()`.

## Observações

- Cada exercício está em um arquivo `.c` separado.
- Exercícios que pedem pseudocódigo ou explicação apresentam a resposta em comentários no próprio arquivo.
- O exercício 22 registra a diferença entre erro de sintaxe e divisão por zero.
- O exercício 28 mantém o uso de `M_PI` e fornece uma definição compatível quando ela não estiver disponível no ambiente GCC.
- Os programas foram mantidos em nível introdutório, com foco em clareza e nos recursos indicados pelos enunciados.

## Git

Exemplo de comandos para criar o repositório local e enviar ao GitHub:

```bash
git init
git add .
git commit -m "Adiciona Lista de Exercícios 01"
git branch -M main
git remote add origin <URL-DO-REPOSITORIO>
git push -u origin main
```
