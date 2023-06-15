// #include <gtest/gtest.h>
// class Test{
//     public:
//     void Print();

//   private:
//   static const int mCount;
// };

// int sum(int a,int b);
// bool CheckSameInt(int a, int b);
// testing::AssertionResult IsEven(int n);



class Sum{

    public:
    Sum();
    virtual ~Sum();

    virtual int Add();
    virtual int PositiveNumbers(int a, int b);
    virtual int NegativeNumbers(int a, int b);
    virtual int Zero(int a, int b);

};