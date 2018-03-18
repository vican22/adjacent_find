#include<iostream>
#include<array>
#include<algorithm>

using namespace std;



int main() {
	array<int, 10> a = { 1, 8, 1, 4, 5, 6, 7, 8, 9, 10 };
	
	auto it = adjacent_find(a.begin(), a.end());

	if (it == a.end())
	{
		cout << "Ne postoje dva uzastopna broja!" << endl;
	}
	else
	{
		cout << *it << endl;
	}
	


	return 0;
}
