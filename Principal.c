#include <stdio.h>
#include <windows.h>

void tela(){
	int opt; 
	system("cls");   
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                	    Agenda da Toalha                                   \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2    [1] Cadastrar                                                             \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2    [2] Listar                                                                \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2    [3] Procurar                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2    [4] Excluir                                                               \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2    [5] Excluir banco de dados                                                \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2    [6] Sair do sistema                                                       \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2    Digite a opcao desejada: _                                                \xB2\n");      
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    
    gotoxy(30,20);
    scanf("%i",&opt);
    fflush(stdin);
    
    switch(opt){
            case 1:
                framecadastrar();
                break;
            case 2:
                listarContatos();
                break;
            case 3:
                procurarContatos();
                break;
            case 4:
                listarContatos();
                break;
            case 5:
                apagaBD();
                break;
            case 6:
                about();
                break;
            default:
                //system("cls");
                msgbox();
                gotoxy(33,9);
                printf("Opcao invalida!");
                gotoxy(19,11);
                printf("Tecle 'ENTER' e selecione uma opcao valida!");
                getch();
                break;
        }
    }while(opt!=6);
}
void gotoxy(int x, int y)
{
    HANDLE hOut;
    int i;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = x;
    Position.Y = y;
    SetConsoleCursorPosition(hOut,Position);
}


void msgbox(void)
{
    
    gotoxy(14,7);
    printf("\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0");
    gotoxy(14,8); 
    printf("\xB0                                                  \xB0");
    gotoxy(14,9); 
    printf("\xB0                                                  \xB0");
    gotoxy(14,10); 
    printf("\xB0                                                  \xB0");
    gotoxy(14,11); 
    printf("\xB0                                                  \xB0");
    gotoxy(14,12); 
    printf("\xB0                                                  \xB0");
    gotoxy(14,13); 
    printf("\xB0                                                  \xB0");
    gotoxy(14,14);
    printf("\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0");
}

void procurar(void)
{
    int cont;
    char conteudo[126];
    
    system("cls");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                 Procurar Contato                             \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2    Nome: _______________________________________________________________     \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2                                                                              \xB2\n");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
	gotoxy(11,8);
	scanf("%s",x.nome);  
    
    FILE *arquivo;
    arquivo = fopen("Base_de_dados.txt","r");
    
    system("cls");

    while(fscanf(arquivo,"%s",&conteudo) != EOF){
        printf("%s",conteudo);                                     
    
    fclose(arquivo); 
        
        cont++;
    }
  
    fclose(arquivo);    
        
    getch();
}

void framecadastrar(void)
{
	char opt;
 	 
    system("cls");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2           Super Agenda Max Ultra Turbo Power Mega 'Bicho' 1.0                \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2    Nome: _______________________________________________________________     \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2    Endereco: ___________________________________________________________     \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2    Telefone: (___)-________                                                  \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2    email: _________________                                                  \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2    Observacoes: ________________________________________________________     \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    
    
	 	
	gotoxy(11,8);
	gets(x.nome);
	fflush(stdin);
	
	gotoxy(15,10);
	gets(x.endereco);
	fflush(stdin);
	
	gotoxy(16,12);
	gets(x.codArea);
	fflush(stdin);
	
	gotoxy(21,12);
	gets(x.telefone);
	fflush(stdin);
	
	gotoxy(12,14);
	gets(x.email);
	fflush(stdin);
	
	gotoxy(18,16);
	gets(x.obs);
	fflush(stdin);
	
	gotoxy(5,22);
	printf("Deseja gravar os dados informados?(S/N): ");
	scanf("%c",&opt);
	
	int cod=0;
	
	if(opt=='S' || opt=='s')
    {
        FILE *arquivo;
        arquivo = fopen("ContatosBD.txt","a");
        fprintf(arquivo,"Nome:%s Endereco:%s Telefone:(%s)-%s Email:%s Observacao:%s\n",x.nome,x.endereco,x.codArea,x.telefone,x.email,x.obs);
        fclose(arquivo);

        
    }
}

void apagaBD(void)
{
    char opt;
    
    //Desenha o frame do messagebox...
    msgbox();  
    
    gotoxy(19,9);
    printf("Deseja apagar a base de dados do sistema?");
    gotoxy(20,10);
    printf("Esta operacao nao podera ser desfeita!");
    gotoxy(17,11);
    printf("Aperte 'S' para SIM ou qualquer tecla para NAO");
    gotoxy(40,12);
    scanf("%c",&opt);
    fflush(stdin);
    
    if (opt=='S' || opt=='s')
    {
        FILE *arquivo;
        arquivo = fopen("ContatosBD.txt","w");
        gotoxy(23,13);
        printf("Base de dados apagada com sucesso!");
        sleep(2000);
        fclose(arquivo);           
    }
}

void listarContatos(void)
{
    FILE *arquivo; //Ponteiro do arquivo
    char texto[200];
    int cont=1;
    
    arquivo = fopen("ContatosBD.txt","r"); //Abre o arquivo para leitura...
    system("cls");
    
    printf("Lista de contatos\n");
    printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n\n");
    
    while(fgets(texto,126,arquivo)){
        printf("%s\n",texto);
        cont++;
    }
    fclose(arquivo); //Fecha o arquivo...
    gotoxy(0,0);
    getch();
}

int main(void){
	tela();
	getch();
	return 0;
}
