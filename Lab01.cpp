#include <iostream.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void main()
{

  int *checkMalloc = (int*)malloc(sizeof(int));
  cout << "Value of func MallocPreInit = " << *checkMalloc << endl;
  *checkMalloc = 10;
  cout << "Adress Value of func Malloc = " << checkMalloc << endl;
  cout << "Value of func Malloc = " << *checkMalloc << endl;

  int *checkPrevMalloc = checkMalloc;

  free(checkMalloc);

  cout << "Adress Value of PrevFuncMalloc = " << checkPrevMalloc << endl;
  cout << "Value of checkPrevFuncMalloc = " << *checkPrevMalloc << endl;

  ////
  int *checkNew = new int();
  cout << "Value of checkFuncNewPreInit = " << *checkNew << endl;
  *checkNew = 10;
  cout << "Adress of checkFuncNew = " << checkNew << endl;
  cout << "Value of checkFuncNew = " << *checkNew << endl;

  int *checkPrevNew = checkNew;

  delete checkNew;

  cout << "Adress of PrevFuncNew = " << checkPrevNew << endl;
  cout << "Value of PrevFuncNew = " << *checkPrevNew << endl;

  ///
  int *checkCalloc = (int*)calloc(1,sizeof(int));
  cout << "Value of checkFuncCallocPreInit = " << *checkCalloc << endl;
  *checkCalloc = 10;
  cout << "Adress of checkFuncCalloc = " << checkCalloc << endl;
  cout << "Value of checkFuncCalloc = " << *checkCalloc << endl;

  int *checkPrevCalloc = checkCalloc;

  free(checkCalloc);

  cout << "Adress of PrevFuncCalloc = " << checkPrevCalloc << endl;
  cout << "Value of PrevFuncCalloc = " << *checkPrevCalloc << endl;
  system("pause");
}
