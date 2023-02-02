#include <gtest/gtest.h>

#include <string>
#include <vector>

#include "movabletype.hpp"

TEST(Parse, SUCCESS)
{
    std::vector<std::string> input;
    MovableType *m = new MovableType(input);
    EXPECT_NO_THROW(m->Parse());
}