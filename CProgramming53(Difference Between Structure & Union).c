#include<stdio.h>
#pragma pack(1)

struct Structure {

char A[10];
float B;
int C;
};

union Union {

char a[10];
float b;
int c;
};

int main() {

struct Structure Custom1;
union Union Custom2;

printf("Size of Structure: %ld \n", sizeof(Custom1));
printf("Size of Union: %ld \n", sizeof(Custom2));

return 0;
}
