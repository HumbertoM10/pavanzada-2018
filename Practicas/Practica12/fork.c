#include <stdio.h>
#include <unistd.h>

int main(){
	int pid;
	pid = fork();
	if(pid == 0){
		execl("/Users/humbe/OneDrive/Documentos/ISC/4to Semestre/Programacion Avanzada/pavanzada-2018/Practicas/Practica12/hijo.exe", 
			"hijo.exe", (char *)0);
		printf("Hola soy el hijo\n");
	}else{
		printf("Hola soy el padre\n");
	}

	return 0;
}