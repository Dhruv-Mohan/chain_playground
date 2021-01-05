#include "algorithm.h"

algorithm::algorithm(std::shared_ptr<data> input_data) :data_ptr{ input_data }
{
}


void algorithm::set_next_algorithm(std::shared_ptr<algorithm> suceeding_algo)
{
	next_algo = suceeding_algo;
}

void algorithm::execute()
{
	compute();
	execute_next();

}

void algorithm::execute_next()
{
	if (next_algo)
		next_algo->execute();
}
