#include"chain.h"
#include"add.h"
#include"sub.h"
#include"data.h"
#include<memory>
#include<iostream>

int main() 
{
	std::shared_ptr<data> test_data = std::make_shared<data>(data(1, 2));
	add algo_add;
	std::shared_ptr<algorithm> share_add(new add);
	std::shared_ptr<algorithm> share_sub(new sub);
	chain test_chain;

	//TODO: Add to builder class
	test_chain.add_algo(share_add);
	test_chain.add_algo(share_add);
	test_chain.add_algo(share_sub);
	test_chain.add_algo(share_sub);
	test_chain.add_algo(share_sub);


	//Execution
	test_chain.execute(test_data);
	std::cout << "A=" << test_data->a << std::endl;
	std::cout << "B=" << test_data->b << std::endl;

	return 0;
}