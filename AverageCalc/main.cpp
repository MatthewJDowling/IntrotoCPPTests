#include <iostream>




int main()
{
	int varA = 0, varB = 0, varC = 0, varD = 0, varE = 0, varF = 5, varG = 0;
	//printf("Var currently stores: %d \n", var);
	printf("Insert five whole numbers: ");
	scanf_s("%d %d %d %d %d", &varA, &varB, &varC, &varD, &varE);
	varG = varA + varB + varC + varD + varE; 
	varG = varG / varF;
	printf("The average of these is:%d", varG);
	getchar();
	getchar();


}