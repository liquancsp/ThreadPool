SET(GTEST_ROOT_DIR ${PROJECT_SOURCE_DIR}/test/gtest)
INCLUDE_DIRECTORIES(${GTEST_ROOT_DIR} ${GTEST_ROOT_DIR}/include ${PROJECT_SOURCE_DIR}/src/include)
ADD_EXECUTABLE(test.run
        gtest_main.cpp
        logger_test.cpp)
TARGET_LINK_LIBRARIES(test.run gtest pthread)