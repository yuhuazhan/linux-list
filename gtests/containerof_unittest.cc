#include <assert.h>
#include <stddef.h>
#include "gtest/gtest.h"
#include "list.h"

namespace{

struct teststruct {
    int a;
    int b;
};


TEST(containerofTest,AddressEqual)
{
    struct teststruct item;
    container_of(&item.b,struct teststruct,b);
    EXPECT_TRUE(&item == container_of(&item.b,struct teststruct, b));
    
}
}

