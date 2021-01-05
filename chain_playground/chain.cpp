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

void chain::execute()
{
	header_algo->execute();
}

void chain::link(std::shared_ptr<algorithm> incoming_algo)
{
	footer_algo->set_next_algorithm(incoming_algo);
}

void chain::set_header(std::shared_ptr<algorithm> incoming_algo)
{
	header_algo = incoming_algo;
}