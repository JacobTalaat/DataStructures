#include <iostream>
#include "StackLec2.h"

using namespace std;

int main()
{
	StackLec2 S;
	S.push(1);
	S.push(2);
	S.push(3);

	cout << "top= " << S.top() << endl;

	while (!S.IsEmpty())
	{
		cout << S.top() << endl;
		S.pop();
	}

	return 0;
}