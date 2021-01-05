#include "chain.h"

void chain::add_algo(std::shared_ptr<algorithm> incoming_algo)
{
	algo_chain.push_back(incoming_algo);
}

void chain::execute(std::shared_ptr<data> data_ptr)
{
	for (auto single_algo : algo_chain)
		single_algo->execute(data_ptr);
}

