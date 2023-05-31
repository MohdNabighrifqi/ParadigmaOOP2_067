#include<iostream>
using namespace std;

class baseClass final {
public:
	virtual void perkenalan() {
		cout << "Hallo saya function dari baseClass";
	}
};

class derivedClass : public baseClass {
public:
	void perkenalan() {
		cout << "Hallo saya function dari derivedClass";
	}
};

int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}