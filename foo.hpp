#pragma once
#include<iostream>
#include "Human.hpp"
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{   
    
    std::vector< char > result(people.size(),'y');
    auto                iter = result.rbegin();
    for (auto &i : people) {
        i.birthday();
        if (i.isMonster())
            *iter = 'n';
        iter++;
    }
    return result;
}
