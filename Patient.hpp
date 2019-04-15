//
// Created by Mohammad Salamat on 2019-04-09.
//

#ifndef HEAP_PATIENT_HPP
#define HEAP_PATIENT_HPP


#include <utility>
#include <string>

class Patient {
	public:
		std::pair<std::string, int> person;

		Patient(std::string name, int severity) : person(name, severity){}

//		Patient(std::string name, int severity){
//			person.first = name;
//			person.second = severity;
//		}

		/**
		 * Check if a LHS Patient is less than the RHS Patient
		 * @param p a Patient
		 * @return bool
		 */
		bool operator<(const Patient& p) {
			return person.second < p.person.second;
		}
};
#endif //HEAP_PATIENT_HPP
