#pragma once
#include<iostream>
#include"RandomLib.h"
using namespace Random;

namespace Array
{
	void FillArrayWithRandomNumbers(int arr[100], int& arrLength) {
		std::cout << "\nEnter number of elements:\n";
		std::cin >> arrLength;
		for (int i = 0; i < arrLength; i++) {
			arr[i] = Random::RandomNumber(1, 100);
		}
	}

	void ShuffleArray(int arr[], int size) {	//	Fisher-Yates Shuffle Algorithm
		for (int i = size - 1; i > 0; i--) {
			int j = Random::RandomNumber(0, i);
			std::swap(arr[i], arr[j]);
		}
	}

	void PrintArray(int arr[], int size) {
		for (int i = 0; i < size; i++) {
			std::cout << arr[i] << ' ';
		}
		std::cout << std::endl;
	}

	void ReadArray(int arr[], int size) {
		for (int i = 0; i < size; i++)
		{
			std::cout << "Enter element num " << i + 1 << ": ";
			std::cin >> arr[i];
		}
	}

	bool IsPalindromeArray(int arr[], int size) {
		for (int i = 0; i < size / 2; i++)
			if (arr[i] != arr[size - 1 - i])
				return false;
		return true;
	}

	int FillArraySemiDynamic(int arr[], int size) {
		bool addMore = 0;
		int finalSize = 0;
		for (int i = 0; i < size; i++)
		{
			finalSize++;
			std::cout << "Enter a number: "; std::cin >> arr[i];
			std::cout << "Do you want to add more elements? [0]:No,[1]:Yes "; std::cin >> addMore;
			if (!addMore)break;
		}
		return finalSize;
	}
}
