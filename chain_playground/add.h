#pragma once
#include "algorithm.h"
#include "data.h"
#include <memory>
class add :
    private algorithm
{
public:
    add(std::shared_ptr<data> incoming_data);
    ~add();
    void compute();
};

