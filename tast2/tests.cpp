#include "gtest/gtest.h"

#include "hashtag.h"

TEST(StackTest, StackPush)
{
    EXPECT_EQ("#LovingFluffyCats", hashtag("loving Fluffy cats"));
    EXPECT_THROW(hashtag(""), std::invalid_argument);
    EXPECT_THROW(hashtag("qwesdfghjytresdfghjkliuytrewazx rtyuioplkjhgfazxcvbnmnb vcxsasdfghjkoiuytrewqqwertyuiolkjhgfdsazxcvbnm"), std::length_error);
}