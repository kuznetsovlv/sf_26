#include <chrono>
#include <cstddef>
#include <cstdint>
#include <iostream>
#include <string>
#include "log.h"

void log(const std::string &logName, int64_t (*func)(const int32_t*, const size_t, const size_t), const int32_t *arr, const size_t size, const size_t secondSize)
{
	std::cout << "Starting test '" << logName << "'. Array's length is " << size << "." << std::endl;

	auto start = std::chrono::high_resolution_clock::now();

	int64_t result = func(arr, size, secondSize);

	auto finish = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double> elapsed = finish - start;

	std::cout << "Test '" << logName << "' finished. It took " << elapsed.count() << " sec." << std::endl;
}
