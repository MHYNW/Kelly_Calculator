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

template <typename T1, typename T2>
class KellyCalculator {
private:
    const T1 probability_of_win;
    const T1 probability_of_loss;
    const T2 loss_in_negative_outcome;
    const T2 gain_in_positive_outcome;

public:
    explicit KellyCalculator(const T1& prob_of_win, const T1& prob_of_loss, const T2& loss, const T2& gain);
    explicit KellyCalculator(const KellyCalculator& kelly_calculator);
    explicit KellyCalculator(KellyCalculator&& kelly_calculator);
            ~KellyCalculator(void);
/*
explicit KellyCalculator(std::initializer_list<T> list);
*/

};

#endif /* KELLY_CALCULATOR_HPP */