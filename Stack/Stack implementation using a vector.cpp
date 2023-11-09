/* Stack implementation using a vector */
#include <iostream>
#include <vector>
using namespace std;

class Stack{
private:
    vector<int> vec;
public:
    void push (int element){
        vec.push_back(element);
    }
    int pop (){
        int lastElement = vec.back();
        vec.pop_back();
        return lastElement;
    }
};
