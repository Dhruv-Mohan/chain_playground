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
    void execute(std::shared_ptr<data> in_data_ptr) override;
private:
    std::shared_ptr<data2> data_ptr;
};

