// vektory.cpp : Defines the entry point for the application.
//

#include "vektory.h"

using namespace std;

int main()
{
	int vektorA;
	int vektorB;

	printf("Zadejte vektor A a vektor B: ");
	scanf_s("%d %d", &vektorA, &vektorB);

	int soucet;
	soucet = vektorA + vektorB;

	printf("Soucet vektoru A a vektoru B = %d\n", soucet);

}
