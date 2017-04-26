#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool firstLast6(vector<int> v);

int main()
{
	vector<int> a1;
	a1.push_back(1);
	a1.push_back(2);
	a1.push_back(6);
	assert(firstLast6(a1) == true);
	
	vector<int> a2;
	a2.push_back(6);
	a2.push_back(1);
	a2.push_back(2);
	a2.push_back(3);
	assert(firstLast6(a2) == true);
	
	vector<int> a3;
	a3.push_back(13);
	a3.push_back(6);
	a3.push_back(1);
	a3.push_back(2);
	a3.push_back(3);
	assert(firstLast6(a3) == false);
	
	vector<int> a4;
	a4.push_back(1);
	a4.push_back(2);
	a4.push_back(3);
	a4.push_back(4);
	a4.push_back(5);
	assert(firstLast6(a4) == false);
	
	vector<int> a5;
	a5.push_back(6);
	a5.push_back(1);
	a5.push_back(2);
	assert(firstLast6(a5) == true);

	

return 0;
}
//**************************************

bool firstLast6(vector<int> v)
{

	bool istrue = false;
	for(int ix = 0; ix < v.size(); ix++)
	{
		if (v[0] == 6 || v[v.size() -1] == 6)
		{
			istrue = true;
		}
	}
	return istrue;
}
