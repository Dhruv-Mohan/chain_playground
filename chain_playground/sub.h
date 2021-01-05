#pragma once
#include "algorithm.h"
class sub :
    virtual public algorithm
{
public:
    sub();
    ~sub();
    void compute(std::shared_ptr<data> data_ptr) override;
};

