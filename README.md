# Super Trunfo de Cidades

Este programa em C simula um jogo Super Trunfo de cidades, permitindo que o usuário insira informações sobre duas cartas e compare seus atributos.

## Funcionalidades

* Cadastro de duas cartas com informações sobre cidades:
    * Estado (nome completo)
    * Código da Carta (ex: A01)
    * Nome da Cidade
    * População
    * Área (km²)
    * PIB
    * Número de Pontos Turísticos
* Exibição dos dados cadastrados de forma organizada.
* Comparação das cartas com base na população (pode ser facilmente modificado para outros atributos).
* Exibição do resultado da batalha, indicando qual carta venceu ou se houve empate.

## Como usar

1.  **Compilação:**
    * Certifique-se de ter um compilador C (como o gcc) instalado.
    * Compile o código usando o seguinte comando: `gcc supertrunfo.c -o supertrunfo`

2.  **Execução:**
    * Execute o programa com o comando: `./supertrunfo` (ou `supertrunfo.exe` no Windows).
    * Siga as instruções para inserir os dados das duas cartas.
    * O programa exibirá os dados cadastrados e o resultado da batalha.

## Modificando a Comparação

O código compara as cartas com base na população. Para modificar a comparação:

1.  Abra o arquivo `supertrunfo.c` em um editor de texto.
2.  Localize o bloco de código que realiza a comparação (após a exibição dos dados).
3.  Modifique as variáveis e a lógica de comparação de acordo com os atributos desejados (área, PIB, pontos turísticos, etc.).
