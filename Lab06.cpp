#include <stdio.h> #include <cstdlib> #include <cstring>

void printStack(int stack[], int stackSize) { for (int i = 0; i < stackSize; i++) {
printf("stack %d: %d\n", i, stack[i]);
}
}


void printCell(char* someMemoryCell) { printf("memory cell: %s\n", someMemoryCell);
}


int main() {
setvbuf(stdout, NULL, _IONBF, 0); printf("=================Part1\n"); int size = 10;
int *newStack = new int[size];
 
for (int i = 0; i < size; i++) {
newStack[i] = 0 + rand() % 100;
}
printStack(newStack, size);


printf("=================Part2\n"); char* cell = new char[15]; printCell(cell);
cell = "some text"; printCell(cell);

delete[] newStack; delete cell; system("pause"); return 0;
}
