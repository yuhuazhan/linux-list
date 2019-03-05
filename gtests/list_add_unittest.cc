#include <assert.h>
#include "list.h"

#include "common.h"

TEST(list_add_Test,Add4items)
{
    struct list_head testlist;
    struct listitem item1;
    struct listitem item2;
    struct listitem item3;
    struct listitem item4;
    struct listitem *item = NULL;
    size_t i;

    item1.i = 1;
    item2.i = 2;
    item3.i = 3;
    item4.i = 4;

    INIT_LIST_HEAD(&testlist);
    ASSERT_TRUE(list_empty(&testlist));

    list_add(&item1.list, &testlist);
    list_add(&item3.list, &item1.list);
    list_add(&item2.list, &item1.list);
    list_add(&item4.list, &item3.list);

    i = 1;
    list_for_each_entry (item, &testlist, list) {
        EXPECT_EQ(item->i, i);
        i++;
    }
    EXPECT_EQ(5,i);
}
