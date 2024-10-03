// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"

using namespace std;

int main()
{
	int cas;
	
	printf("Zadejte cas za ktery se ozve hrom: ");
	scanf_s("%d", &cas);

	int vzdalenost;

	vzdalenost = cas * 340;


	printf("Vzdalenost mista je = %d\n", vzdalenost);

	return 0;
}
