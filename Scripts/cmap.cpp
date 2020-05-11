#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<char, int> cmap;
	
	cmap.insert(pair<char, int> ('a', 1));
	cmap.insert(pair<char, int> ('b', 2));
	cmap.insert(pair<char, int> ('c', 3));
	cmap.insert(pair<char, int> ('d', 4));
	cmap['e'] = 5;
	
	cout << "Finished." << endl;
	
	return 0;
}