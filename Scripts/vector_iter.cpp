#include <iostream>
#include <vector>

using namespace std;

void print_vec(vector<int>::iterator iter);

int main()
{
	vector<int> vec = {0,1,2,3,4,5,6,7,8,9,10};
	print_vec(vec.begin());

	return 0;
}

void print_vec(vector<int>::iterator iter)
{
	cout << *(iter+100) << endl;
}