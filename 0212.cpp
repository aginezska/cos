#include <iostream>
#include <random>
#include <cstdlib>
using namespace std;
int liczbaLosowa (const int arg1,const int arg2,default_random_engine& e)
{
    uniform_int_distribution<int> uniform_dist(arg1, arg2);
    return uniform_dist(e);
}
int main(){
    random_device r;
    default_random_engine e1(r());
    cout<<liczbaLosowa(1,6,e1);
    return 0;
}
