// 
//  Created by Oleh Kurachenko
//         aka okurache
//  on 2018-05-29T11:13:07Z as a part of c3pm_test_polynomial2
//  
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

/*
 *  This is a dummy unit test program, created not to really test something, but to represent the
 *  idea of project structure and how it interacts with other project while using c3pm
 *  Link: https://github.com/c3pm/c3pm
 */

#include <iostream>
#include "exports/polynomial2.h"

int main() {
    if (polynomial2(3, 5, 6) != 40) {
        std::cerr << "test failed: polynomial2(3, 5, 6) = " << polynomial2(3, 5, 6) << std::endl;
        return 0;
    }
    if (polynomial2(-12, 1, 23) != 168) {
        std::cerr << "test failed: polynomial2(-12, 1, 23) = " << polynomial2(-12, 1, 23) << std::endl;
        return 0;
    }
    if (polynomial2(0, 5, 34) != 59) {
        std::cerr << "test failed: polynomial2(0, 5, 34) = " << polynomial2(0, 5, 34) << std::endl;
        return 0;
    }
    std::cout << "Tests passed, all ok!" << std::endl;
    return 0;
}