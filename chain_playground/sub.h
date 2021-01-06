#pragma once
#include "algorithm.h"
class sub :
    virtual public algorithm
{
public:
    sub();
    ~sub();
    void execute(std::shared_ptr<data> in_data_ptr) override;
private:
    std::shared_ptr<data> data_ptr;
};

