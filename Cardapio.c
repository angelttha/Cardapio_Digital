
#include <stdio.h>

int main() {
    int opcao;
    double total = 0.0;

    do {
        printf("\n=======================================\n");
        printf("       LANCHONETE SABOR & CIA\n");
        printf("           CARDÁPIO DIGITAL\n");
        printf("=======================================\n");

        printf("\n=== LANCHES ===\n");
        printf("1 - X-Burguer ................. R$ 23,99\n");
        printf("2 - X-Salada .................. R$ 25,99\n");
        printf("3 - X-Bacon ................... R$ 27,99\n");
        printf("4 - X-Tudo .................... R$ 29,99\n");
        printf("5 - X-Calabresa ............... R$ 24,99\n");
        printf("6 - X-Frango .................. R$ 26,99\n");

        printf("\n=== PORÇÕES ===\n");
        printf("7 - Batata Frita .............. R$ 15,99\n");
        printf("8 - Nuggets ................... R$ 16,99\n");
        printf("9 - Onion Rings ............... R$ 14,99\n");
        printf("10 - Calabresa Acebolada ...... R$ 19,99\n");
        printf("11 - Frango a Passarinho ...... R$ 21,99\n");
        printf("12 - Mandioca Frita ........... R$ 17,99\n");

        printf("\n=== BEBIDAS ===\n");
        printf("13 - Coca-Cola 2L ............. R$ 18,00\n");
        printf("14 - Fanta Laranja 2L ......... R$ 16,00\n");
        printf("15 - Fanta Uva 2L ............. R$ 16,00\n");
        printf("16 - Pepsi 2L ................. R$ 16,00\n");
        printf("17 - Guarana Antarctica 2L .... R$ 14,00\n");
        printf("18 - Dolly Guarana 2L ......... R$ 8,00\n");
        printf("19 - Refrigerante em Lata ..... R$ 8,00\n");
        printf("20 - Suco Natural ............. R$ 12,00\n");
        printf("21 - Agua Mineral 600ml ....... R$ 4,00\n");

        printf("\n=== SOBREMESAS ===\n");
        printf("22 - Sorvete .................. R$ 10,00\n");
        printf("23 - Milk-Shake ............... R$ 12,99\n");

        printf("\n0 - Finalizar pedido\n");
        printf("=======================================\n");
        printf("Digite o numero da opcao desejada: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida! Digite apenas numeros.\n");

            int caractere;
            while ((caractere = getchar()) != '\n' &&
                   caractere != EOF) {
            }

            opcao = -1;
            continue;
        }

        switch (opcao) {
            case 0:
                printf("Finalizando seu pedido...\n");
                break;

            case 1:
                printf("Voce selecionou X-Burguer.\n");
                total += 23.99;
                break;

            case 2:
                printf("Voce selecionou X-Salada.\n");
                total += 25.99;
                break;

            case 3:
                printf("Voce selecionou X-Bacon.\n");
                total += 27.99;
                break;

            case 4:
                printf("Voce selecionou X-Tudo.\n");
                total += 29.99;
                break;

            case 5:
                printf("Voce selecionou X-Calabresa.\n");
                total += 24.99;
                break;

            case 6:
                printf("Voce selecionou X-Frango.\n");
                total += 26.99;
                break;

            case 7:
                printf("Voce selecionou Batata Frita.\n");
                total += 15.99;
                break;

            case 8:
                printf("Voce selecionou Nuggets.\n");
                total += 16.99;
                break;

            case 9:
                printf("Voce selecionou Onion Rings.\n");
                total += 14.99;
                break;

            case 10:
                printf("Voce selecionou Calabresa Acebolada.\n");
                total += 19.99;
                break;

            case 11:
                printf("Voce selecionou Frango a Passarinho.\n");
                total += 21.99;
                break;

            case 12:
                printf("Voce selecionou Mandioca Frita.\n");
                total += 17.99;
                break;

            case 13:
                printf("Voce selecionou Coca-Cola 2L.\n");
                total += 18.00;
                break;

            case 14:
                printf("Voce selecionou Fanta Laranja 2L.\n");
                total += 16.00;
                break;

            case 15:
                printf("Voce selecionou Fanta Uva 2L.\n");
                total += 16.00;
                break;

            case 16:
                printf("Voce selecionou Pepsi 2L.\n");
                total += 16.00;
                break;

            case 17:
                printf("Voce selecionou Guarana Antarctica 2L.\n");
                total += 14.00;
                break;

            case 18:
                printf("Voce selecionou Dolly Guarana 2L.\n");
                total += 8.00;
                break;

            case 19:
                printf("Voce selecionou Refrigerante em Lata.\n");
                total += 8.00;
                break;

            case 20:
                printf("Voce selecionou Suco Natural.\n");
                total += 12.00;
                break;

            case 21:
                printf("Voce selecionou Agua Mineral 600ml.\n");
                total += 4.00;
                break;

            case 22:
                printf("Voce selecionou Sorvete.\n");
                total += 10.00;
                break;

            case 23:
                printf("Voce selecionou Milk-Shake.\n");
                total += 12.99;
                break;

            default:
                printf("Opcao invalida! Escolha de 0 a 23.\n");
                break;
        }

        if (opcao >= 1 && opcao <= 23) {
            printf("Total parcial: R$ %.2f\n", total);
        }

    } while (opcao != 0);

    printf("\n=======================================\n");
    printf("         PEDIDO FINALIZADO\n");
    printf("=======================================\n");
    printf("Total da compra: R$ %.2f\n", total);
    printf("Obrigado por comprar conosco!\n");

    return 0;
}
