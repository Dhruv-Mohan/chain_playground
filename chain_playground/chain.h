#pragma once
#include"algorithm.h"
#include<memory>
#include<vector>
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
	void execute(std::shared_ptr<data> in_data_ptr);
private: 
	std::vector<std::shared_ptr<algorithm>> algo_chain;
};

