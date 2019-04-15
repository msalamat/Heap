#include <iostream>
#include <vector>

#include "Singleton.hpp"

int main() {

	Singleton<Patient>* s = Singleton<Patient>::getInstance();
	vector<Patient> patients;

	patients.emplace_back("Aoi Sora", 45);
	patients.emplace_back("Julia", 55);
	patients.emplace_back("Maki Otoha", 20);
	patients.emplace_back("Hina Wakaba", 30);
	patients.emplace_back("Chihiro Aoi", 90);
	patients.emplace_back("Maria Ozawa", 40);

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

	cout << "Me going to kick out everyone" << endl;
	s->kickOutEveryone();

	cout << "Do I have stuff?" << endl;
	s->meHasStuff() ? cout << "me have stuff" : cout << "me no have stuff";

	delete s;

	return 0;
}