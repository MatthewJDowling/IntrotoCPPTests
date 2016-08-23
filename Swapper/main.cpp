#include <iostream>

int main()
{
	int varA = 0, varB = 0, varC = 0; 
	//printf("Var currently stores: %d \n", var);
	printf("Insert two integers: ");
	scanf_s("%d %d", &varA, &varB);
	getchar();
	printf("A: %d, B: %d", varA, varB);

	printf("\n Swap successsful! \n");
	varC = varA;
	varA = varB;
	varB = varC;
	printf("A: %d, B: %d \n", varA, varB);
	getchar();
 

	
}