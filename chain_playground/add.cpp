#include "add.h"

add::add(std::shared_ptr<data> incoming_data): algorithm(incoming_data)
{

}

add::~add()
{
}

void add::compute()
{
	data_ptr->a = data_ptr->a + data_ptr->b;

}
