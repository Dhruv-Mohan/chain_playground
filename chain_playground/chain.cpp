#include "chain.h"

void chain::add_algo(std::shared_ptr<algorithm> incoming_algo)
{
	if (header_algo)
		link(incoming_algo);
	else
	{
		set_header(incoming_algo);
	}
	footer_algo = std::move(incoming_algo);
}

void chain::execute(std::shared_ptr<data> data_ptr)
{
	header_algo->execute(data_ptr);
}

void chain::link(std::shared_ptr<algorithm> incoming_algo)
{
	footer_algo->set_next_algorithm(incoming_algo);
}

void chain::set_header(std::shared_ptr<algorithm> incoming_algo)
{
	header_algo = incoming_algo;
}