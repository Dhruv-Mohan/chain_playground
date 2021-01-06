#pragma once
#include<memory>
#include"data.h"
class algorithm
{public:
	algorithm();
	virtual ~algorithm() = default;
	void set_next_algorithm(std::shared_ptr<algorithm> suceeding_algo);
	void execute(std::shared_ptr<data> data_ptr);

protected:
	std::shared_ptr<algorithm> next_algo=0; 
	virtual void compute(std::shared_ptr<data> data_ptr) = 0;

};

