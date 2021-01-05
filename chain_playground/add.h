#pragma once
#include "algorithm.h"
#include "data.h"
#include <memory>
class add :
    virtual public algorithm
{
public:
    add();
    ~add();
    void compute(std::shared_ptr<data> data_ptr) override;
};

