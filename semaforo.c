#include <stdio.h>
#include <unistd.h>
#define ROJO_T "\x1b[31m"
#define VERDE_T "\x1b[32m"
#define AMARILLO_T "\x1b[33m"

//funcion para simular el funcionamiento del semaforo
void semaforo(int verde, int rojo, int amarillo)
{
	int a = 1; //variable que controla el ciclo
	do{
        printf(VERDE_T "Semaforo en Verde\n"); //imprimir luz verde
        sleep(verde); //tiempo que estara activa la luz verde


        printf(AMARILLO_T "Semaforo en Amarillo\n"); //imprimir luz amarilla
        sleep(amarillo);	//tiempo que estara activa la luz amarilla

        printf(ROJO_T "Semaforo en Rojo\n\n"); //imprimir luz roja
        sleep(rojo);	//tiempo que estara activa la luz roja
    }while(a = 1); //la variable no se actualiza para que el ciclo sea infinito y asi cumpla con la funcion de ser un semaforo
}
int main() 
{
	int Tverde = 20, Trojo = 15, Tamarillo = 5; //variables de tiempo de cada luz 
    semaforo(Tverde, Trojo, Tamarillo); //llamada a la funcion que simula el semaforo
    return 0;
}
