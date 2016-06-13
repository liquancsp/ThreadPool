SET(GTEST_ROOT_DIR .)

INCLUDE_DIRECTORIES(${GTEST_ROOT_DIR} ${GTEST_ROOT_DIR}/include)
ADD_LIBRARY(gtest STATIC ${GTEST_ROOT_DIR}/src/gtest-all.cc ../../src/include/common.h)
TARGET_LINK_LIBRARIES(gtest pthread)
