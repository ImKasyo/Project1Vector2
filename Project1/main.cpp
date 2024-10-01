#include<iostream>
#include"Vector.h"
using namespace std;

int main()
{
	srand(time(0));
	Vector obj1(5);
	obj1.InputRand();
	obj1.Print();

	obj1.PushBack(100);
	obj1.Print();
	obj1.PushBack(200);
	obj1.Print();

	int last = obj1.PopBack();
	obj1.Print();
	cout << "Last = " << last << endl;
	last = obj1.PopBack();
	obj1.Print();
	cout << "Last = " << last << endl;

	
    Vector myVector(3);

    myVector.PuchFront(10);
    myVector.PuchFront(20);
    myVector.PuchFront(30);
    cout << "После PuchFront:" << endl;
    myVector.Print(); 

    myVector.PushFront(2, 12); 
    cout << "После PushFront (index 2, value 12):" << endl;
    myVector.Print(); 

    myVector.DeleteIndex(2); 
    cout << "После DeleteIndex (index 2):" << endl;
    myVector.Print(); 

  
    int addArr[] = { 40, 50 };
    myVector.AddArrPushBack(addArr, 2);
    cout << "После AddArrPushBack:" << endl;
    myVector.Print(); 

}