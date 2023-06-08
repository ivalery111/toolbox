#include "gtest/gtest.h"

#include "dummy.h"

TEST (DummyTest, SayDummy)
{
    EXPECT_EQ("Hello from Dummy!", say_dummy());
}
