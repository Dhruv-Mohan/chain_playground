#include "sub.h"

sub::sub()
{
}

sub::~sub()
{
}

void sub::execute(std::shared_ptr<data> in_data_ptr)
{
	data_ptr->a = data_ptr->a - data_ptr->b;
}
