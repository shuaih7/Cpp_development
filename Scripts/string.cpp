#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main ()
{
	std::string a = "asdfghj"; // If not using namespace std, you should declare the string in this way
	std::string b = a.substr(0,0);
	//std::cout << b.size() << std::endl;
	//cout << typeid(a.at(0)).name() << endl; // The string at() operation returns a char, not a string
	
	vector<int> hash(256, -1);
	for (int i=0; i<hash.size(); i++) hash[i] = i;
	for (int i=0; i<a.size(); i++) // treat the ASCII table as a hash map
		cout << hash[a[i]] << endl;
	
	return 0;
}