#include <iostream.h>
#include<conio.h>

class MyClass {
    public:

    // Overloaded new
    void* operator new (size_t sz) {
	cout << "\n Object Created" ;
	// Invoke the default new operator
	return ::new MyClass();
    }

    // Overloaded delete
    void operator delete(void* ptr) {
	cout << "\n Object Destroyed" ;
	// Invoke the default delete operator
	::delete ptr;
    }
};

int main()
{
    clrscr();

    MyClass* obj = new MyClass();
    delete obj;

    getch();
    return 0;
}
