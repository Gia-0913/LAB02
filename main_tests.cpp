#include "lib/utils.h"
#include <gtest/gtest.h>

// Test đơn giản cho hàm isPrime
TEST(PrimeTest, BasicTrueCases) {
    EXPECT_TRUE(isPrime(2));
    EXPECT_TRUE(isPrime(3));
    EXPECT_TRUE(isPrime(13));
    EXPECT_TRUE(isPrime(97));
}

TEST(PrimeTest, BasicFalseCases) {
    EXPECT_FALSE(isPrime(1));
    EXPECT_FALSE(isPrime(0));
    EXPECT_FALSE(isPrime(-5));
    EXPECT_FALSE(isPrime(100));
}

// Vì các hàm requestIntUntilValidUseCase và requestPrimeUntilValidUseCase phụ thuộc vào cin,
// nên bạn cần test thủ công, hoặc refactor chúng để inject input stream khi cần mock.

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
