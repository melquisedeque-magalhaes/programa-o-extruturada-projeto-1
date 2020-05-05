
#include <string.h>


#define True 1
#define False 0
#define CLEAR "cls"
#define MAX 1000

struct Students{
    int matricula;

    char name[60];

    int dayBirth;
    int monthBirth;
    int yearBirth;
    
    char course[100];
    
    char email[100];
    
    char cpf[20];
};

struct Students students[MAX];

void ClearWindows(){
    printf("Aperte qualque tecla para continuar...");
    getchar();
    system(CLEAR);
}

void styles(){
    printf("\n===================================================================================\n");
}

void header(){
    styles();
    printf("\n                        Bem Vindo ao Melqui Academy\n");
    styles();
}

void Menu(){
	
    header();
    printf("\nEscolha uma das opções Abaixo: \n\n");
    printf("                            1 -> Mostra Usuários\n");
    printf("                            2 -> Cadastrar Estudante\n");
    printf("                            3 -> Procurar Estudante\n");
    printf("                            4 -> Calcular Media!\n");
    printf("                            0 -> Sair do Programa!\n");
}


int MenuEntryAndValidationOption(){
    int option;
    int checks = 0;

    do{
        printf("\nDigite sua escolha: ");
        fflush(stdin);
        scanf("%d", &option);
        getchar();

        checks = ((option < 0) || (option > 4));
        
        if(checks)
            printf("\nERROR OPÇÃO INVALIDA TENTE NOVAMENTE!\n");
    }while(checks);

    return option;
}

void ListeStudents(int id){
    printf("%s\n", students[id].name);
    printf("id: %d\n", id);
}


int CreateStudent(int res){
    styles();
    
    students[res].matricula = res;
	do{
		printf("Digite o nome do estudante: ");
	    fflush(stdin);
	    fgets(students[res].name, 60, stdin);
	    
	     if(strlen(students[res].name) == 0)
	    	printf("ERROR DIGITE UM NOME VALIDO!\n");
	    	
	    
	    	
	}while(strlen(students[res].name) == 0);
    
 

    int i = strlen(students[res].name - 1);

    if(students[res].name[i] == '\n')
        students[res].name[i] = '\0';
    do{
    	printf("Digite o dia do seu nascimento: ");
    	scanf("%d", &students[res].dayBirth);
    	
    	if(students[res].dayBirth > 31 || students[res].dayBirth < 0)
    		printf("ERRO DIGITE UM DATA VALIDA!\n");
    		
	}while(students[res].dayBirth > 31 || students[res].dayBirth < 0); 
	
	do{
    	printf("Digite o mês do seu nascimento: ");
    	scanf("%d", &students[res].monthBirth);
    	
    	if(students[res].monthBirth > 31 || students[res].monthBirth < 0)
    		printf("ERRO DIGITE UM DATA VALIDA!\n");
    		
	}while(students[res].monthBirth > 31 || students[res].monthBirth < 0);    
    
    do{
    	printf("Digite o ano do seu nascimento: ");
    	scanf("%d", &students[res].yearBirth);
    	
    	if(students[res].yearBirth < 1900 || students[res].yearBirth > 2020)
    		printf("ERRO DIGITE UM DATA VALIDA!\n");
    		
	}while(students[res].yearBirth < 1900 || students[res].yearBirth > 2020);
	
	do{
		printf("Digite o curso de  interesse: ");
	    fflush(stdin);
	    fgets(students[res].course, 60, stdin);
	    
	     if(strlen(students[res].course) == 0)
	    	printf("ERROR DIGITE UM CURSO VALIDO!\n");
	    	
	}while(strlen(students[res].course) == 0);
	
	
	printf("Digite o seu email: ");
    fflush(stdin);
    fgets(students[res].email, 60, stdin);
	    		
    styles();

    return res++;
}




// void SeachStudent(){

// }

// void AverageArithmetic(){
    
// }

int SelectFunctionAccordingMenuOption(int option, int res){

     switch(option){
         case 1:
             ListeStudents(res);
             break;
         case 2:
             res = CreateStudent(res);
             break;
/*         case 3:
             SeachStudent(id);
             break;
//         case 4:
//             AverageArithmetic(id);
// //             break;*/
         default:
             printf("\nOBRIGADO VOLTE SEMPRE AO MELQUI ACADEMY!!!\n");
             res = -1;
             break;
     }
     
    return res;
 }



