#include <cstdint>
#include <cstdlib>
#include <ctime>

size_t randomize(size_t from = 0, size_t to = (size_t) - 1)
{
	static bool initiated = false;

	if(!initiated)
	{
		srand(time(nullptr));
		initiated = true;
	}

	int32_t randoms[] = {rand(), rand()};
	size_t result = *(reinterpret_cast<size_t*>(randoms));

	result = from + result * static_cast<double>(to - from) / ((size_t) - 1);

	return result;
}
