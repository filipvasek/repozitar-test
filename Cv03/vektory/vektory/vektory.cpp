// vektory.cpp : Defines the entry point for the application.
//

#include "vektory.h"

using namespace std;

int main()
{
	int vektorAx;
	int vektorAy;
	int vektorBx;
	int vektorBy;

	printf("Zadejte vektor A: ");
	scanf_s("%d %d", &vektorAx, &vektorAy);

	printf("Zadejte vektor B: ");
	scanf_s("%d %d", &vektorBx, &vektorBy);

	int soucet1;
	soucet1 = vektorAx + vektorBx;
	int soucet2;
	soucet2 = vektorAy + vektorBy;


	printf("Soucet vektoru A a vektoru B: x = %d y = %d\n", soucet1, soucet2);


}
