//
// Created by quan li on 16/6/13.
//

#ifndef THREADPOOL_LOGGER_H
#define THREADPOOL_LOGGER_H


#include <cstdlib>
#include <cassert>
#include <ctime>
#include <sstream>
#include <iostream>
#include <vector>

namespace threadpool {
    namespace utils {
        enum {
            DEBUG,
            INFO,
            WARN,
            ERROR,
            FATAL,
        };

        static const char *LEVEL_ARRAY[] = {"DEBUG", "INFO", "WARN", "ERROR", "FATAL"};
        static const char *TIME_FORMAT = "%Y-%m-%d %H:%M:%S";

        class logger {
        public:
            template<typename T>
            void debug(T &&t, const char *const filename, int line_num) {
                print_log(t, DEBUG, filename, line_num);
            }

            template<typename T>
            void info(T &&t, const char *const filename, int line_num) {
                print_log(t, INFO, filename, line_num);
            }

            template<typename T>
            void warn(T &&t, const char *const filename, int line_num) {
                print_log(t, WARN, filename, line_num);
            }

            template<typename T>
            void error(T &&t, const char *const filename, int line_num) {
                print_log(t, ERROR, filename, line_num);
            }

            template<typename T>
            void fatal(T &&t, const char *const filename, int line_num) {
                print_log(t, FATAL, filename, line_num);
            }

        protected:
            template<typename T>
            void print_log(T &&t, size_t level, const char *const filename,
                           int line_num) {
#ifdef MAX_LOG_LEVEL
                std::cout << "MAX_LOG_LEVEL is defined" << std::endl;
                if(level < MAX_LOG_LEVEL) {
                    return;
                }
#endif
                assert(level <= FATAL);
                time_t now;
                time(&now);
                char buf[32];
                strftime(buf, sizeof(buf), TIME_FORMAT, localtime(&now));
                std::cerr << "[" << LEVEL_ARRAY[level] << "] [" << buf
                << "] [" << filename << ":" << line_num << "] [" << t << "]" << std::endl;
            }
        };
    }
}

#endif //THREADPOOL_COMMON_H
