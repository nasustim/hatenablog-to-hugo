#include <gtest/gtest.h>

#include <string>
#include <vector>

#include "read.hpp"

TEST(ReadLine, SUCCESS)
{
    std::vector<std::string> expect;
    expect.push_back("aaa");
    expect.push_back("bbb");

    EXPECT_EQ(expect, ReadLine("./dummy.txt"));
}