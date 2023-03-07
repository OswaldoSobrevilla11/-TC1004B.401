#include <signal.h>
#include <stdio.h>
#include <unistd.h>
int run;
void printHelloWorld(int sigNum){
    printf("Recibi la se;al: %d\n", sigNum);
}
void printNoMePuedesMatar(int sigNum){
    printf("No me puedes matar jajajaja: %d\n", sigNum);
}
void printTerminarCiclo(int sigNum){
    run = 2;
}
int main(){
    signal(12, printHelloWorld);
    signal(2, printNoMePuedesMatar);
    signal(10, printTerminarCiclo);
    run = 1;
    while(run == 1){
        printf("Trabajando\n");
        sleep(1);
    }
    printf("Termine de trabajar\n");
    printf("Adios\n");
    return 0;
}