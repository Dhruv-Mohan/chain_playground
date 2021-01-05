#pragma once
#include<memory>
#include"data.h"
class algorithm
{public:
	algorithm(std::shared_ptr<data> input_data);
	virtual ~algorithm() = 0;
	void set_next_algorithm(std::shared_ptr<algorithm> suceeding_algo);
	void execute();
	virtual void compute()=0;

protected:
	std::shared_ptr<algorithm> next_algo=0;
	std::shared_ptr<data> data_ptr = 0;

private:
	void execute_next();
};

