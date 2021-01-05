#include"chain.h"
#include"add.h"
#include"data.h"
#include<memory>
#include<iostream>

int main() 
{
	std::shared_ptr<data> test_data = std::make_shared<data>(data(1, 2));
	add algo_add;
	std::shared_ptr<algorithm> share_add(new add);
	std::shared_ptr<algorithm> share_add2(new add);
	chain test_chain;
	test_chain.add_algo(share_add);
	test_chain.add_algo(share_add2);
	test_chain.execute(test_data);
	std::cout << "A=" << test_data->a << std::endl;
	std::cout << "B=" << test_data->b << std::endl;
	/*multiple improvements required!
	* disconnect data ptr from algos
	* add data_ptr to chain executor 
	* fix moving of refrences in chain add.
	* i.e there should be no need to init multiple instances of the same algo object 
	*/
	return 0;
}