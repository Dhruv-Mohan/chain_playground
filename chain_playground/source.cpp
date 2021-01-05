#include"chain.h"
#include"add.h"
#include"data.h"
#include<memory>
#include<iostream>

int main() 
{
	std::shared_ptr<data> test_data = std::make_shared<data>(data(1, 2));
	add algo_add(test_data);
	std::shared_ptr<algorithm> share_add(new add(test_data));
	//chain test_chain;
	//test_chain.add_algo(algo_add);
	//test_chain.execute();
	std::cout << "A=" << test_data->a << std::endl;
	std::cout << "B=" << test_data->b << std::endl;
	
	return 0;
}