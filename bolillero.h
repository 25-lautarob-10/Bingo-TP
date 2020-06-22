#include <stdib.h> 
#include <sdlib.h>
#include <time.h>

//PRE:se genera un  numero al azar entre 1 y la cantidad de bolillas.
//POST: se devuelve al main el numero de bolilla que salio
int bolillasAleatorias[MAX_bolillas];
//PRE: se genera un numero al azar de bolilla
//POST: se guarda esa valor en un vector 
void vectorConBolillasAleatorias( int bolillasSalieron[], int cantbol);
//PRE: se toma el valor de la nueva bolilla que sale y se compara con las que salieron
//POST: una vez comparadas, si no se repite se sigue con el juego, de lo contrario se vuelve a sacar una bolilla a la azar
void SacarBollilaNoRepetida (  int bolilla[], int cantbolillas)
