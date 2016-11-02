/////////////
//Anna Tran
//CS 172 Sec 1
//12.2 
/////////////
#include<iostream>
#include<string>
using namespace std;

template<typename T>
T linearSearch(T list[], T key, int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}

int main()
{
	int intlist[] = { 1,4,4,2,5,-3,6,2 };
	double doublelist[] = { 1.1,4.1,4.2,2.1,5.1,-3.1,6.1,2 };
	string stringlist[] = { "abc","def","ghi","jkl","mno","pqr""stu","vwx" };

	cout << "linearSeach for int: " << linearSearch(intlist, 3, 8) << endl;
	cout << "linearSeach for double: " << linearSearch(doublelist, 3.1, 8) << endl;
	//FIX STRING linear search
	cout << "linearSeach for string: " << linearSearch(stringlist, "abc", 8) << endl;


	
}
