#include <cstdint>
#include "createRandomArray.h"

int main()
{
	int32_t *arr = createRandomArray(1000000000);

	delete[] arr;
	return 0;
}
