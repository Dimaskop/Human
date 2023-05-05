#include <iostream>

using namespace std;

class Human {
public:
	string name;
	int age = 0;

	void add_age (int x){
		age += x;
	}
	void add_age() {
		age += 1;
	}
};

int main()
{
	Human h = { "Alex",50 };
	h.add_age();
	h.add_age(2);
	cout << h.age;
}

