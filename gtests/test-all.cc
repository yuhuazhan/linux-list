#include "stdio.h"
#include "gtest/gtest.h"
#include "containerof_unittest.cc"
#include "list_add_unittest.cc"
GTEST_API_ int main(int argc, char **argv){
    printf("Running main() from gtest_main.cc\n");
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
