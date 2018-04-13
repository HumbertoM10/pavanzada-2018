#include <stdio.h>
#include <signal.h>

int noFinish = 1;
void processSignal(int signal){
	prointf("Got signal %d\n", signal);
}

int main(){
	sinal(SIGUSR1, processSignal);
	while(noFinish){

	}
	return 0;
}