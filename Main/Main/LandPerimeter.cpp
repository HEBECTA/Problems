#include "pch.h"
#include <string>
#include <iostream>

int landPerimeter(std::string arr[], int size) {

	int lands = 0;

	int collisions = 0;

	int width = arr[0].length();

	for (int y = 0; y < size; ++y) {

		for (int x = 0; x < width; ++x) {

			std::cout << arr[y][x];
		}

		std::cout << y << std::endl;
	}

	std::cout << std::endl;

	for (int y = 0; y < size; ++y) {

		for (int x  = 0; x  < width; ++x) {


			// check right
			if (arr[y][x] == 'X') {

				++lands;

				if ( x  <= width - 2) {

					if (arr[y][x+1] == 'X') {

						++collisions;
					}
				}

				// check left
				if (y <= size - 2) {

					if (arr[y + 1][x] == 'X') {

						++collisions;
					}
				}
			}
		}
	}

	std::cout << lands << " " << collisions << std::endl;

	return (lands * 4) - (collisions * 2);
}