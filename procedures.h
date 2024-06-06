
#include "bibli.h"


void conta_poupanca(){
    int x=0;
    printf("\tCONTA POUPANCA\n\n\t1-Agencia\n\t2-Numero da conta\n\t3-Nome do cliente\n\t4-CPF do cliente\n\t5-Data de nascimento\n\t6-Telefone de contato\n\t7-Endereco do cliente\n\t8-CEP\n\t9-Local\n\t10-Numero da casa\n\t11-Bairro\n\t12-Cidade\n\t13-Estado\n\t14-Senha do cliente\n\t15-Saldo do cliente\n\t0-Concluir\n\n\tDigite a opcao desejada: ");
    scanf("%d",&x);
    if(x>16){
        printf("\n\tOpcao indisponivel\n\n\tAguarde enquanto de redirecionamos para o menu de conta poupanca novamente...");
        Sleep(2500);
        conta_poupanca();
    }ler_indice_poupanca(&i_poupanca);
    system("cls");
    switch (x)
    {
    x=0;
       
    case 1:
        rec_poup_agencia(i_poupanca);
        conta_poupanca();
        break;
    case 2:
        rec_poup_nconta(i_poupanca);
        conta_poupanca();
        break;
    case 3:
        rec_poup_nome(i_poupanca);
        conta_poupanca();
        break;
    case 4:
        rec_poup_cpf(i_poupanca);
        conta_poupanca();
        break;
   
    case 5:
        rec_poup_nasc(i_poupanca);
        conta_poupanca();
        break; 
    case 6:
        rec_poup_tel(i_poupanca);
        conta_poupanca();
        break; 
    case 7:
        rec_poup_end(i_poupanca);
        conta_poupanca();
        break;
    case 8:
        rec_poup_cep(i_poupanca);
        conta_poupanca();
        break;
    case 9:
        rec_poup_loc(i_poupanca);
        conta_poupanca();
        break;
    case 10:
        rec_poup_ncasa(i_poupanca);
        conta_poupanca();
        break;
    case 11:
        rec_poup_bairro(i_poupanca);
        conta_poupanca();
        break;
    case 12:
        rec_poup_cid(i_poupanca);
        conta_poupanca();
        break;
    case 13:
        rec_poup_est(i_poupanca);
        conta_poupanca();
        break;
    case 14:
        rec_poup_scli(i_poupanca);
        conta_poupanca();
        break;
    case 15:
        rec_poup_saldo(i_poupanca);
        conta_poupanca();
        break;
    case 0:
        gravar_dados_poup(i_poupanca);
        i_poupanca++;
        sal_indice_poupanca(i_poupanca);
        abertura_de_conta();
        break;
    }
}

void rec_poup_agencia(int i_poupanca){
    system("cls");
    printf("\t1-Agencia\n\n\tDigite a agencia do novo cliente: ");
    fflush(stdin);
    scanf("%d", &CadPoup[i_poupanca].agencia);
    printf("\n");

}void rec_poup_nconta(int i_poupanca){
    system("cls");
    printf("\t2-Numero da conta\n\n\tDigite o numero da nova conta: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i_poupanca].n_conta);
    printf("\n");

}void rec_poup_nome(int i_poupanca){
    system("cls");
    printf("\t3-Nome do cliente\n\n\tDigite o nome do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i_poupanca].nome);
    printf("\n");

}void rec_poup_cpf(int i_poupanca){
    printf("\n");
    system("cls");
    printf("\t4-CPF do cliente\n\n\tDigite o CPF: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i_poupanca].cpf);
    printf("\n");

}void rec_poup_nasc(int i_poupanca){
    system("cls");
    printf("\t5-Data de nascimento do cliente\n\n\tDigite a data de nascimento (dia mês ano): ");
    fflush(stdin);
    scanf("%d %d %d", &CadPoup[i_poupanca].nasc.dia, &CadPoup[i_poupanca].nasc.mes, &CadPoup[i_poupanca].nasc.ano);
    printf("\n");

}void rec_poup_tel(int i_poupanca){
    system("cls");
    printf("\t6-Telefone do cliente\n\n\tDigite o telefone de contato do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i_poupanca].telefone);
    printf("\n");

}void rec_poup_end(int i_poupanca){
    system("cls");
    printf("\t7-Endereco do cliente\n\n\tDigite o endereco do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i_poupanca].endereco);
    printf("\n");

}void rec_poup_cep(int i_poupanca){
    system("cls");
    printf("\t8-CEP do cliente\n\n\tDigite o CEP do endereco: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i_poupanca].cep);
    printf("\n");

}void rec_poup_loc(int i_poupanca){
    system("cls");
    printf("\t9- Local da residencia do cliente\n\n\tDigite O local: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i_poupanca].local);
    printf("\n");

}void rec_poup_ncasa(int i_poupanca){
    system("cls");
    printf("\t10-Numero da casa\n\n\tDigite o numero da casa: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i_poupanca].n_casa);
    printf("\n");

}void rec_poup_bairro(int i_poupanca){
    system("cls");
    printf("\t11-Bairro\n\n\tDigite o bairro: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i_poupanca].bairro);
    printf("\n");

}void rec_poup_cid(int i_poupanca){
    system("cls");
    printf("\t12-Cidade\n\n\tDigite a cidade: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i_poupanca].cidade);
    printf("\n");

}void rec_poup_est(int i_poupanca){
    system("cls");
    printf("\t13-Estado\n\n\tDigite o estado: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i_poupanca].estado);
    printf("\n");

}void rec_poup_scli(int i_poupanca){
    system("cls");
    printf("\t14-Senha do cliente\n\n\tDigite a senha do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadPoup[i_poupanca].senha_cliente);
    printf("\n");

}void rec_poup_saldo(int i_poupanca){
    system("cls");
    printf("\t15-Saldo do cliente:\n\n\tDigite o saldo do cliente: ");
    fflush(stdin);
    scanf("%f", &CadPoup[i_poupanca].saldo);
}

    void gravar_dados_poup(int i_poupanca){
    system("cls");
    FILE *arq;
    
    arq=fopen("contas poupancas.txt","a");
    
    if(arq==NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }else{
    fprintf(arq,"\n\tAgencia: %d\n\tNumero da conta: %s\n\tNome do cliente: %s\n\tCPF do cliente: %s\n\tData de Nascimento: %d/%d/%d\n\tTelefone do cliente: %s\n\tEndereco do cliente: %s\n\tCEP do cliente: %s\n\tLocal: %s\n\tNumero da casa: %s\n\tBairro: %s\n\tCidade: %s\n\tEstado: %s\n\tSenha do cliente: %s\n\tSaldo: %f\n\n",CadPoup[i_poupanca].agencia,CadPoup[i_poupanca].n_conta,CadPoup[i_poupanca].nome,CadPoup[i_poupanca].cpf,CadPoup[i_poupanca].nasc.dia,CadPoup[i_poupanca].nasc.mes,CadPoup[i_poupanca].nasc.ano,CadPoup[i_poupanca].telefone,CadPoup[i_poupanca].endereco,CadPoup[i_poupanca].cep,CadPoup[i_poupanca].local,CadPoup[i_poupanca].n_casa,CadPoup[i_poupanca].bairro,CadPoup[i_poupanca].cidade,CadPoup[i_poupanca].estado,CadPoup[i_poupanca].senha_cliente,CadPoup[i_poupanca].saldo);
    printf("Dados gravados com sucesso");
    }
    fclose(arq);
   

    Sleep(2500);
    system("cls");
 }


void conta_corrente(){
    int x=0;
    printf("\tCONTA CORRENTE\n\n\t1-Agencia\n\t2-Numero da conta\n\t3-Limite da conta\n\t4-Data de vencimento\n\t5-Nome do cliente\n\t6-CPF do cliente\n\t7-Data de nascimento\n\t8-Telefone de contato\n\t9-Endereco do cliente\n\t10-CEP\n\t11-Local\n\t12-Numero da casa\n\t13-Bairro\n\t14-Cidade\n\t15-Estado\n\t16-Senha do cliente\n\t17-Saldo\n\t0-Concluir\n\n\tDigite a opcao desejada: ");
    scanf("%d",&x);
    if(x>17){
        printf("\n\tOpcao indisponivel\n\n\tAguarde enquanto de redirecionamos para o menu de conta corrente novamente...");
        Sleep(2500);
        conta_corrente();
    }
    system("cls");
    switch (x)
    { 
    x=0;
        
    case 1:
        rec_cor_agencia(i_corrente);
        conta_corrente();
        break;
    case 2:
        rec_cor_nconta(i_corrente);
        conta_corrente();
        break;
    case 3:
        rec_cor_limconta(i_corrente);
        conta_corrente();
        break;
    case 4:
        rec_cor_datavenc(i_corrente);
        conta_corrente();
        break;
    case 5:
        rec_cor_nome(i_corrente);
        conta_corrente();
        break;
    case 6:
        rec_cor_cpf(i_corrente);
        conta_corrente();
        break;
    case 7:
        rec_cor_nasc(i_corrente);
        conta_corrente();
        break;
    case 8:
        rec_cor_tel(i_corrente);
        conta_corrente();
        break;
    case 9:
        rec_cor_end(i_corrente);
        conta_corrente();
        break;
    case 10:
        rec_cor_cep(i_corrente);
        conta_corrente();
        break;
    case 11:
        rec_cor_loc(i_corrente);
        conta_corrente();
        break;
    case 12:
        rec_cor_ncasa(i_corrente);
        conta_corrente();
        break;
    case 13:
        rec_cor_bairro(i_corrente);
        conta_corrente();
        break;
    case 14:
        rec_cor_cid(i_corrente);
        conta_corrente();
        break;
    case 15:
        rec_cor_est(i_corrente);
        conta_corrente();
        break;
    case 16:
        rec_cor_scli(i_corrente);
        conta_corrente();
        break;
    case 17:
        rec_cor_saldo(i_corrente);
        conta_corrente();
    case 0:
        gravar_dados_cor(i_corrente);
        i_corrente++;
        abertura_de_conta();
        break;
    }
}

void rec_cor_agencia(int i_corrente){
    system("cls");
    printf("\t1-Agencia\n\n\tDigite a agencia do novo cliente: ");
    fflush(stdin);
    scanf("%d", &CadCor[i_corrente].agencia);
    printf("\n");

}void rec_cor_limconta(int i_corrente){
    system("cls");
    printf("\n\t3-Limite\n\n\tDigite o limite da conta: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i_corrente].lim_cont);
    printf("\n");

}void rec_cor_datavenc(int i_corrente){
    system("cls");
    printf("\t4-Data de vencimento\n\n\tDigite a data de vencimento: ");
    fflush(stdin);
    scanf("%d %d %d", &CadCor[i_corrente].venc.dia, &CadCor[i_corrente].venc.mes, &CadCor[i_corrente].venc.ano);

}void rec_cor_nconta(int i_corrente){
    system("cls");
    printf("\t2-Numero da conta\n\n\tDigite o numero da nova conta: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i_corrente].n_conta);
    printf("\n");

}void rec_cor_nome(int i_corrente){
    system("cls");
    printf("\t5-Nome do cliente\n\n\tDigite o nome do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i_corrente].nome);
    printf("\n");

}void rec_cor_cpf(int i_corrente){
    system("cls");
    printf("\t6-CPF do cliente\n\n\tDigite o CPF: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i_corrente].cpf);
    printf("\n");

}void rec_cor_nasc(int i_corrente){
    system("cls");
    printf("\t-7-Data de nascimento do cliente\n\n\tDigite a data de nascimento (dia mês ano): ");
    fflush(stdin);
    scanf("%d %d %d", &CadCor[i_corrente].nasc.dia, &CadCor[i_corrente].nasc.mes, &CadCor[i_corrente].nasc.ano);

}void rec_cor_tel(int i_corrente){
    system("cls");
    printf("\t8-Telefone do cliente\n\n\tDigite o telefone de contato do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i_corrente].telefone);
    printf("\n");

}void rec_cor_end(int i_corrente){
    system("cls");
    printf("\t9-Endereco do cliente\n\n\tDigite o endereco do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i_corrente].endereco);
    printf("\n");

}void rec_cor_cep(int i_corrente){
    system("cls");
    printf("\t10-CEP do cliente\n\n\tDigite o CEP do endereco: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i_corrente].cep);
    printf("\n");

}void rec_cor_loc(int i_corrente){
    system("cls");
    printf("\t11- Local da residencia do cliente\n\n\tDigite O local: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i_corrente].local);
    printf("\n");

}void rec_cor_ncasa(int i_corrente){
    system("cls");
    printf("\t12-Numero da casa\n\n\tDigite o numero da casa: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i_corrente].n_casa);
    printf("\n");

}void rec_cor_bairro(int i_corrente){
    system("cls");
    printf("\t13-Bairro\n\n\tDigite o bairro: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i_corrente].bairro);
    printf("\n");

}void rec_cor_cid(int i_corrente){
    system("cls");
    printf("\t14-Cidade\n\n\tDigite a cidade: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i_corrente].cidade);
    printf("\n");

}void rec_cor_est(int i_corrente){
    system("cls");
    printf("\t15-Estado\n\n\tDigite o estado: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i_corrente].estado);
    printf("\n");

}void rec_cor_scli(int i_corrente){;
    system("cls");
    printf("\t16-Senha do cliente\n\n\tDigite a senha do cliente: ");
    fflush(stdin);
    scanf("%[^\n]", CadCor[i_corrente].senha_cliente);
    printf("\n");

}
void rec_cor_saldo(int i_corrente){
    system("cls");
    printf("\t17-Saldo do cliente\n\n\tDigite o saldo: ");
    fflush(stdin);
    scanf("%f", &CadCor[i_corrente].saldo);
}
void gravar_dados_cor(int i_corrente) {
    system("cls");
    FILE *arq = fopen("contas correntes.txt", "a");
    
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
         fprintf(arq,"\n\tAgencia: %d\n\tNumero da conta: %s\n\tLimite da conta: %s\n\tData de vencimento: %d/%d/%d\n\tNome do cliente: %s\n\tCPF do cliente: %s\n\tData de Nascimento: %d/%d/%d\n\tTelefone do cliente: %s\n\tEndereco do cliente: %s\n\tCEP do cliente: %s\n\tLocal: %s\n\tNumero da casa: %s\n\tBairro: %s\n\tCidade: %s\n\tEstado: %s\n\tSenha do cliente: %s\n\tSaldo: %f\n\n",CadCor[i_corrente].agencia,CadCor[i_corrente].n_conta,CadCor[i_corrente].lim_cont,CadCor[i_corrente].venc.dia,CadCor[i_corrente].venc.mes,CadCor[i_corrente].venc.ano,CadCor[i_corrente].nome,CadCor[i_corrente].cpf,CadCor[i_corrente].nasc.dia,CadCor[i_corrente].nasc.mes,CadCor[i_corrente].nasc.ano,CadCor[i_corrente].telefone,CadCor[i_corrente].endereco,CadCor[i_corrente].cep,CadCor[i_corrente].local,CadCor[i_corrente].n_casa,CadCor[i_corrente].bairro,CadCor[i_corrente].cidade,CadCor[i_corrente].estado,CadCor[i_corrente].senha_cliente,CadCor[i_corrente].saldo);
        printf("Dados gravados com sucesso.\n");

    fclose(arq);

    Sleep(2500);
    system("cls");
}




void gravar_senha_adm(char SENHA_ADMIN[]){    

    printf("Digite a senha de administrador: ");
    scanf("%s", SENHA_ADMIN);

    FILE *arq=fopen("senhas.txt","w");
    if(arq==NULL){
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }
    fprintf(arq,"Senha de Administrador:%s",SENHA_ADMIN);
    fclose(arq);
}
void ler_senha_adm(char SENHA_ADMIN[]){

    FILE *arq=fopen("senhas.txt","r");
    if(arq!=NULL){
        fscanf(arq,"Senha de Administrador:%[^\n]",SENHA_ADMIN);
        fclose(arq);
    } 
     char senhaadm[20];

    printf("Digite a senha de administrador: ");
    scanf("%s", senhaadm);
    
    if(strcmp(senhaadm, SENHA_ADMIN)==0){
        printf("\n\nSenha correta.");
        Sleep(2000);
        system("cls");

    }else{
        printf("Senha incorreta.\n\nAguarde enquanto te redirecionamos para o menu funcionario.");
        Sleep(2000);
        menu_funcionario();
    }
    }


void consultar_arquivo_poupanca(){
    
    FILE *arq = fopen("contas poupancas.txt", "r");
    
    if (arq == NULL){
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    int i;
    while(fscanf(arq,"\n\tAgencia: %d\n\tNumero da conta: %[^\n]\n\tNome do cliente: %[^\n]\n\tCPF do cliente: %[^\n]\n\tData de Nascimento: %d/%d/%d\n\tTelefone do cliente: %[^\n]\n\tEndereco do cliente: %[^\n]\n\tCEP do cliente: %[^\n]\n\tLocal: %[^\n]\n\tNumero da casa: %[^\n]\n\tBairro: %[^\n]\n\tCidade: %[^\n]\n\tEstado: %[^\n]\n\tSenha do cliente: %[^\n]\n\tSaldo: %f\n\n",&CadPoup[i_poupanca].agencia,CadPoup[i_poupanca].n_conta,CadPoup[i_poupanca].nome,CadPoup[i_poupanca].cpf,&CadPoup[i_poupanca].nasc.dia,&CadPoup[i_poupanca].nasc.mes,&CadPoup[i_poupanca].nasc.ano,CadPoup[i_poupanca].telefone,CadPoup[i_poupanca].endereco,CadPoup[i_poupanca].cep,CadPoup[i_poupanca].local,CadPoup[i_poupanca].n_casa,CadPoup[i_poupanca].bairro,CadPoup[i_poupanca].cidade,CadPoup[i_poupanca].estado,CadPoup[i_poupanca].senha_cliente,&CadPoup[i_poupanca].saldo)==18){
        i++;    
    }
    
    fclose(arq);
    }

void consultar_arquivo_corrente(){
    FILE *arq = fopen("contas correntes.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    int i=0;
    while(fscanf(arq,"\n\tAgencia: %d\n\tNumero da conta: %[^\n]\n\tLimite da conta: %[^\n]\n\tData de vencimento: %d/%d/%d\n\tNome do cliente: %[^\n]\n\tCPF do cliente: %[^\n]\n\tData de Nascimento: %d/%d/%d\n\tTelefone do cliente: %[^\n]\n\tEndereco do cliente: %[^\n]\n\tCEP do cliente: %[^\n]\n\tLocal: %[^\n]\n\tNumero da casa: %[^\n]\n\tBairro: %[^\n]\n\tCidade: %[^\n]\n\tEstado: %[^\n]\n\tSenha do cliente: %[^\n]\n\tSaldo: %f\n\n",&CadCor[i_corrente].agencia,CadCor[i_corrente].n_conta,CadCor[i_corrente].lim_cont,&CadCor[i_corrente].venc.dia,&CadCor[i_corrente].venc.mes,&CadCor[i_corrente].venc.ano,CadCor[i_corrente].nome,CadCor[i_corrente].cpf,&CadCor[i_corrente].nasc.dia,&CadCor[i_corrente].nasc.mes,&CadCor[i_corrente].nasc.ano,CadCor[i_corrente].telefone,CadCor[i_corrente].endereco,CadCor[i_corrente].cep,CadCor[i_corrente].local,CadCor[i_corrente].n_casa,CadCor[i_corrente].bairro,CadCor[i_corrente].cidade,CadCor[i_corrente].estado,CadCor[i_corrente].senha_cliente,&CadCor[i_corrente].saldo)==22){
        i++;    
    }
    fclose(arq);
}
void sal_indice_poupanca(int i_poupanca){
    FILE *arq=fopen("indicepou.txt","w");

    if(arq==NULL){
        printf("Erro ao abrir o arquivo.");
        exit(1);    
    }
    fprintf(arq,"%d",i_poupanca);


    fclose(arq);
}
void ler_indice_poupanca(int *i_poupanca){

    FILE *arq=fopen("indicepou.txt","r");

    if(arq!=NULL){
        fscanf(arq,"%d",i_poupanca);
        fclose(arq);
    }else{
        *i_poupanca=0;
    }

}


void consultar_conta(){
    char nu_conta[15];
    consultar_arquivo_corrente();
    consultar_arquivo_poupanca();

    printf("Digite o numero da conta: ");
    fflush(stdin);
    scanf("%[^\n]", nu_conta);
    printf("\n");
    system("cls");
    fflush(stdin);

    

    
    int i;
    for(i=0; i<i_poupanca; i++){
        if(strcmp(nu_conta, CadPoup[i_poupanca].n_conta) == 0){
            printf("\n\tTipo de conta: Poupanca\n\tAgencia: %d\n\tNumero da conta: %s\n\tNome do cliente: %s\n\tCPF do cliente: %s\n\tSaldo da conta: R$%.2f",CadPoup[i_poupanca].agencia,CadPoup[i_poupanca].n_conta,CadPoup[i_poupanca].nome,CadPoup[i_poupanca].cpf,CadPoup[i_poupanca].saldo);
        }
    }
        


}


void consultar_cliente(){
     char cpf[15];
    printf("Digite o CPF do cliente (Ex: 075.685.521-79, seja fiel aos pontos e hífen): ");
    scanf("%[^\n]", cpf);
    printf("\n");
    system("cls");

    consultar_arquivo_poupanca();
    consultar_arquivo_corrente();
    
    int i;
    int conta_encontrada=0;
 for(i=0;i<i_poupanca+i_corrente;i++){
    if(strcmp(cpf, CadPoup[i_poupanca].cpf)==0){
        printf("\tNome do cliente: %s\n\tCPF do cliente: %s\n\tData de nascimento: %d/%d/%d\n\tTelefone: %s\n\tLocal: %s\n\tEndereco: %s\n\tNumero da casa: %s\n\tCEP: %s\n\tBairro: %s\n\tCidade: %s\n\tEstado: %s",CadPoup[i_poupanca].nome,CadPoup[i_poupanca].cpf,CadPoup[i_poupanca].nasc.dia,CadPoup[i_poupanca].nasc.mes,CadPoup[i_poupanca].nasc.ano,CadPoup[i_poupanca].telefone,CadPoup[i_poupanca].local,CadPoup[i_poupanca].endereco,CadPoup[i_poupanca].n_casa,CadPoup[i_poupanca].cep,CadPoup[i_poupanca].bairro,CadPoup[i_poupanca].cidade,CadPoup[i_poupanca].estado);
        conta_encontrada=1;
    }else if(strcmp(cpf, CadCor[i_corrente].cpf)==0){
        printf("\tNome do cliente: %s\n\tCPF do cliente: %s\n\tData de nascimento: %d/%d/%d\n\tTelefone: %s\n\tLocal: %s\n\tEndereco: %s\n\tNumero da casa: %s\n\tCEP: %s\n\tBairro: %s\n\tCidade: %s\n\tEstado: %s",CadCor[i_corrente].nome,CadCor[i_corrente].cpf,CadCor[i_corrente].nasc.dia,CadCor[i_corrente].nasc.mes,CadCor[i_corrente].nasc.ano,CadCor[i_corrente].telefone,CadCor[i_corrente].local,CadCor[i_corrente].endereco,CadCor[i_corrente].n_casa,CadCor[i_corrente].cep,CadCor[i_corrente].bairro,CadCor[i_corrente].cidade,CadCor[i_corrente].estado);
        conta_encontrada=1;
    }
    }if(!conta_encontrada){
    printf("Conta não encontrada");
 }
}

void case_cadastro_funcionario(){
    int x=0;
    system("cls");

    printf("\t\tCADASTRO FUNCIONARIO\n\n\t1-Codigo funcionario\n\t2-Cargo\n\t3-Nome\n\t4-CPF\n\t5-Data de nascimento\n\t6-Telefone de contato\n\t7-Endereco\n\t8-CEP\n\t9-Local\n\t10-Numero da casa\n\t11-Bairro\n\t12-Cidade\n\t13-Estado\n\t14-Senha do funcionario\n\t0-Voltar\n\n\tDigite a opcao desejada:");
    scanf("%d",&x);

    if(x>14){
        printf("Opcao invalida...");
        Sleep(1000);
        system("cls");
        case_cadastro_funcionario();
    }
    switch (x)
    {
    case 1:{
        rec_cod(i_func);
        case_cadastro_funcionario();
        break;
    }   
    case 2:{
        rec_cargo(i_func);
        case_cadastro_funcionario();
        break;
    }
    case 3:{
        rec_nome(i_func);
        case_cadastro_funcionario();
        break;
    }
    case 4:{
        rec_cpf(i_func);
        case_cadastro_funcionario();
        break;
        }
    case 5:{
        rec_data(i_func);
        case_cadastro_funcionario();
        break;
    }
    case 6:{
        rec_tel(i_func);
        case_cadastro_funcionario();
        break;
    }
    case 7:{
        rec_end(i_func);
        case_cadastro_funcionario();
        break;
    }
    case 8:{
        rec_cep(i_func);
        case_cadastro_funcionario();
    }
        break;
    case 9:{
        rec_loc(i_func);
        case_cadastro_funcionario();
        break;
    }
    case 10:{
        rec_ncasa(i_func);
        case_cadastro_funcionario();
        break;
    }
    case 11:{
        rec_bairro(i_func);
        case_cadastro_funcionario();
        break;
    }
    case 12:{
        rec_cid(i_func);
        case_cadastro_funcionario();
        break;}
    case 13:{
        rec_est(i_func);
        case_cadastro_funcionario();
        break;
    }
    case 14:{
        rec_senha_func(i_func);
        case_cadastro_funcionario();
        break;
    }
    case 0:{
        gravar_dados_func(i_func);
        i_func++;
        cadastro_funcionario();
        break;
    }
  }
}

void rec_cod(int i_func){
    system("cls");
    printf("\t\tCodigo do funcionario\n\n\tDigite o codigo do funcionario: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i_func].cod_func);
    printf("\n");
}
void rec_cargo(int i_func){
    system("cls");
    printf("\t\tCargo do funcionario\n\n\tDigite o cargo: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i_func].cargo);
    printf("\n");
}
void rec_nome(int i_func){
    system("cls");
    printf("\t\tNome do funcionario\n\n\tDigite o nome: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i_func].nome);
    printf("\n");
}
void rec_cpf(int i_func){
    system("cls");
    printf("\t\tCPF do funcionario\n\n\tDigite o CPF: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i_func].cpf);
    printf("\n");
}
void rec_data(int i_func){
    system("cls");
    printf("\t\tData de nascimento do funcionario\n\n\tDigite a data: ");
    fflush(stdin);
    scanf("%d %d %d", &CadFunc[i_func].nasc.dia, &CadFunc[i_func].nasc.mes,&CadFunc[i_func].nasc.ano);
    printf("\n");
}
void rec_tel(int i_func){
    system("cls");
    printf("\t\tTelefone do funcionario\n\n\tDigite o telefone: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i_func].tel);
    printf("\n");
}
void rec_end(int i_func){
    system("cls");
    printf("\t\tEndereco do funcionario\n\n\tDigite o endereco: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i_func].endereco);
    printf("\n");
}
void rec_cep(int i_func){
    system("cls");
    printf("\t\tCEP do funcionario\n\n\tDigite o CEP: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i_func].cep);
    printf("\n");
}
void rec_loc(int i_func){
    system("cls");
    printf("\t\tLocal do endereco\n\n\tDigite o local: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i_func].local);
    printf("\n");
}
void rec_ncasa(int i_func){
    system("cls");
    printf("\t\tNumero da casa\n\n\tDigite o numero da casa: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i_func].n_casa);
    printf("\n");
}
void rec_bairro(int i_func){
    system("cls");
    printf("\t\tBairro\n\n\tDigite o bairro: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i_func].bairro);
    printf("\n");
}
void rec_cid(int i_func){
    system("cls");
    printf("\t\tCidade\n\n\tDigite a cidade: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i_func].cidade);
    printf("\n");
}
void rec_est(int i_func){
    system("cls");
    printf("\t\tEstado\n\n\tDigite o estado: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i_func].estado);
    printf("\n");
}
void rec_senha_func(int i_func){
    system("cls");
    printf("\t\tSenha do funcionario\n\n\tDigite a senha: ");
    fflush(stdin);
    scanf("%[^\n]", CadFunc[i_func].senha_func);
    printf("\n");
}

void gravar_dados_func(int i_func){
    system("cls");
    FILE *arq = fopen("funcionarios.txt","a");
    if(arq==NULL){
        printf("Erro ao abrir o arquivo...");
        Sleep(1500);
        exit(1);
    }
    fprintf(arq,"\tCodigo do funcionario: %s\n\tCargo: %s\n\tNome: %s\n\tCPF: %s\n\tData de nascimento: %d/%d/%d\n\tTelefone: %s\n\tEndereco: %s\n\tCEP: %s\n\tLocal: %s\n\tNumero da casa: %s\n\tBairro: %s\n\tCidade: %s\n\tEstado: %s\n\tSenha do funcionario: %s\n\t",CadFunc[i_func].cod_func,CadFunc[i_func].cargo,CadFunc[i_func].nome,CadFunc[i_func].cpf,CadFunc[i_func].nasc.dia,CadFunc[i_func].nasc.mes,CadFunc[i_func].nasc.ano,CadFunc[i_func].tel,CadFunc[i_func].endereco,CadFunc[i_func].cep,CadFunc[i_func].local,CadFunc[i_func].n_casa,CadFunc[i_func].bairro,CadFunc[i_func].cidade,CadFunc[i_func].estado,CadFunc[i_func].senha_func);
    fclose(arq);

    system("cls");

}

void ler_func(){

    FILE *arq = fopen("funcionarios.txt","r");
    if(arq==NULL){
        printf("Erro ao abrir o arquivo.");
        Sleep(1500);
        exit(1);
    }

    int i=0;
    while(fscanf(arq,"\tCodigo do funcionario: %[^\n]\n\tCargo: %[^\n]\n\tNome: %[^\n]\n\tCPF: %[^\n]\n\tData de nascimento: %d/%d/%d\n\tTelefone: %[^\n]\n\tEndereco: %[^\n]\n\tCEP: %[^\n]\n\tLocal: %[^\n]\n\tNumero da casa: %[^\n]\n\tBairro: %[^\n]\n\tCidade: %[^\n]\n\tEstado: %[^\n]\n\tSenha do funcionario: %[^\n]\n\t",CadFunc[i_func].cod_func,CadFunc[i_func].cargo,CadFunc[i_func].nome,CadFunc[i_func].cpf,&CadFunc[i_func].nasc.dia,&CadFunc[i_func].nasc.mes,&CadFunc[i_func].nasc.ano,CadFunc[i_func].tel,CadFunc[i_func].endereco,CadFunc[i_func].cep,CadFunc[i_func].local,CadFunc[i_func].n_casa,CadFunc[i_func].bairro,CadFunc[i_func].cidade,CadFunc[i_func].estado,CadFunc[i_func].senha_func)==16){
        i++;
    }
    fclose(arq);
}

void consulta_func(){
    

    system("cls");
    ler_func();
    char codigo_func[20];
    printf("Digite o codigo do funcionario que deseja consultar: ");
    fflush(stdin);
    scanf("%[^\n]",codigo_func);
    printf("\n");

    int i;
    int conta_encontrada=0;
    for(i=0;i<i_func;i++){
        if(strcmp(codigo_func, CadFunc[i_func].cod_func)==0){
            printf("\tCodigo do funcionario: %s\n\tCargo: %s\n\tNome: %s\n\tCPF: %s\n\tData de nascimento: %d/%d/%d\n\tTelefone: %s\n\tEndereco: %s\n\tCEP: %s\n\tLocal: %s\n\tNumero da casa: %s\n\tBairro: %s\n\tCidade: %s\n\tEstado: %s\n\t",CadFunc[i_func].cod_func,CadFunc[i_func].cargo,CadFunc[i_func].nome,CadFunc[i_func].cpf,CadFunc[i_func].nasc.dia,CadFunc[i_func].nasc.mes,CadFunc[i_func].nasc.ano,CadFunc[i_func].tel,CadFunc[i_func].endereco,CadFunc[i_func].cep,CadFunc[i_func].local,CadFunc[i_func].n_casa,CadFunc[i_func].bairro,CadFunc[i_func].cidade,CadFunc[i_func].estado);
            conta_encontrada=1;
        }
    }if(!conta_encontrada){
        printf("Conta não encontrada");
    }
}

void reescrever_cpoupanca(){
    int i;
    FILE *arq = fopen("contas poupancas.txt","w");

    if(arq==NULL){
        printf("Conta não encontrada.");
        Sleep(2000);
        exit(1);
    }else{
        for(i=0;i<i_poupanca;i++){
        fprintf(arq,"\n\tAgencia: %d\n\tNumero da conta: %s\n\tNome do cliente: %s\n\tCPF do cliente: %s\n\tData de Nascimento: %d/%d/%d\n\tTelefone do cliente: %s\n\tEndereco do cliente: %s\n\tCEP do cliente: %s\n\tLocal: %s\n\tNumero da casa: %s\n\tBairro: %s\n\tCidade: %s\n\tEstado: %s\n\tSenha do cliente: %s\n\tSaldo: %f\n\n",CadPoup[i_poupanca].agencia,CadPoup[i_poupanca].n_conta,CadPoup[i_poupanca].nome,CadPoup[i_poupanca].cpf,CadPoup[i_poupanca].nasc.dia,CadPoup[i_poupanca].nasc.mes,CadPoup[i_poupanca].nasc.ano,CadPoup[i_poupanca].telefone,CadPoup[i_poupanca].endereco,CadPoup[i_poupanca].cep,CadPoup[i_poupanca].local,CadPoup[i_poupanca].n_casa,CadPoup[i_poupanca].bairro,CadPoup[i_poupanca].cidade,CadPoup[i_poupanca].estado,CadPoup[i_poupanca].senha_cliente,CadPoup[i_poupanca].saldo);
        printf("Dados gravados com sucesso\n");
    }
  }
}

void reescrever_ccorrente(){
    int i;
    FILE *arq = fopen("contas correntes.txt","w");

    if(arq==NULL){
        printf("Conta não encontrada.");
        Sleep(2000);
        exit(1);
    }else{
        for(i=0;i<i_corrente;i++){
        fprintf(arq,"\n\tAgencia: %d\n\tNumero da conta: %s\n\tLimite da conta: %s\n\tData de vencimento: %d/%d/%d\n\tNome do cliente: %s\n\tCPF do cliente: %s\n\tData de Nascimento: %d/%d/%d\n\tTelefone do cliente: %s\n\tEndereco do cliente: %s\n\tCEP do cliente: %s\n\tLocal: %s\n\tNumero da casa: %s\n\tBairro: %s\n\tCidade: %s\n\tEstado: %s\n\tSenha do cliente: %s\n\tSaldo: %f\n\n",CadCor[i_corrente].agencia,CadCor[i_corrente].n_conta,CadCor[i_corrente].lim_cont,CadCor[i_corrente].venc.dia,CadCor[i_corrente].venc.mes,CadCor[i_corrente].venc.ano,CadCor[i_corrente].nome,CadCor[i_corrente].cpf,CadCor[i_corrente].nasc.dia,CadCor[i_corrente].nasc.mes,CadCor[i_corrente].nasc.ano,CadCor[i_corrente].telefone,CadCor[i_corrente].endereco,CadCor[i_corrente].cep,CadCor[i_corrente].local,CadCor[i_corrente].n_casa,CadCor[i_corrente].bairro,CadCor[i_corrente].cidade,CadCor[i_corrente].estado,CadCor[i_corrente].senha_cliente,CadCor[i_corrente].saldo);
        printf("Dados gravados com sucesso.\n");
    }
  }
}
