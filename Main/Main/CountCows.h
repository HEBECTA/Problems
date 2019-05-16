#pragma once

#include <type_traits>

template <typename T>
int countCows(T n) {

	//if ( typeid(int) == typeid(n)  {

		//std::cout << true << std::endl;
	//}

	std::cout << std::is_same<T, int>::value << std::endl;


	//else
	return 0;
}

void test() {


	int a = 5;


	countCows(a);
}