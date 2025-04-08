#include<stdio.h>

int externVar  = 5;

void CustomFunction() {

auto int autoVar = 0;
static int staticVar = 0;

autoVar++;
staticVar++;

printf("autoVar (auto): %d \n", autoVar);
printf("staticVar (static): %d \n", staticVar);

}

void RegisterFunction() {

register int registerVar = 10;
printf("registerVar (register): %d \n", registerVar);

}

void ExternalFunction() {

extern int externVar;
printf("externVar (extern): %d \n", externVar);

}

int main() {

printf("\nCalling the CustomFunction \n");

CustomFunction();
CustomFunction();
CustomFunction();

printf("\nCalling the RegisterFunction \n");

RegisterFunction();

printf("\nCalling the ExternalFunction \n");

ExternalFunction();

return 0;
}
