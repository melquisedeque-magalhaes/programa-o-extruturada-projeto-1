#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define True 1
#define False 0
#define CLEAR "clear"
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

    printf("Digite o nome do estudante: ");
    fflush(stdin);
    fgets(students[res].name, 60, stdin);
 

    int i = strlen(students[res].name - 1);

    if(students[res].name[i] == '\n')
        students[res].name[i] = '\0';

    styles();

    return res++;
}

// void SeachStudent(){

// }

// void AverageArithmetic(){
    
// }

// int SelectFunctionAccordingMenuOption(int option, int res){

//     switch(option){
//         case 1:
//             ListeStudents(res);
//             break;
//         case 2:
//             res = CreateStudent(res);
//             break;
// //         case 3:
// //             SeachStudent(id);
// //             break;
// //         case 4:
// //             AverageArithmetic(id);
// //             break;
//         default:
//             res = -1;
//             printf("\nOBRIGADO VOLTE SEMPRE AO MELQUI ACADEMY!!!\n");
//             break;
//     }

//     return res;
// }



