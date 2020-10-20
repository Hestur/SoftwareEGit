/*Exercise 6.1 Temperatur og lysintensitet – dataindsamling med RaspberryPi
I denne øvelse skal du bruge din Raspberry Pi.
Skriv et program som hvert 5. sekund måler temperaturen og lysintensiteten og
gemmer de målte værdier i to arrays – temperaturen i et array og lysintensiteten i et andet array.
Efter 60 sekunder skal de målte værdier udskrive på skærmen.
Herefter startes forfra med målinger*/
#pragma comment(lib, "RaspberryPI.lib")
#include <stdio.h>
#include <stdlib.h>
#include <RaspberryDLL.h>
#include "Source.h"
#define SIZE 12
int main(void)
{
	if (!Open())
	{
		printf("Error with connection\n");
		exit(1);
	}

	printf("Connected to Raspberry Pi\n");
	/*
		while (true) {
			printf_s("\n%i"":Light Intensity", getIntensity());
			printf_s("\n%f"":Temp", getTemperature());
			Wait(50);
		}
		*/

	int i[SIZE];
	double t[SIZE];

	while (1) {
		for (size_t j = 0; j < SIZE; j++) {
			int intensity = int(getIntensity());
			double temp = double(getTemperature());
			t[j] = temp;
			i[j] = intensity;
			printf_s("%f Temp: \n", temp);
			printf_s("%i Intensity: \n", intensity);
			Wait(500);
		}

		for (size_t index = 0; index < SIZE; index++)
		{
			printf_s("%f :TempAaary  ", t[index]);
			printf_s("%i :IntensityArray  \n\n", i[index]);
		}
	}
	return 0;
}