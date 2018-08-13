#include <stdio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

void gotoxy(int x, int y);
void telaPrincipal(void);
void cadastrarContatos(void);
void listarContatos(void);
void procurarContatos(void);
void apagarBD(void);
void caixaDeMensagem(void);


typedef struct Contato{ 
	char nome[20]; 
	char endereco[20];
	char telefone[13];
	char email[20];
}Contato;

struct Contato contato;

int main(void){      	
  	system("color 04");
  	system("mode con:cols=80 lines=22");
    
    telaPrincipal();
    return 0;
}

 void telaPrincipal(void){ 
    int opt; 
    do{
        system("cls");   
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2                              Agenda Top                                      \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    [1] Cadastrar contato                                                     \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    [2] Listar contatos                                                       \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    [3] Procurar Contato                                                      \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    [4] Apagar Contato                                                        \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    [5] Sair do sistema                                                       \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2    Digite a opcao desejada: _                                                \xB2");      
        printf("\xB2                                                                              \xB2");
        printf("\xB2                                                                              \xB2");
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        
		gotoxy(30,18);
        scanf("%i",&opt);
        fflush(stdin);
      
        switch(opt){
            case 1:
                cadastrarContato();
                break;
            case 2:
                listarContatos();
                break;
            case 3:
                procurarContatos();
                break;
            case 4:
                apagarContato();
                break;
            case 5:
                break;
            default:
                caixaDeMensagem();
                gotoxy(33,9);
                printf("Opcao invalida!");
                gotoxy(19,11);
                printf("Tecle 'ENTER' e selecione uma opcao valida!");
                getch();
                break;
        }
    }while(opt!=5);
}
void apagarContato(void){
    char opt[20];
    int ver=1;
    do{
	    system("cls");
	    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2                       Procurar Contato Para Apagar                           \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2    Nome: _______________________________________________________________     \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2                                                                              \xB2");
	    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
		gotoxy(11,8);
		scanf("%s",opt);
		FILE *arq;
		FILE *arquivo;
	    arquivo = fopen("BD.txt","r");
	    
	    char nome[20];
		char endereco[20];
		char telefone[9];
		char email[20];
	    while(fscanf(arquivo,"%s %s %s %s",&nome,&endereco,&telefone,&email) != EOF){
	    	if(strstr(nome, opt)==NULL){
	    		arq = fopen("substituto.txt","a");
				fprintf(arq,"%s %s %s %s \n",nome,endereco,telefone,email);
				fclose(arq);
	    	}else
	    		ver=0;
		}
		if(ver==1){
			system("del substituto.txt");
			gotoxy(5,16);
			printf("Contato nao existe");
			getch();
		}else{
			fclose(arquivo);
		    system( "ren substituto.txt asdf.txt" );
		    system("del BD.txt");
		    system( "ren asdf.txt BD.txt" );
		    
		    gotoxy(5,16);
			printf("Contato excluido com sucesso");
		}
		
	}while(ver!=0);
}

void cadastrarContato(void){
	char opt;
 	 
    system("cls");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                              Agenda Top                                      \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2    Nome: _______________________________________________________________     \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2    Endereco: ___________________________________________________________     \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2    Telefone: _________                                                       \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2    Email: _________________                                                  \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    
    
	 	
	gotoxy(11,8);
	gets(contato.nome);
	fflush(stdin);
	
	gotoxy(15,10);
	gets(contato.endereco);
	fflush(stdin);
	
	gotoxy(15,12);
	gets(contato.telefone);
	fflush(stdin);
	
	gotoxy(12,14);
	gets(contato.email);
	fflush(stdin);
	
	gotoxy(5,16);
	printf("Deseja gravar os dados informados?(S/N): ");
	scanf("%c",&opt);
	
	int cod=0;
	
	if(opt=='S' || opt=='s'){
        FILE *arquivo;
        arquivo = fopen("BD.txt","a");
        fprintf(arquivo,"%s %s %s %s \n",contato.nome,contato.endereco,contato.telefone,contato.email);
        fclose(arquivo);
    }
}

void listarContatos(void){
    FILE *arquivo;
    char texto[200];
    int cont=1;
    
    arquivo = fopen("BD.txt","r");
    system("cls");
    
    printf("Lista de contatos\n");
    printf("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n\n");
    
    while(fgets(texto,126,arquivo)){
        printf("%s\n",texto);
        cont++;
    }
    fclose(arquivo);
    gotoxy(0,0);
    getch();
}
void procurarContatos(void){
    char opt[20];
    system("cls");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                 Procurar Contato                             \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2    Nome: _______________________________________________________________     \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2                                                                              \xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
	gotoxy(11,8);
	scanf("%s",opt);  
    
    FILE *arquivo;
    arquivo = fopen("BD.txt","r");
    
    system("cls");
	
	char nome[20];
	char endereco[20];
	char telefone[9];
	char email[20];
    while(fscanf(arquivo,"%s %s %s %s",&nome,&endereco,&telefone,&email) != EOF){
    	if(strstr(nome, opt)!=NULL){
			printf("\nNome: %s Endereco: %s Telefone: %s E-mail: %s",nome,endereco,telefone,email);
		}
    }
  
    fclose(arquivo);    
        
    getch();
}

void caixaDeMensagem(void){
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

void gotoxy(int x, int y){
    HANDLE hOut;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = x;
    Position.Y = y;
    SetConsoleCursorPosition(hOut,Position);
}
