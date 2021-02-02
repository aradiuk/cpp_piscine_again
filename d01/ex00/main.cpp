#include "Pony.hpp"

Pony ponyOnTheStack() {
	Pony pony("ponyOnTheStack");
	pony.sayHello();
	return pony;
}


Pony* ponyOnTheHeap() {
	Pony* pony = new Pony("ponyOnTheHeap");
	pony->sayHello();
	return pony;
}

int main()
{
	Pony ponyStack = ponyOnTheStack();
	Pony* ponyHeap = ponyOnTheHeap();
	
	delete ponyHeap;
	return 0;
}
