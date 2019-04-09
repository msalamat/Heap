//
// Created by Mohammad Salamat on 2019-04-09.
//

#ifndef HEAP_HEAP_HPP
#define HEAP_HEAP_HPP

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Heap {

	private:
		MyHeap<T> heap;

		Heap(vector<T> v) : heap(v){}

		static Heap* inst_ = nullptr;

	public:

		static Heap* getInstance() {
			if (inst_ == nullptr) {
				inst_ = new Heap();
			}
			return inst_;
		}

		/**
		 * Accepts an element and pushes it to the heap
		 * @param t some element
		 */
		void push(T t);

		/**
		 *	Removes and returns the root element in the heap
		 * @return T the root element
		 */
		T pop();

		void lol() {
			std::cout << "Lol" << std::endl;
		}
};

template<typename T>
void Heap<T>::push(T t) {

}

template<typename T>
T Heap<T>::pop() {
	return nullptr;
}

#endif //HEAP_HEAP_HPP
