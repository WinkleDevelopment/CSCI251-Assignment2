/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#include "Libraries.h"

class RandomEng {
public:
	default_random_engine randEng;

	int randInt(int min, int max) {
		int result;
		uniform_int_distribution<int> dist(min, max);
		return result = dist(randEng);
	}

	float randFloat(float min, float max) {
		float result;
		uniform_int_distribution<float> dist(min, max);
		return result = dist(randEng);
	}
};