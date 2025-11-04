#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <cstdio>
// Dados do Endereço

struct Endereco {
    char cep[11];
    char rua[100];
    char numero[10];
    char complemento[50];
    char bairro[100];
    char cidade[100];
    char estado[3];

};
// Dados da Data de nascimento

struct Data {
    int dia;
    int mes;
    int ano_atual;
    int ano;
    int idade;
};
// Dados do Cliente

struct Cliente { // STRUCT é como se fosse um componente que guarda muitas informações.
    char nome[100];
    char cpf[16];
    char sexo;
    char telefone[16];
    char email[50];
    int status;
    double deposito;
    double saque;
    double saldo;
    char agencia[4];

};
// As estruturas acimas devem ser posicionadas estratégicamente para serem lidas em ordem
int main() {
    int op, op1; //Variável do switch
    int c; //Variável de limpeza
    //Chamando os dados do endereço
    struct Endereco endereco;
    //Chamando os dados das Datas
    struct Data nascimento;
    //Chamando os dados do cliente
    struct Cliente cliente;
    cliente.saldo = 0.0;
    do {
        printf("\n  \n Selecione um dos servicos abaixo. ");
        printf("\n \n  1-CADASTRAR MINHA CONTA");
        printf("\n \n  2-CONSULTAR MEUS DADOS");
        printf("\n \n  3-CONSULTAR SALDO");
        printf("\n \n  4- EXECUTAR DEPOSITO");
        printf("\n \n  5- EXECUTAR SAQUE");
        printf("\n \n  6- EXIBIR EXTRATO DE OPERACOES");
        printf("\n \n  7-ENCERRAR MINHA CONTA EXISTENTE");
        printf("\n \n  8- SAIR");
        printf("\n \n OPCAO: ");
        scanf("%d", &op);
        //Limpeza de espaço
        while ((c=getchar()) !='\n'&& c != EOF);

        switch (op){
            case 1: printf("\n Selecionado: Cadastro de nova conta \n");

                printf("\n Insira os dados manualmente abaixo. \n");

                printf("\n Nome Completo: \n");
                //fgets significa "file get string" (obter string de um arquivo).
                fgets(cliente.nome,sizeof(cliente.nome),stdin);

                printf("\n Data de nascimento: \n");
                printf("\n Dia: \n");
                scanf("%d", &nascimento.dia);
                printf("\n Mes: \n");
                scanf("%d", &nascimento.mes);
                printf("\n Ano: \n");
                scanf("%d", &nascimento.ano);

                //Essa linha de código abaixo serve para limpar o "lixo" do buffer de entrada do teclado (o stdin).
                while ((c = getchar()) != '\n' &&c != EOF);

                nascimento.ano_atual = 2025;
                nascimento.idade = nascimento.ano_atual - nascimento.ano;

                printf(" CPF (somente numeros) \n ");
                fgets(cliente.cpf,sizeof(cliente.cpf),stdin);

                printf("\n Sexo M ou F:\n");
                scanf(" %c", &cliente.sexo);

                while ((c = getchar()) != '\n' && c != EOF);

                printf("\n Digite seu telefone: ");
                fgets(cliente.telefone,sizeof(cliente.telefone),stdin);

                printf("\n Digite seu email: ");
                fgets(cliente.email,sizeof(cliente.email),stdin);

                printf("\n Digite Seu CEP:\n");
                fgets(endereco.cep,sizeof(endereco.cep),stdin);


                printf("\n Digite Sua rua:\n");
                fgets(endereco.rua,sizeof(endereco.rua),stdin);

                printf("\n Digite o numero:\n");
                fgets(endereco.numero,sizeof(endereco.numero),stdin);

                printf("\n Complemento:\n");
                fgets(endereco.complemento,sizeof(endereco.complemento),stdin);

                printf("\n Digite Seu bairro:\n");
                fgets(endereco.bairro,sizeof(endereco.bairro),stdin);

                printf("\n Digite Sua cidade:\n");
                fgets(endereco.cidade,sizeof(endereco.cidade),stdin);

                printf("\n Digite Seu Estado:\n");
                fgets(endereco.estado,sizeof(endereco.estado),stdin);





                // TIPO CHAR(string) = %S, TIPO FLOAT = %F; TIPO INT = %D; TIPO CHAR (caractere único) = %c.
                printf("\n--- DADOS REGISTRADOS ---\n");
                printf("Nome: %s\n",cliente.nome);
                printf("Idade: %d\n",nascimento.idade);
                printf("CPF: %s\n",cliente.cpf);
                printf("Sexo: %c\n \n",cliente.sexo);
                printf("Telefone: %s\n \n",cliente.telefone);
                printf("Email: %s\n \n",cliente.email);
                printf("Endereco: %s, %s, %s, %s, %s, %s, %s \n", endereco.cep,endereco.rua, endereco.numero, endereco.complemento, endereco.bairro, endereco.cidade, endereco.estado);
                printf("\nVerifique suas informacoes.\n");
                break;
            case 2: printf("\n Selecionado: Consultar meus dados \n");
                printf("Nome: %s\n",cliente.nome);
                printf("Idade: %d\n",nascimento.idade);
                printf("CPF: %s\n",cliente.cpf);
                printf("Sexo: %c\n \n",cliente.sexo);
                printf("Telefone: %s\n \n",cliente.telefone);
                printf("Email: %s\n \n",cliente.email);
                printf("Endereco: %s, %s, %s, %s, %s, %s, %s \n", endereco.cep,endereco.rua, endereco.numero, endereco.complemento, endereco.bairro, endereco.cidade, endereco.estado);
                break;
            case 3: printf("\n Selecionado: Consultar saldo \n");
                printf("\n Saldo disponivel: %.2lf ", cliente.saldo);
                break;
            case 4: printf("\n Selecionado: Executar deposito \n");
                //Variaveis temporarias para não sobreescreveer o que ja foi escrito
                char nome_destino[100];
                char cpf_destino[16];
                char agencia_destino[4];
                printf("\n Digite os dados da conta em que se deseja realizar o deposito \n");
                printf("\nNome completo do titular: ");
                fgets(nome_destino,sizeof(nome_destino),stdin);
                printf("\nCPF do titular: ");
                fgets(cpf_destino,sizeof(cpf_destino),stdin);
                printf("\nAgencia Bancaria: ");
                fgets(agencia_destino,sizeof(agencia_destino),stdin);
                while ((c = getchar()) != '\n' &&c != EOF);
                printf("\nInsira o valor que deseja depositar: R$");
                scanf("%lf", &cliente.deposito);
                // Remove a quebra de linha do nome
                cliente.nome[strcspn(cliente.nome, "\n")] = '\0';
                printf("\nDeseja depositar R$%.2lf para %s?", cliente.deposito, nome_destino);
                printf("\n1 - Sim ");
                printf("\n2 - Nao");
                printf("\n \n OPCAO: ");
                scanf("%d", &op1);
                while ((c=getchar()) !='\n'&& c != EOF);
                switch (op1) {
                    case 1:
                        cliente.saldo = cliente.saldo + cliente.deposito;
                        printf("Deposito concluido! Saldo atual: R$%.2lf", cliente.saldo);
                        break;
                    case 2:printf("Retornando ao menu...aguarde");
                        break;}
                break;
            case 5: printf("\n Selecionado: Executar saque \n ");
                //Variaveis temporarias para não sobreescreveer o que ja foi escrito
                char nome_temp[100];
                char cpf_temp[16];
                char agencia_temp[4];
                printf("\nDigite o nome completo do titular: ");
                fgets(nome_temp,sizeof(nome_temp),stdin);
                printf("\nCPF do titular: ");
                fgets(cpf_temp,sizeof(cpf_temp),stdin);
                printf("\nAgencia Bancaria: ");
                fgets(agencia_temp,sizeof(agencia_temp), stdin);
                while ((c=getchar()) !='\n'&& c != EOF);
                printf("\nInforme o valor que deseja sacar: R$");
                scanf("%lf", &cliente.saque);
                // Remove a quebra de linha do nome
                cliente.nome[strcspn(cliente.nome, "\n")] = '\0';
                printf("Ola %s! Deseja realizar o saque de R$%.2lf?", cliente.nome, cliente.saque);
                printf("\n 1- Sim");
                printf("\n 2- Nao");
                printf("\n \n OPCAO: ");
                scanf("%d",&op1);
                while ((c=getchar()) !='\n'&& c != EOF);
                switch (op1) {
                    case 1:
                        if (cliente.saque> cliente.saldo)
                            printf("\nSaldo insuficiente. Voce tem R$%.2lf. Tente novamente", cliente.saldo);
                        else {
                            cliente.saldo = cliente.saldo - cliente.saque;
                            printf("\n Saque concluido com sucesso! Saldo restante: R$%.2lf", cliente.saldo);
                        }
                        break;
                    case 2:printf("Retornando ao menu...aguarde");
                         }
                break;
            case 6:printf("\nSelecionado: Exibir extrato de operacoes\n ");
               if (cliente.deposito > 0) {
                   printf("\n Ultimo Deposito realizado:  +R$%.2lf", cliente.deposito);
               }
               if (cliente.saque >0) {
                   printf("\n Ultimo Saque realizado:  -R$%.2lf", cliente.saque);
               }
                if (cliente.deposito >0 && cliente.saque >0) {
                    printf("\n Saldo Atual: R$%.2lf", cliente.saldo);
                }
                break;
            case 7: printf("\nSelecionado: Encerrar minha conta existente");
                break;
            case 8: printf("\nObrigado por usar o nosso banco. Saindo...");
                break;
            default:printf("\n Opcao invalida. Tente novamente. \n");
        }
    } while (op != 8);
    return 0;

}
