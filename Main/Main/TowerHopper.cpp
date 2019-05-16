#include "pch.h"

// https://www.youtube.com/watch?v=kHWy5nEfRIQ


namespace TowerHopper {

	bool is_hoppable(int A[], int size) {

		int i = 0;

		while (true) {

			if (A[i] + i >= size)
				return true;

			else if ( A[i] != 0 ) {

				int temp = A[i];

				A[i] = 0;

				i = temp + i;
			}

			else {

				if (i == 0) {
					break;
				}

				else
					--i;
			}
		}

		return false;
	}

	void print(int *A, int size) {

		for (int i = 0; i < size; ++i)
			std::cout << A[i] << " ";

		std::cout << std::endl;
	}

	void test() {

		int A[6] = { 0, 2, 0, 0, 1, 0 };

		print(A, 6);

		std::cout << is_hoppable(A, 6) << std::endl;

	}
}