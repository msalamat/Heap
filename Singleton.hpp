//
// Created by Mohammad Salamat on 2019-04-09.
//

#ifndef HEAP_SINGLETON_HPP
#define HEAP_SINGLETON_HPP

#include <vector>

#include "Heap.hpp"
#include "Patient.hpp"

template<typename T>
class Singleton {
	private:
		Singleton() = default;
	public:
		Heap<T> entities;
//		vector<T> heap;


		static Singleton* something;
		static Singleton* getInstance() {
			if (something == nullptr) {
				something = new Singleton();
			}
			return something;
		}


		void addEntry(T p) {
			entities.push(p);
		}

		T getMostImportantEntity() {
			return entities.pop();
		}

		int numberOfThings() {
			return entities.size();
		}

		bool meHasStuff() {
			return entities.is_empty();
		}

		void kickOutEveryone() {
			entities.clear();
		}

		void print() {
			cout << entities;
		}

		// don't let other people construct our hospital (Singleton)
		Singleton(Singleton const &) = delete; // no copy constructor for u
		void operator=(Singleton const&) = delete; // no assignment operator for u jeff

};
template<typename T>
Singleton<T>* Singleton<T>::something = nullptr;
#endif //HEAP_SINGLETON_HPP
