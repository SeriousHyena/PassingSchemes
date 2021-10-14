#include <iostream>

using namespace std;

void valueChanged1(int someNum);
void valueChanged2(int& someNum);
void threeTimesN(int byVal, int byRef);

int main()
{
	int myNumber = 20;
	
	void threeTimesN(int byVal, int byRef);

	cout << "Before valuChanged1 call, myNumber is: " << myNumber << endl;		//should return 20
	valueChanged1(myNumber);
	cout << "After valueChanged1 call, myNumber is: " << myNumber << endl;		//should return 20

	cout << endl << endl;
	cout << "myNumber is currently: " <<myNumber << endl;
	valueChanged2(myNumber);
	cout << "After valuechanged2 call, myNumber is: " << myNumber << endl;
	


	return 0;
}

void threeTimesN(int byVal, int byRef)
{

}

void valueChanged1(int someNum)
{
	someNum = 100;
	
	cout << "someNum in valueChanged1 is: " << someNum << endl;
}

void valueChanged2(int& someNum)
{
	someNum = 100;

	cout << "someNum in valueChanged1 is: " << someNum << endl;
}