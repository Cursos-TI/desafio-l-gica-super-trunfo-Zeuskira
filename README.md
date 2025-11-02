# Super Trunfo de Países — Comparador de Cartas

Este programa em C simula a comparação de cartas do jogo **Super Trunfo**, utilizando países como tema. O usuário insere os dados de dois países e, em seguida, escolhe um atributo para comparar, recebendo o resultado indicando qual país vence ou se houve empate.

## 🧠 Funcionalidades

* Entrada de dados para dois países
* Atributos comparados:

  * População
  * Área
  * PIB
  * Número de Pontos Turísticos
  * Densidade Demográfica (calculada automaticamente)
* Sistema de menu para escolher o atributo a ser comparado
* Exibição do vencedor ou empate

## 🛠 Como compilar e executar

### Pré-requisitos

* Compilador **GCC** instalado

### Passos

1. Compile o programa:

   ```bash
   ```

gcc logicaSuperTrunfo.c -o supertrunfo

````
2. Execute o programa:
   ```bash
./supertrunfo
````

## 📌 Exemplo de uso

### Entrada do usuário

```
Digite o nome do páis da carta 1: Brasil
Digite a população do páis da carta 1: 210000000
Digite a área do páis da carta 1: 8516000
Digite o PIB do páis da carta 1: 1800
Digite o número de pontos turísticos do páis da carta 1: 20

Digite o nome do páis da carta 2: Argentina
Digite a população do páis da carta 2: 45000000
Digite a área do páis da carta 2: 2780000
Digite o PIB do páis da carta 2: 450
Digite o número de pontos turísticos do páis da carta 2: 15
```

### Menu exibido

```
***Menu de comparação das cartas***
Escolha um atributo para comparar:
1. População
2. Área
3. PIB
4. Número de Pontos Turísticos
5. Densidade Demográfica
Opção:
```

### Resultado esperado (exemplo)

```
Atributo escolhido: População.
Carta 1 - Brasil: 210000000 habitantes
Carta 2 - Argentina: 45000000 habitantes
Brasil vence com uma população de 210000000, maior que Argentina.
```

## 📎 Atributos disponíveis para comparação

| Código | Atributo              | Tipo                     |
| ------ | --------------------- | ------------------------ |
| 1      | População             | Quanto maior, melhor     |
| 2      | Área                  | Quanto maior, melhor     |
| 3      | PIB                   | Quanto maior, melhor     |
| 4      | Pontos Turísticos     | Quanto maior, melhor     |
| 5      | Densidade Demográfica | **Quanto menor, melhor** |

## ✅ Observações

* Este programa segue a lógica do jogo Super Trunfo.
* A densidade demográfica é calculada como:

```
densidade = população / área
```

## 👨‍💻 Autor

Projeto para prática de programação em C.

---

Sinta-se à vontade para melhorar o código e estender o jogo! 🎮🇧🇷
