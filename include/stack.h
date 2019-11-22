//
// Created by aknight on 11/10/19.
//

#ifndef EX04_STACKS_STACK_H
#define EX04_STACKS_STACK_H

// Uncomment below if you want to use STL lists
 #include <list>
 using std::list;

// Remove this if you want to use STL lists
#include <cstdio>
//#include "list.h"

namespace edu { namespace vcccd { namespace vc { namespace csv15 {
    template <typename Ty>
    class stack {
        list<Ty> _stack;

    public:
        stack(): _stack() {}
        stack(const stack& x): _stack(x._stack) {}
        stack(stack &&x): _stack(x._stack) {}

    public:
        // Fill in your code below
        bool empty() const { (!_stack.empty()) ? false : true; }
        size_t size() const { return _stack.size(); }
        const Ty &top() const { return _stack[0]; }
        void push(const Ty &val) { _stack.push_front(val); }
        void pop() { _stack.pop_front(); }
    };
}}}}

#endif //EX04_STACKS_STACK_H
