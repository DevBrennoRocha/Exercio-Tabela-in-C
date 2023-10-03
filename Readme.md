ATIVIDADE DE PROGRAMAÇÃO ESTRUTURADA - 25/09/2023
Elabore uma estrutura CONTA_BANCARIA (NUM_AGENCIA, NUMCONTA, NOME, SALDO).
Com a CONTA_BANCARIA.

Inicialmente, atribua as seguintes informações diretamente aos atributos da variável da estrutura:

Agência   Conta          Nome         Saldo
 001       1234    Valdir Domingues R$ 0,00

Utilizando a seguinte interface, elabora um algoritmo com o recurso de permanência de tela do
sistema, mantendo o algoritmo executando até que a opção 0, que é Sair do Sistema, for escolhido.

APP DO BANCO DA TURMA DE PROGRAMAÇÃO ESTRUTURADA
Oi, Sr. <Valdir Domingues> Agência: <001> | Conta: <1234>
[1] Depositar
[2] Sacar
[3] Saldo
[0] Sair do Sistema
Digite uma das opções acima: _

Quando o usuário escolher as opções 1, 2 e 3, deverão atender as seguintes funcionalidades:

 Opção 1: O usuário deverá informar o valor a ser adicionado no saldo da conta.
 Opção 2: O usuário deverá informar o valor a ser descontado do saldo da conta. Não pode
sacar valor acima do saldo. Caso isso ocorra, deverá informar ao usuário: “SALDO
INSUFICIENTE!”

 Opção 3: Deverá apresentar na tela os dados do usuário, inclusive o saldo atual.

Obs. 1: Qualquer opção diferente de 0, 1, 2 e 3, deverá informar: “OPÇÃO INVÁLIDA!”

Obs. 2: Faça uso da tabela ASCII para melhorar a interface do sistema.