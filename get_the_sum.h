#ifndef GET_THE_SUM_H
#define GET_THE_SUM_H
#include <string.h>
#include <iostream>
using namespace std;


class get_the_sum
{
    public:
        get_the_sum();
        virtual ~get_the_sum();
        get_the_sum(const get_the_sum& other);
        get_the_sum& operator=(const get_the_sum& other);
        long double get_da_number(long double nmbi);

    protected:

    private:
};

#endif // GET_THE_SUM_H
