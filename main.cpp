#include <iostream>
#include <vector>

#include "Singleton.hpp"

int main() {

	Singleton<Patient>* s = Singleton<Patient>::getInstance();
//	Singleton<int>* s3 = Singleton<int>::getInstance();
//	Singleton<Patient>* s2 = Singleton<Patient>::getInstance();

	std::cout << s << endl;
	auto addr = reinterpret_cast<uintptr_t>(&s);

	vector<Patient> patients;

	patients.emplace_back("Aoi Sora", 45);
	patients.emplace_back("Jessica", 55);
	patients.emplace_back("Johanna Bazingas", 20);
	patients.emplace_back("Lil Roro", 30);
	patients.emplace_back("Futile Dinklebutt", 90);
	patients.emplace_back("Masterado Indigogo", 40);


	for (auto it = patients.begin(); it != patients.end(); ++it) {
		s->addEntry(*it);
	}

	s->print();

	cout << "Most important person: " << s->getMostImportantEntity().person.first << endl;
	cout << "Me only have " << s->numberOfThings() << " left"<< endl;

	s->print();

	cout << "Most important person " << s->getMostImportantEntity().person.first << endl;
	cout << "Me only have " << s->numberOfThings() << " left"<< endl;

	s->print();

	cout << "Most important person " << s->getMostImportantEntity().person.first << endl;
	cout << "Me only have " << s->numberOfThings() << " left"<< endl;

	s->print();


	if (s->meHasStuff()) {
		cout << "me have stuff!" << endl;
	} else {
		cout << "me no have stuff" << endl;
	}

	cout << "Me going to kick out everyone" << endl;
	s->kickOutEveryone();


	cout << "Do I have stuff?" << endl;
	if (s->meHasStuff()) {
		cout << "me have stuff" << endl;
	} else {
		cout << "me no have stuff" << endl;
	}

	delete s;

//	int *nb = (int *) addr;
//	*nb = 0x00001234;


	int volatile * const p_reg = (int *) addr;
	*p_reg = 55;

	delete s;
	delete s;
	delete s;


	return 0;
}