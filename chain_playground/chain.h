#pragma once
#include"algorithm.h"
#include<memory>
class chain
{
public:
	chain()
	{

	}
	~chain()
	{

	}
	void add_algo(std::shared_ptr<algorithm> incoming_algo);
	void execute(std::shared_ptr<data> data_ptr);
private:
	void link(std::shared_ptr<algorithm> incoming_algo);
	void set_header(std::shared_ptr<algorithm> incoming_algo);
	std::shared_ptr<algorithm> header_algo=0, footer_algo=0;
};

