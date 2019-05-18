#pragma once

#include <type_traits>

int helper(int n);

template <typename T>
int countCows(T n) {

	//std::cout << std::is_same<T, int>::value << std::endl;

	if (std::is_same<T, int>::value)
	{
		return helper(n+1);
	}

	else
		return 0;
}

int helper(int n) {

	int kids = 0;

	if (n - 3 <= 0)
		return 1;

	else {

		for (int i = 1; i <= n - 3; ++i) {

			kids += helper(i);
		}

		return kids + 1;
	}
}

namespace CountCows {

	void test() {

		std::cout << countCows(4) << std::endl;


		//countCows(a);
	}
}