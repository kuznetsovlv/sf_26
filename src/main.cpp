#include <cstdint>
#include "createRandomArray.h"
#include "log.h"
#include "processors.h"
#include "randomize.h"

int main()
{
	int32_t *arr = createRandomArray(1000000000);

	delete[] arr;
	return 0;
}
