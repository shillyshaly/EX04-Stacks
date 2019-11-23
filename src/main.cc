//
// Created by aknight on 10/7/19.
//

#include <string>
#include <iostream>

//#include "balanced.h"
#include "../include/balanced.h"

using edu::vcccd::vc::csv15::balanced_parens;
using edu::vcccd::vc::csv15::balanced_curly;
using edu::vcccd::vc::csv15::balanced_angle;
using edu::vcccd::vc::csv15::balanced_square;

int main(int argc, char *argv[]) {
    std::string parens("(())");
    std::cout << (balanced_parens(parens) ? "balanced" : "unbalanced") << std::endl;

    std::string curly("{}}");
    std::cout << (balanced_curly(curly) ? "balanced" : "unbalanced") << std::endl;

    std::string angle("<><><>");
    std::cout << (balanced_angle(angle) ? "balanced" : "unbalanced") << std::endl;
}