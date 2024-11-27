#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//while ((getchar()) != '\n');//Limpa o buffer de entrada,isso corrige o erro de não ser aceito a próxima entrada de dados

#define MAX_RESERVAS 100

typedef struct {    // Nesse tipo de struct evita de ficar colocando "struct" antes da variavel toda vez que for declarara
    char nome[50];
    char cpf[15];
    int dia;
    int quantidade;
} Reserva;

Reserva reservas[MAX_RESERVAS];
int totalReservas = 0;

void fazerReserva() {
    if (totalReservas < MAX_RESERVAS) {
        printf("Informe o nome do reservante: ");
        scanf(" %[^\n]", reservas[totalReservas].nome);
        printf("Informe o CPF do reservante: ");
        scanf(" %s", reservas[totalReservas].cpf);
        printf("Dia da Reserva (1 - Quinta, 2 - Sexta, 3 - Sábado, 4 - Domingo): ");
        scanf("%d", &reservas[totalReservas].dia);
        printf("Quantidade de pessoas na reserva: ");
        scanf("%d", &reservas[totalReservas].quantidade);
        totalReservas++;
    } else {
        printf("Limite de reservas atingido.\n");
    }
}

void listarReservas() {
    for (int i = 0; i < totalReservas; i++) {
        printf("Nome do reservante: %s\n", reservas[i].nome);
        printf("CPF do reservante: %s\n", reservas[i].cpf);
        printf("Dia da reserva: %d\n", reservas[i].dia);
        printf("Número de pessoas na reserva: %d\n", reservas[i].quantidade);
        printf("===============================\n");
    }
}

void totalPessoasPorDia() {
    int dia;
    printf("Digite o dia da reserva (1 - Quinta, 2 - Sexta, 3 - Sábado, 4 - Domingo): ");
    scanf("%d", &dia);

    int total = 0;
    for (int i = 0; i < totalReservas; i++) {
        if (reservas[i].dia == dia) {
            total += reservas[i].quantidade;
        }
    }
    printf("Total de pessoas no dia %d: %d\n", dia, total);
}

int main() {
    int opcao;
    do {
        printf("Menu:\n");
        printf("1 - Fazer Reserva\n");
        printf("2 - Listar Reservas\n");
        printf("3 - Total de Pessoas Por Dia\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system("clear");
                fazerReserva();
                break;
            case 2:
                system("clear");
                listarReservas();
                break;
            case 3:
                system("clear");
                totalPessoasPorDia();
                break;
            case 4:
                system("clear");
                printf("Encerrando o programa de reservas.\n");
                break;
            default:
                system("clear"); //LImpa a tela, clear para linux e cls para windows
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
