#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define True 1
#define False 0

#include "myFunctions.h"




void main(){

   setlocale(LC_ALL, "Portuguese");
	
   int res = 0;

    while(res != -1){

        Menu();

        int option = MenuEntryAndValidationOption();    //  usuário seleciona sua opção

        res = SelectFunctionAccordingMenuOption(option, res); //chama outra opção de acordo com a opção do usuário

        ClearWindows();


	

	}	
	system("pause");
}
