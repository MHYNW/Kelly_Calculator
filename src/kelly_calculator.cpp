//
//  kelly_calculator.cpp
//  Kelly_Calculator
//
//  Created by 임현우 on 2024/03/11.
//

#include <kelly_calculator.hpp>

template <typename T1, typename T2>
KellyCalculator<T1, T2>::KellyCalculator(const T1& prob_of_win, const T1& prob_of_loss, const T2& loss, const T2& gain)
    :   probability_of_win(prob_of_win), probability_of_loss(prob_of_loss),
        loss_in_negative_outcome(loss), gain_in_positive_outcome(gain)
{
    /*
    KellyCalculator Constructor
    */
}

template <typename T1, typename T2>
KellyCalculator<T1, T2>::KellyCalculator(const KellyCalculator& kelly_calculator)
{
    /*
    KellyCalculator Copy Constructor
    */
}

template <typename T1, typename T2>
KellyCalculator<T1, T2>::KellyCalculator(KellyCalculator&& kelly_calculator)
{
    /*
    KellyCalculator Move Constructor 
    */
}

template <typename T1, typename T2>
KellyCalculator<T1, T2>::~KellyCalculator(void)
{
    /*
    KellyCalculator Destructor 
    */
}



