#include "sub.h"

sub::sub()
{
}

sub::~sub()
{
}

void sub::compute(std::shared_ptr<data> data_ptr)
{
	data_ptr->a = data_ptr->a - data_ptr->b;
}
