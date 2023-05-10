#include <iostream>
using namespace std;

class mahasiswa {
public:
	int main;
	void showNim(); //deklarasi method
};

void mahasiswa::showNim() { //implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}