//
// Created by Mohammad Salamat on 2019-04-09.
//

#ifndef HEAP_HEAP_HPP
#define HEAP_HEAP_HPP

#include <iostream>
#include <vector>
#include <algorithm> // for heap

using namespace std;

template <typename T>
class Heap {

	private:
		void heapify() {
			make_heap(container.begin(), container.end());
		}

	public:
		vector<T> container;
		Heap() = default;

		/**
		 * Accepts an element and pushes it to the heap
		 * @param t some element
		 */
		void push(T t) {
			container.push_back(t);
			heapify();
		}

		/**
		 *	Removes and returns the root element in the heap
		 * @return T the root element
		 */
		T pop() {
			// big shout out to https://en.cppreference.com/w/cpp/algorithm/pop_heap
			pop_heap(container.begin(), container.end()); // moves the largest to the end
			T largest = container.back();
			container.pop_back(); // actually removes it
			return largest;
		}

		int size() {
			return static_cast<int>(container.size());
		}

		bool is_empty() {
			return container.size() != 0;
		}

		void clear() {
			container.clear();
		}

		friend ostream& operator<<(ostream& os, const Heap& h) {

			for (auto it = h.container.begin(); it != h.container.end(); ++it) {
				os << it->person.second << " ";
			}

			os << endl;
			return os;
		}

};


#endif //HEAP_HEAP_HPP
