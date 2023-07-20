#include <gtest/gtest.h>

#include <Library/Calculator.h>

TEST(UnitLibraryCalculator, Add)
{
    Library::Calculator calculator;
    const int result = calculator.Add(2, 3);
    EXPECT_EQ(5, result);
}

TEST(UnitLibraryCalculator, Subtract)
{
    Library::Calculator calculator;
    const int result = calculator.Subtract(5, 2);
    EXPECT_EQ(3, result);
}

TEST(UnitLibraryCalculator, Multiply)
{
    Library::Calculator calculator;
    const int result = calculator.Multiply(4, 3);
    EXPECT_EQ(12, result);
}

TEST(UnitLibraryCalculator, Divide)
{
    Library::Calculator calculator;
    const int result = calculator.Divide(10, 2);
    EXPECT_EQ(5, result);
}

TEST(UnitLibraryCalculator, DivideByZero)
{
    Library::Calculator calculator;
    const int result = calculator.Divide(10, 0);
    EXPECT_EQ(0, result);
}
