#include "get_the_sum.h"
#include <string.h>
#include <iostream>
using namespace std;
get_the_sum::get_the_sum()
{
    //ctor
}

get_the_sum::~get_the_sum()
{
    //dtor
}

get_the_sum::get_the_sum(const get_the_sum& other)
{
    //copy ctor
}

get_the_sum& get_the_sum::operator=(const get_the_sum& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}


long double get_the_sum::get_da_number(long double nmbi){

     string jk;
     jk.clear();
     jk+=to_string(nmbi);
     //cout<<"using " << jk << " with " << nmbi <<"\n";
     char mk;
     int lk=0;
     long double smbi=0;
     for(int i=0;i<=jk.size()-1;i++){
        mk=jk.at(i);
        if(mk=='.'){
        //cout<<"exiting with " << smbi <<"\n";
         break;}
        lk=stoi(&mk);
        smbi+=lk;
     }

    return smbi;
}
