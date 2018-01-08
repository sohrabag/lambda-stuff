// Lambda-stuff.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//============================

	class foo {
	public:
		foo() : _x(3) { _vec.push_back("item1"); _vec.push_back("item2"); }
		void func() {
			//pure lambda expression is used in this part and we need to do that 
			[this]() -> int { cout << _x; cout << endl << "the all are in one line" << endl; return _x; } ();
			//for each go through collection vector without using lambda 
			for each (auto item in _vec)
			{
				cout << item.c_str() << endl;
			}
			//regular for loop without any lambda
			for (auto iter = _vec.begin(), end = _vec.end(); iter != end; iter++)
			{
				cout << iter->c_str() << endl;
			}
			//function from STL algorithms
			for_each(_vec.begin(), _vec.end(), [](string val) {cout << val.c_str() << endl; });
		}
	private:
		int _x;
		vector<string> _vec;
};


int main()
{
	//lambda expressions
	[]() {}; //simplest form
	//declare foo class
	foo fuu;
	//call func method
	fuu.func();
//	_________________________________
	typedef int (*f)(int);
	int name = 90;
	f f1 = [](int i) -> int { cout << "The value of i is:" << i << endl; return i; };
	int j = f1(10);
//_______________________________________________________

    return 0;
}

