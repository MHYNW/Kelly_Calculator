//
//  kelly_calculator.hpp
//  Kelly_Calculator
//
//  Created by 임현우 on 2024/03/11.
//

#ifndef KELLY_CALCULATOR_HPP
#define KELLY_CALCULATOR_HPP

#include <iostream>
#include <cstdint>
#include <kelly_exception.hpp>

#define EPSILION 0.00001
#define ABS(X) ((X) < 0 ? -(X) : (X))

template <typename T1, typename T2>
class KellyCalculator {
private:
    const T1 probability_of_win;
    const T1 probability_of_loss;
    const T2 loss_in_negative_outcome;
    const T2 gain_in_positive_outcome;
    float    fraction_of_bankroll;

    bool isDevisionByZero(void) const noexcept;
public:
    explicit KellyCalculator    (const T1& prob_of_win, const T1& prob_of_loss, const T2& loss, const T2& gain);
    ~KellyCalculator            (void);
#if __cplusplus >= 201103L
    explicit KellyCalculator    (const KellyCalculator& rhs)    = default;
    KellyCalculator& operator=  (const KellyCalculator& rhs)    = default;
    explicit KellyCalculator    (KellyCalculator&& rhs)         = default;
    KellyCalculator& operator=  (KellyCalculator&& rhs)         = default;
    /*
    explicit KellyCalculator(std::initializer_list<T> list);
    */
#endif /* __cplusplus version */

    float   getResult(void);
    void    calculateFraction(void);

};

#endif /* KELLY_CALCULATOR_HPP */