//
// Created by quan li on 16/6/13.
//

#ifndef THREADPOOL_COMMON_H
#define THREADPOOL_COMMON_H

#include <logger.h>
#include <string>

using namespace std;
namespace threadpool {

    namespace utils {
        logger log;

        inline void check(bool exp, const char *const filename,
                          int line_num) {
            if (!exp) {
                log.error<string>("exp false", filename, line_num);
            }
        }
    }
}


#endif //THREADPOOL_COMMON_H
