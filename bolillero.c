int bolillasAleatorias(int  maximoBolillas)
{
    int maximoBolillas=90
    int bolillaSale= 1+ rand() % maximoBolillas
    return bolillaSale;
}

void vectorConBolillasAleatorias(int bolillasSalieronn[], int cantbol)
{
    int bolillaAleatoria = 0;
    cantbol=90

    for (int i = 0; i <cantbol ; i++)
    {
        bolillaAleatoria = bolillaSale (cantbol);
        
        bolillasSalieronn[i] = bolillaAleatoria;
    }
}

void SacarBollilaNoRepetida(int bolilla[], int cantbolillas)
{
    int bolillaAzar = 0;
    cantbolillas=90;
     for (int i = 0; i < cantbolillas; i++)
    {
        bolillaAzar = bolillaSale(cantbolillas);

        for(int j = 0; j < i; j++)
        {

            if (bolilla[j] == bolillaAzar)
            {
                bolillaAzar = bolillaSale(cantbolillas);
                j = 0;
            }
        }

        bolilla[i] = bolillaAzar;
    }
}
