//
// Created by aknight on 11/10/19.
//

#ifndef EX04_STACKS_BALANCED_H
#define EX04_STACKS_BALANCED_H

#include <string>
#include "stack.h"

namespace edu { namespace vcccd { namespace vc { namespace csv15 {
    template <char Open, char Close>
    struct Balancer {
        bool operator ()(const std::string &code) {
            stack<char> s;
            char ch;
            for(auto i = 0; i < code.size(); i++){
                if(code[i] == '(' || code[i] == '{' || code[i] == '[' || code[i] == '<'){
                    s.push(code[i]);
                }
                if(s.empty()){
                    return false;
                }else if(code[i] == ')') {
                    ch = s.top();
                    s.pop();
                    if(ch == '}' || code[i] == ']' || code[i] == '>'){
                        return false;
                    }
                }else if(code[i] == '}') {
                    ch = s.top();
                    s.pop();
                    if(ch == ')' || code[i] == ']' || code[i] == '>'){
                        return false;
                    }
                }else if(code[i] == ']') {
                    ch = s.top();
                    s.pop();
                    if(ch == '}' || code[i] == ')' || code[i] == '>'){
                        return false;
                    }
                }else if(code[i] == '>') {
                    ch = s.top();
                    s.pop();
                    if(ch == '}' || code[i] == ']' || code[i] == ')'){
                        return false;
                    }
                }
            }return (s.empty());
        }
    };

    extern Balancer<'(', ')'> balanced_parens;
    extern Balancer<'{', '}'> balanced_curly;
    extern Balancer<'[', ']'> balanced_square;
    extern Balancer<'<', '>'> balanced_angle;
}}}}

#endif //EX04_STACKS_BALANCED_H
