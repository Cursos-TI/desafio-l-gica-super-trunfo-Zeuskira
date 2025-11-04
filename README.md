# Super Trunfo de Países — Comparação com Dois Atributos

Este programa em C simula uma rodada avançada do jogo **Super Trunfo**, permitindo comparar duas cartas de países usando **dois atributos diferentes** escolhidos pelo jogador. O sistema compara cada atributo individualmente, depois soma os valores dos atributos escolhidos para decidir o vencedor final.

## 🧠 Funcionalidades

* Escolha de **dois atributos diferentes** para comparação
* **Menu dinâmico**: o segundo atributo não pode ser igual ao primeiro
* Atributos comparáveis:

  * População
  * Área
  * PIB
  * Pontos turísticos
  * Densidade demográfica (menor valor vence)
* **Comparação individual e soma final dos atributos**
* Tratamento de erros (opções inválidas)
* Exibição completa do resultado

## 🛠 Como compilar e executar

### ✅ Pré-requisitos

* Compilador GCC instalado

### 📦 Compilar

```bash
gcc logicaSuperTrunfo.c -o supertrunfo
```

### ▶️ Executar

```bash
./supertrunfo
```

## 📋 Exemplo de uso (menu)

Ao iniciar, você verá:

```
***Menu de comparação das cartas***

Escolha um atributo para comparar:
1. População
2. Área
3. PIB
4. Número de Pontos Turísticos
5. Densidade Demográfica
Opção: _
```

Após escolher, por exemplo, **1 (População)**, as opções do segundo menu serão:

```
2 - Area
3 - PIB
4 - Pontos Turisticos
5 - Densidade Demografica
Opção: _
```

> O programa remove automaticamente a opção já usada.

## ✅ Exemplos de atributos comparados

Se você escolher:

* **Primeiro atributo:** População
* **Segundo atributo:** PIB

O programa mostrará:

```
Comparação dos atributos escolhidos:
População: Brasil vs Argentina
PIB: Brasil vs Argentina

Soma dos atributos escolhidos:
Brasil -> população + PIB = valor
Argentina -> população + PIB = valor

Resultado final: Brasil vence!
```

## 📎 Atributos disponíveis

| Código | Atributo              | Regra           |
| ------ | --------------------- | --------------- |
| 1      | População             | Maior vence     |
| 2      | Área                  | Maior vence     |
| 3      | PIB                   | Maior vence     |
| 4      | Pontos Turísticos     | Maior vence     |
| 5      | Densidade Demográfica | **Menor vence** |

## 💬 Observações

* O programa já usa valores pré-definidos para **Brasil e Argentina**
* Não é permitido repetir o atributo na segunda escolha
* Foram tratadas as **20 combinações possíveis** de atributos

## 👨‍💻 Autor

Projeto de estudo sobre condicionais avançadas e lógica de jogo em C.

Bom jogo e bons estudos! 🇧🇷⚔️🇦🇷
