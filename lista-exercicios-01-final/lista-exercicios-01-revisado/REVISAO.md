# Revisão dos 56 exercícios

## Resultado da compilação

Os 56 exercícios foram revisados individualmente com GCC usando `-std=c11 -Wall -Wextra -pedantic`.

- **48 exercícios executáveis**: compilam e fazem link corretamente.
- **8 exercícios conceituais**: são propositalmente compostos apenas por comentários, porque o enunciado pede pseudocódigo/explicação e orienta a não inventar um programa. São eles: ex01, ex03, ex05, ex10, ex11, ex12, ex20 e ex21.
- Os exercícios que usam funções matemáticas (`ex28`, `ex37` e `ex48`) devem ser compilados com `-lm`.

## Ajustes realizados

### ex15
Simplificada a validação da entrada para `scanf("%d", &numero)`, evitando uma validação excessivamente rígida com `%c` que poderia rejeitar espaços ou quebras de linha após o número.

## Pontos observados

- **ex07** usa `sleep()` e `unistd.h`; funciona normalmente em ambientes POSIX/Linux. Em Windows, seria necessária adaptação.
- **ex12 e ex50** usam faixas convencionais para classificação de IMC. O enunciado pede classificação, mas não fornece uma tabela específica; portanto, as faixas adotadas são uma suposição didática.
- **ex28, ex37 e ex48** exigem `-lm` na compilação/linkedição.
- **ex23** produz `5`, `5`, `7`, conforme esperado.
- **ex39** resulta em `12`, por causa da divisão inteira.
- **ex45** termina com `a = 6`, `b = 9` e `c = 14`.
- **ex07** é intencionalmente um ciclo contínuo, conforme solicitado pelo exercício.

## Conclusão

Não foram encontrados erros de lógica ou compilação que impeçam a entrega. A única correção de código recomendada foi aplicada ao `ex15`. Os oito exercícios conceituais não devem receber `main()` artificialmente.
