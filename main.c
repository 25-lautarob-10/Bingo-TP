#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

//PRE: pide un numero minimo y un numero maximo
//POST: devuelve un numero aleatorio entre los numeros dados
int BolillaAleatoria(int mini, int maxi);
//PRE: pide un vector declarado sin asignar, el tamaño del vector, un numero minimo y un numero maximo
//POST: le asigna al vector numeros aleatorios entre el numero minimo y maximo especificado
void cargarVectorConBolillas( int tam, int mini, int maxi);
//PRE: se declaraun vector declarado sin asignar, el tamaño del vector, un numero minimo y un numero maximo
//POST: Se le asigna al vector numeros aleatorios sin repetir entre el numero minimo y maximo especificado
void cargarVectorConBolillasSinRepetir( int tam, int mini, int maxi);




#endif // FUNCIONES_H_INCLUDED

int main () 
{
   int mini=0;
   int maxi=10;
   int tam=10;
 for (int i=0;i<=tam;i++){
   while(cargarVectorConBolillasSinRepetir){
       
   BolillaAleatoria(mini,maxi);
   cargarVectorConBolillas(tam,mini,maxi);
   cargarVectorConBolillasSinRepetir(tam,mini,maxi);
 }
 }
    return 0;
    
    
}



int BolillaAleatoria(int mini, int maxi)
{
    int bolilla=mini + rand()%(maxi-mini+1);
    printf("     ___________        \n");
    printf("    |           |       \n");
    printf("    |           |       \n");
    printf("    |     %d    |       \n",bolilla);
    printf("    |           |       \n");
    printf("    |___________|       \n");
    return bolilla;
}

void cargarVectorConBolillas( int tam, int mini, int maxi)
{
    int aleatorio = 0;
    int vec[90];
    for (int i = 0; i < tam; i++)
    {
        aleatorio = BolillaAleatoria(mini, maxi);
        vec[i] = aleatorio;
    }
}

void cargarVectorConBolillasSinRepetir( int tam, int mini, int maxi)
{
    int aleatorio = 0;
    int vec[90];
    for (int i = 0; i < tam; i++)
    {
        aleatorio = BolillaAleatoria(mini, maxi);

        for(int j = 0; j < i; j++)
        {

            if (vec[j] == aleatorio)
            {
                aleatorio = BolillaAleatoria(mini, maxi);
                j = 0;
            }
        }

        vec[i] = aleatorio;
    }
}
