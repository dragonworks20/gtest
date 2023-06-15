#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "sum.h"

class SumMock: public Sum{
  public:
    MOCK_METHOD0(Add, int());

};
class Calculator{
  private:
    Sum* sum;
  public:
    Calculator(Sum* sum)
    :sum(sum)
    {

    }
    ~Calculator(){
      
    }
    int GetSum(){
      sum->Add();
    }
    int process(){
      // sum->Add(3,4);
      if(sum->Add() == 3)
        return 1;
      else
        return 2;
      // else if(sum->Add(3,4) == 3)
      //   return false;

    }
};

TEST(SumMockTest, Add){
  SumMock summock;
  Calculator cal(&summock);

  // EXPECT_CALL(summock, Add(1,2)).WillOnce(testing::Return(3));

  // EXPECT_EQ(1, cal.process());

  EXPECT_CALL(summock, Add()).WillOnce(testing::Return(2));
  // EXPECT_EQ(1, cal.process());
  EXPECT_EQ(2, cal.process());
}

// Sum() 함수의 테스트
// TEST(SumTest, PositiveNumbers) {
//   Sum s;
//   // EXPECT_EQ(Sum(5, 10), 15);
//   EXPECT_EQ(15, s.Add(5, 10));
//   EXPECT_EQ(16, s.Add(5, 11));
// }

TEST(SumTest, NegativeNumbers) {
  Sum s;
  EXPECT_EQ(s.NegativeNumbers(-5, -10), -15);
}

TEST(SumTest, Zero) {
  Sum s;
  EXPECT_EQ(s.Zero(0, 0), 0);
}



