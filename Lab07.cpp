#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <vld.h>

void main()
{
	char *pointer = NULL;
	for (int i = 0; i < 10; i++) {
		pointer = new char[100];
	}
	 delete[] pointer;
      for (int i = 0; i < 10; i++)
	{
		std::unique_ptr <char> mass[100];
	}
   _CrtDumpMemoryLeaks();
}
