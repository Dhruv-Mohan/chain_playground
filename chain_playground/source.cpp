#include"chain.h"
#include"add.h"
#include"sub.h"
#include"data.h"
#include<memory>
#include<iostream>

int main() 
{
	std::shared_ptr<data2> test_data = std::make_shared<data2>(data2(1.0, 2.1));
	std::shared_ptr<data> test_data2 = std::make_shared<data>(data());
	std::shared_ptr<algorithm> share_add(new add());
	std::shared_ptr<algorithm> share_sub(new sub());
	chain test_chain;

	//TODO: Add to builder class
	test_chain.add_algo(share_add);
	test_chain.add_algo(share_add);
	test_chain.add_algo(share_sub);
	test_chain.add_algo(share_sub);
	//test_chain.add_algo(share_sub);


	//Execution
	test_chain.execute(test_data);
	std::cout << "C=" << test_data->c << std::endl;
	std::cout << "D=" << test_data->d << std::endl;

	std::cout << "A=" << test_data2->a << std::endl;
	std::cout << "B=" << test_data2->b << std::endl;

	return 0;

	//Make adapter class to adapt data class to algo
}