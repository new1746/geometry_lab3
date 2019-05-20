#define CTEST_MAIN
#include <ctest.h>
#include <foo.h>

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

CTEST(perimetr_circle1_t, result_t)
{
    // Given
    const int r = 3;
    const double PI = 3.141592;
    // When
    const double result = PerimetrC(r, PI);
    // Then
    const double expected = 18.849552;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(perimetr_circle2_t, result_t)
{
    // Given
    const int r = -1;
    const double PI = 3.141592;
    // When
    const double result = PerimetrC(r, PI);
    // Then
    const double expected = -6.283184;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(perimetr_triangle1_t, result_t)
{
    // Given
    const int x = 3;
    const int y = 5;
    const int z = 6;
    // When
    const double result = PerimetrT(x, y, z);
    // Then
    const double expected = 14.000000;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(perimetr_triangle2_t, result_t)
{
    // Given
    const int x = 6;
    const int y = 8;
    const int z = 9;
    // When
    const double result = PerimetrT(x, y, z);
    // Then
    const double expected = 23.000000;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(square_triangle1_t, result_t)
{
    // Given
    const int x = 6;
    const int y = 8;
    const int z = 9;
    // When
    const double result = SquareT(x, y, z);
    // Then
    const double expected = 23.525253;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(square_triangle2_t, result_t)
{
    // Given
    const int x = 2;
    const int y = 8;
    const int z = 9;
    // When
    const double result = SquareT(x, y, z);
    // Then
    const double expected = 7.310096;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(square_circle1_t, result_t)
{
    // Given
    const int r = 2;
    const double PI = 3.141592;
    // When
    const double result = SquareC(r, PI);
    // Then
    const double expected = 12.566368;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(square_circle2_t, result_t)
{
    // Given
    const int r = -5;
    const double PI = 3.141592;
    // When
    const double result = SquareC(r, PI);
    // Then
    const double expected = 78.5398;
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(peres_circle1_t, result_t)
{
    // Given
    const int x1 = 3;
    const int y1 = 4;
    const int r1 = 4;
    const int x2 = 5;
    const int y2 = 6;
    const int r2 = 1;
    // When
    const int result = Cross(x1, y1, r1, x2, y2, r2);
    // Then
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(peres_circle2_t, result_t)
{
    // Given
    const int x1 = 8;
    const int y1 = 0;
    const int r1 = 4;
    const int x2 = 4;
    const int y2 = 6;
    const int r2 = 1;
    // When
    const int result = Cross(x1, y1, r1, x2, y2, r2);
    // Then
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}
