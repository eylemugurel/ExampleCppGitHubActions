#ifndef _Library_Calculator_h_
#define _Library_Calculator_h_

namespace Library {

class Calculator
{
public:
    int Add(const int a, const int b) const;
    int Subtract(const int a, const int b) const;
    int Multiply(const int a, const int b) const;
    int Divide(const int a, const int b) const;
};

} // namespace Library

#endif // _Library_Calculator_h_
