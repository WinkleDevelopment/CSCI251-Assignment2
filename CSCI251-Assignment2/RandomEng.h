/*
*
*	Bachelor of Computer Science (Software Engineering)
*
*				Kyle J. Brookes | 6822794
*
*					 Assignment 2
*
*/

#pragma once
#include "Libraries.h"

class RandomEng {
public:
	default_random_engine randEng;
public:
	template<typename T>
	T randInt(T min, T max) {
		int result;
		uniform_int_distribution<T> dist(min, max);
		return result = dist(randEng);
	}
};