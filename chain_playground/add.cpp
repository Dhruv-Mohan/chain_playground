#include "add.h"

add::add()
{
	
}

add::~add()
{
}

void add::execute(std::shared_ptr<data> in_data_ptr)
{
	data_ptr = std::static_pointer_cast<data2>(in_data_ptr);
	data_ptr->c = data_ptr->c + data_ptr->d;

}
