#include "Bus.h"
#include <iostream>
#include <sstream>
using namespace std;


int main()
{

	Bus r;
	r.Read();
	r.Display();
	cout << "Re_assignment: " << endl;
	r.Re_assignment();
	r.Display();
	cout << "Change: " << endl;
	r.Change();
	r.Display();
	return 0;
}