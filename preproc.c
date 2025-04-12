// main.c
#include "skow.h"
#include <stdio.h>
#include "skow.h" // included again by mistake (it will be handled automatically with GUARDS 𝌾)

int main()
{
	hello();
	return 0;
}
