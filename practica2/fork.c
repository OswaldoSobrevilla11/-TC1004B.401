#include <stdio.h>
#include <unistd.h>

int main(){
    // Este codigo solo lo ejecuta el padre 
    printf("Solo el padre\n");
    ///

    int pid = fork(); // En el proceso padre regresa el id del hijo. En el hijo es igual a cero
                      // Igual a cero
    if(pid==0){
        execl("/workspace/TC1004B.401/practica1/helloworld","ls",NULL);
        printf("Esta linea no debe correr\n");
    } else {
        printf("Soy el proceso padre y mi hijo es %d\n",pid);
    }

    return 0;

}