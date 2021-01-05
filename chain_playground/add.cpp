#include "add.h"

add::add()
{

}

add::~add()
{
}

void add::compute(std::shared_ptr<data> data_ptr)
{
	data_ptr->a = data_ptr->a + data_ptr->b;

}
