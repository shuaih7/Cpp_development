
#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;

void Bvec(vector<int>&);

int main()
{
	// Part 1 --> Basic testing
	int *Array = new int[10];
	
	for(int i=0; i<10; i++)
		Array[i] = i;
	
	int *p = Array;
	Array = NULL;
	//cout << Array[3] << endl;
	//for (int i=0; i< 10; i++)
	//	cout << p[i] << endl;
	delete[] p;
	p = NULL;
	
	// Part 2 --> Vector testing
	vector<int> Avector;
	for(int i=0; i<20; i++)
		Avector.push_back(i);
	
	//cout << "Print out the values of A vector:" << endl;
	//for(vector<int>::iterator it=Avector.begin(); it!=Avector.end(); ++it)
	//	cout << *it << endl;
	
	//Bvec(Avector);\
	
	// Part 3 --> Referencing
	int *a = new int[0];
	for (int i=0; i<10; i++)
		a[i] = i;
	
	int*& b = a;
	
	a[2] = 250;
	for (int i=0; i<10; i++)
		cout << b[i] << endl;
	
	return 0;
}

void Bvec(vector<int>&Bv)
{
	cout << endl << "Print out the values of B vector:" << endl;
	for(vector<int>::iterator it=Bv.begin(); it!=Bv.end(); ++it)
		cout << *it << endl;
}