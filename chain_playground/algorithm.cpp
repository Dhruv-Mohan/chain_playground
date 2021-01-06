#include "algorithm.h"

algorithm::algorithm()
{
}


void algorithm::set_next_algorithm(std::shared_ptr<algorithm> suceeding_algo)
{
	next_algo = suceeding_algo;
}

void algorithm::execute(std::shared_ptr<data> data_ptr)
{
	compute(data_ptr);
}
