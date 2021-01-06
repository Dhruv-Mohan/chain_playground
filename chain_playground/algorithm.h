#pragma once
#include<memory>
#include"data.h"
class algorithm
{public:
	algorithm();
	virtual ~algorithm() = default;
	virtual void execute(std::shared_ptr<data> in_data_ptr)=0;

};

