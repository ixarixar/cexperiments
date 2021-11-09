#include "Face.hpp"

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <sstream>

using namespace testing;
namespace calc
{


struct FaceTest : Test
{
    std::ostringstream os;
    Face objectUnderTest{os};
};

TEST_F(FaceTest, shallPresentSecondsOnChange)
{
//    objectUnderTest.setSeconds(11);
    ASSERT_THAT(os.str(), HasSubstr("11"));
}


TEST_F(FaceTest, shallPresentMinutesOnChange)
{
//    objectUnderTest.setSeconds(32);
//    objectUnderTest.setMinutes(23);
    ASSERT_THAT(os.str(), HasSubstr("23:32"));
}

TEST_F(FaceTest, shallPresentHoursOnChange)
{
//    objectUnderTest.setSeconds(21);
//    objectUnderTest.setMinutes(14);
//    objectUnderTest.setHours(7);
    ASSERT_THAT(os.str(), HasSubstr("7:14:21"));
}

TEST_F(FaceTest, shallPresentDaysOnChange)
{
//    objectUnderTest.setSeconds(10);
//    objectUnderTest.setMinutes(11);
//    objectUnderTest.setHours(12);
//    objectUnderTest.setDays(13);
    ASSERT_THAT(os.str(), HasSubstr("12:11:10, 13"));
}

TEST_F(FaceTest, shallPresentMonthsOnChange)
{
//    objectUnderTest.setSeconds(0);
//    objectUnderTest.setMinutes(1);
//    objectUnderTest.setHours(2);
//    objectUnderTest.setDays(3);
//    objectUnderTest.setMonths(7);
    ASSERT_THAT(os.str(), HasSubstr("02:01:00, 3.7"));
}

TEST_F(FaceTest, shallPresentYearsOnChange)
{
    ASSERT_THAT(os.str(), HasSubstr("23:59:59, 31.12.2021"));
}

}
