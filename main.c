//Villanueva, Richelle D. IT227 G2
#include <stdio.h>
#include <stdlib.h>
#include "line.h"
//#include<windows.h>
int main()  
{
	char data[100];
	
	printf("Enter Bit Stream: ");
	scanf("%s", data);
	//system("cls");
	
	printf("\nUnipolar NRZ: ");
	unipolarNRZ(data);
	
	printf("\nPolar NRZ-L: ");
	polarNRZ(data);
	
	printf("\nPolar NRZ-I (High): ");
	polarNRZ_I_High(data);
	
	printf("\nPolar NRZ-I (Low): ");
	polarNRZ_I_Low(data);
	
	printf("\nPolar RZ: ");
	polarRZ(data);
	
	printf("\nPolar Biphase Manchester: ");
	BiphaseManchester(data);
	
	printf("\nPolar Biphase Differential Manchester (High): ");
	BiphaseDifferential_High(data);
	
	printf("\nPolar Biphase Differential Manchester (Low): ");
	BiphaseDifferential_Low(data);
	
	printf("\n Bipolar AMI: ");
	bipolarAMI(data);
	
	printf("\n Bipolar Pseudoternary: ");
	bipolarPseudo(data);
	
	return 0;
}

