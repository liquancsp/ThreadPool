//
// Created by quan li on 16/6/13.
//

#include <logger.h>
#include <include/gtest/gtest.h>
#include <common.h>

using namespace threadpool::utils;
using namespace std;
TEST(logger, test) {
    logger log;
    // string param type for all log level
    log.debug("debug level log", __FILE__, __LINE__);
    log.info("info level log", __FILE__, __LINE__);
    log.warn("warn level log", __FILE__, __LINE__);
    log.error("error level log", __FILE__, __LINE__);
    log.fatal("fatel level log", __FILE__, __LINE__);

    // int param type for all log level
    log.debug(100, __FILE__, __LINE__);
    log.info(200, __FILE__, __LINE__);
    log.warn(300, __FILE__, __LINE__);
    log.error(400, __FILE__, __LINE__);
    log.fatal(500, __FILE__, __LINE__);

    // test check function
    check((1 == 2), __FILE__, __LINE__);
    check((1 == 1), __FILE__, __LINE__);
}