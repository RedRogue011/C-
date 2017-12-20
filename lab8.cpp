#include "stdafx.h"
#include <iostream>

using namespace std;

void swapValues(int &x, int &y);
void calcRectangle(float &answer);

int main()
{


	// part 1
	int i = 5;
	int j = 10;

	cout << "i = " << i << " , j = " << j << endl;
	swapValues(i, j);
	cout << "i = " << i << " , j = " << j << endl;


	// part 2
	float myAnswer = 0;

	cout << "Answer before we call subroutine: " << myAnswer << endl;
	calcRectangle(myAnswer);
	cout << "Answer to 120ft * 4.5ft = " << myAnswer << "ft" << endl;


	system("pause");
	return 0;
}

//Part 2
void calcRectangle(float &answer)
{
	answer = 120.0 * 4.5;
}

// part 1
void swapValues(int &x, int &y)
{
	// Instead of using a temporary variable, for integers we can do some math to swap the values

	x = x + y; // Given the example in main(), this value would be 5 + 10 = 15
	y = x - y; // 15 - 10 = 5
	x = x - y; // 15 - 5 = 10
}