Atividade M.A.P.A da faculdade da materia de Linguagem e Técnicas de Programação
#

O setor de restaurantes é marcado por uma grande demanda em nosso país. A tecnologia tem ajudado bastante em vários processos de um restaurante; ferramentas como gerenciamento de restaurante, reserva e pedidos estão cada vez mais modernas e com recursos inovadores.

Você, como engenheiro de software, foi designado a criar um sistema na linguagem C com objetivo de efetuar e listar reservas em um restaurante muito solicitado em sua cidade. Além do cadastro e listagem de reserva, o dono do restaurante precisa de uma funcionalidade na qual informa o total de pessoas que efetuaram reserva, para determinado dia para que sua compra de suprimentos seja mais assertiva.

As reservas são feitas por semana e os dias de trabalho do restaurante são: Quinta, Sexta, Sábado e Domingo.

Toda reserva deve armazenar então o nome do responsável pela reserva, o CPF, o dia da reserva (1 - Quinta, 2 - Sexta, 3 - Sábado, 4 - Domingo) e a quantidade de pessoas.

Para controlar essas funcionalidades, crie um menu com os respectivos comandos:

1 - Fazer Reserva.

2 - Listar Reserva.

3 - Total de Pessoas Por Dia.

4 - Sair.

Descrição das funcionalidades:

1 - Fazer Reserva - Fazer leitura do Nome, CPF, Dia da Reserva (1 - Quinta, 2 - Sexta, 3 - Sábado, 4 - Domingo) e Quantidade de Pessoas

2 - Listar Reservas - Listar todas reservas cadastradas no formato:

Nome: Rogério Napoleão Júnior

CPF: 123.123.123-11

Dia: 2

Número de Pessoas: 4

3 - Total de Pessoas por Dia - Digitar o Dia da Reserva, somar a quantidade de pessoas reservadas neste dia e mostrar na tela o total.

4 - Sair - Encerrar o programa

Requisitos:
- Todas essas funcionalidades devem utilizar sub-rotinas para melhor organizar o programa
- A sua atividade MAPA deve ser entregue em um arquivo de código-fonte para linguagem C (extensão .c).

Algumas funções que serão úteis durante o desenvolvimento do programa:
 
* system(“pause”) – chamada de sistema que “pausa” o programa e o faz aguardar pelo usuário;
* system(“cls”) – chamada de sistema que limpa os caracteres que foram impressos na tela anteriormente;
* fflush(stdin) – limpar o buffer do teclado. Essa função deve sempre ser utilizada após ter utilizado alguma função de entrada de dados como o scanf, gets, etc. Isso se dá pois em algumas situações o buffer do teclado mantém “lixo de memória”, prejudicando a próxima operação de entrada do programa;
* A função setlocale(LC_ALL, "Portuguese") da biblioteca locale.h pode ser útil, caso você queira que os acentos e pontuações da língua portuguesa sejam impressos corretamente.
