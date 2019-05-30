#include <iostream>
#include <list>
#include <iterator>
using namespace std;
class One
{
protected:
	int value;
public:
	One() { cout << "Hello from One:One()" << endl; }
	~One() { cout << "Hello from One:~One()" << endl; throw 1; }
};

class Two
{
protected:
	One tValue;
public:
	Two() { cout << "Hello from Two:Two()" << endl; }
	Two(One inputValue) :tValue(inputValue) { cout << "Hello from Two:Two(One inputValue)" << endl; };
	~Two() { cout << "Hello from Two:~Two()" << endl; }
};
int main()
{
	One o1;
	Two o2;
	system("pause");

	return 0;
}
