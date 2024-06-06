#include "procedures.h"
void senha_menu_funcionario();
void senha_menu_cliente();
void sair_do_programa();

void menu_principal(){
	int x;
	system("cls");
	printf("\tMENU PRINCIPAL\n\n\t1-Funcionario\n\t2-Cliente\n\t3-Sair do programa\n\n\tDigite a opcao desejada: ");
	scanf("%d",&x);

	system("cls");
	if(x==0||x>3){
        printf("\n\tOpcao indisponivel\n\n\tAguarde enquanto de redirecionamos para o menu principal...");
        Sleep(2500);
        menu_principal();
        }
	switch (x)
	{
	case 1:
		senha_menu_funcionario();
		break;
	
	case 2:
		senha_menu_cliente();
		break;

	case 3:
		sair_do_programa();
	}
	if(x!=1&&x!=2&&x!=3){
	printf("opcao incorreta: \n");
	Sleep(1000);
	system("pause");
	menu_principal();
	}
}
void senha_menu_funcionario(){
    char senha[50];

    system("cls");
    printf("Digite a senha: ");
    scanf("%s",senha);

    if (strcmp(senha, SENHA_CORRETA) == 0){
        printf("\nSenha correta: \n");
        Sleep(1000);
        system("\npause");

        system("cls");
        menu_funcionario();
} else{
        system("cls");
        printf("Senha incorreta: \n");
        Sleep(1000);
        system("pause");

        menu_principal();

    }
}void senha_menu_cliente(){
    char senha[50];

    printf("Digite a senha: ");
    scanf("%s",senha);

    if (strcmp(senha, SENHA_CORRETA) == 0){
        printf("Senha correta: \n");
        Sleep(1000);
        system("pause");

        printf("\nEsse e o menu cliente");
    } else{
        system("cls");
        printf("Senha incorreta: \n");
        Sleep(1000);
        system("pause");

        menu_principal();

    }
}
void sair_do_programa(){
    system("cls");
    system("pause");
	exit(0);
}void menu_funcionario(){
    int x=0;
        printf("\tMENU FUNCIONARIO\n\n\t1-Abertura de conta\n\t2-Encerramento de conta\n\t3-Consultar dados\n\t4-Alterar dados\n\t5-Cadastro de funcionarios\n\t6-Gerar relatorios\n\t7-Sair\n\n\tDigite a opcao desejada: ");
        scanf("%d", &x);
        if(x==0||x>7){
        printf("\n\tOpcao indisponivel\n\n\tAguarde enquanto de redirecionamos para o menu do funcionario...");
        Sleep(2500);
        system("cls");
        menu_funcionario();
        }
        system("cls");
    switch (x)
    {
    case 1:
        abertura_de_conta();
        break;
    
    case 2:
        encerramento_de_conta();
        break;
    case 3:
        consultar_dados();
        break;
    case 4:
        break;
    case 5:
        cadastro_funcionario();
        break;
    case 6:
        break;
    case 7:
        system("cls");
        menu_principal();
        break;
    }
}

void abertura_de_conta(){
    int x=0;
    printf("\t1-ABERTURA DE CONTA\n\n\t1-Conta Poupanca-CP\n\t2-Conta Corrente-CC\n\t3-Voltar\n\n\tDigite a opcao desejada: ");
    scanf("%d",&x);
    system("cls");
    if(x==0||x>3){
        printf("\n\tOpcao indisponivel\n\n\tAguarde enquanto de redirecionamos para a abertura de conta novamente...");
        Sleep(2500);
        abertura_de_conta();
    }
    system("cls");
    switch (x)
    {
    case 1:
        conta_poupanca();
        break;
    
    case 2:
        conta_corrente();
        break;
    case 3:
        printf("Aguarde enquanto te redirecionamos para o menu do funcionario...");
        Sleep(2500);
        system("cls");
        menu_funcionario();
    }
}

void encerramento_de_conta() {
    consultar_arquivo_corrente();
    consultar_arquivo_poupanca();
    
    ler_senha_adm(SENHA_ADMIN);
    char numero_conta[10];

    printf("Digite a conta que deseja encerrar: ");
    fflush(stdin);
    scanf("%[^\n]", numero_conta);
    printf("\n");

    int conta_encontrada = -1; 
    int i, j;

    for (i = 0; i < i_poupanca; i++) {
        if (strcmp(numero_conta, CadPoup[i].n_conta) == 0) {
            Sleep(2000);
            conta_encontrada = i;
            for (j = conta_encontrada; j < i_poupanca - 1; j++) {
                CadPoup[j] = CadPoup[j + 1];
            }
            i_poupanca--; 
            reescrever_cpoupanca();
            break;
        }
    }

    if (conta_encontrada == -1) {
        for (i = 0; i < i_corrente; i++) {
            if (strcmp(numero_conta, CadCor[i].n_conta) == 0) {
                Sleep(2000);
                conta_encontrada = i;
                for (j = conta_encontrada; j < i_corrente - 1; j++) {
                    CadCor[j] = CadCor[j + 1];
                }
                i_corrente--;
                reescrever_ccorrente();
                break; 
            }
        }
    }


    if (conta_encontrada == -1) {
        printf("Conta não encontrada.\n");
    }
}
void consultar_dados(){
    int x=0;
    printf("\tCONSULTAR DADOS\n\n\t1-Consultar conta\n\t2-Consultar funcionario\n\t3-Consultar cliente\n\t4-Voltar\n\nDigite a opcao desjada: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        consultar_conta();
        break;
    
    case 2:
        consulta_func();        
        break;

    case 3:
        consultar_cliente();        
        break;
    case 4:
        Sleep(2000);
        menu_principal(); 
 }
}

void cadastro_funcionario(){
    int x=0;
    ler_senha_adm(SENHA_ADMIN);

    printf("\t\tCADASTRO DE FUNCIONARIO\n\n\t1-Cadastrar funcionario\n\t2-Voltar ao menu principal\n\n\tDigite a opcao desejada: ");
    scanf("%d",&x);

        switch (x)
        {
        case 1:
            case_cadastro_funcionario();
            cadastro_funcionario();
        case 2:{
        system("cls");
        printf("Aguarde...");
        Sleep(2500);
        menu_principal();
            break;
        }
    }
}