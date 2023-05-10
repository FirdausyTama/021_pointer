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

int main()
{
	mahasiswa mhs{ 1 };		//object mahasiswa
	mhs.showNim();			//member acces operator

	mahasiswa ref = mhs;	//pointer reference refmhs
	ref.nim = 2;			//member acces operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs; //pointer deference pMhs
	pMhs->showNim = 3;		//arrow operator
	mhs.showNim();
	system("pause");
	return 0;
}