//#define _CRT_SECURE_NO_WARNINGS #include <stdio.h>
#include <cstdlib> #include <cstring>


#define DESTROY_VALUE_1 10000
#define DESTROY_VALUE_2 10000

void checkStackDestroy() {
char buffer[DESTROY_VALUE_1 * DESTROY_VALUE_2]; bool value = buffer[0] > 0;
}
void checkStackInit(const char* src) { char buffer[5];
strcpy(buffer, src);
}

void checkStackSafeInit(const char* src) { char buffer[5];
strcpy_s(buffer, src);
}

void checkStackUndefined() {
int stack[DESTROY_VALUE_1];
printf("stack info: %d", stack[DESTROY_VALUE_1 + 1]);
}
int main() {
char* line = "Check Line";

checkStackDestroy(); checkStackUndefined(); checkStackInit(line); checkStackSafeInit(line); system("pause");
return 0;
 
}
