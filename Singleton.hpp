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

		static Singleton* s_;

		/**
		 * Singleton
		 * @return our Singleton instance
		 */
		static Singleton* getInstance() {
			if (s_ == nullptr) {
				s_ = new Singleton();
			}
			return s_;
		}

		/**
		 * Add an entry
		 * @param p T anything
		 */
		void addEntry(T p) {
			entities.push(p);
		}

		/**
		 * Get the most important entity
		 * @return T anything
		 */
		T getMostImportantEntity() {
			return entities.pop();
		}

		/**
		 * Get the number of stuff in your list
		 * @return the number of items
		 */
		int numberOfThings() {
			return entities.size();
		}

		/**
		 * Check whether or not there are things in your list
		 * @return bool
		 */
		bool meHasStuff() {
			return entities.is_empty();
		}

		/**
		 * Clear the list. Free the list! Empty the list!!
		 */
		void kickOutEveryone() {
			entities.clear();
		}

		/**
		 * Display the contents of your list
		 */
		void print() {
			cout << entities;
		}

		// don't let other people construct our hospital (Singleton)
		Singleton(Singleton const &) = delete; // no copy constructor for u
		void operator=(Singleton const&) = delete; // no assignment operator for u jeff

};
template<typename T>
Singleton<T>* Singleton<T>::s_ = nullptr;
#endif //HEAP_SINGLETON_HPP
