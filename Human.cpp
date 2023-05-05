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
	Human& operator +(int val) {
		Human other = *this;
		other.age += val;
		return other;
	}
};

int main()
{
	Human h = { "Alex",50 };
	h = h + 1;
	
	cout << h.age;
}

