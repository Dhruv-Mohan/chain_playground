#include"chain.h"
#include"add.h"
#include"data.h"
#include<memory>
void main() 
{
	std::shared_ptr<data> test_data = std::make_shared<data>(data(1, 2));
	add algo_add(test_data);


}