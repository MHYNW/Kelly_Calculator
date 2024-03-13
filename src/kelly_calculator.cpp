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
KellyCalculator<T1, T2>::~KellyCalculator(void)
{
    /*
    KellyCalculator Destructor 
    */
}

template <typename T1, typename T2>
float KellyCalculator<T1, T2>::getResult(void)
{
    try {
        calculateFraction();
    } catch (const std::exception& exception){
        std::cerr << "ERROR :" << exception.what() << std::endl;
    } catch (...) {
        std::cerr << "ERROR : UNKNOWN" << std::endl;
    }
}

template <typename T1, typename T2>
void KellyCalculator<T1, T2>::calculateFraction(void)
{
    if (isDevisionByZero() == true) {
        throw KellyException("[KellyCalculator::calculateFraction()] Devision By Zero");
    } else {
        fraction_of_bankroll = static_cast<float>(probability_of_win / loss_in_negative_outcome)
                                - static_cast<float>(probability_of_loss / gain_in_positive_outcome);
    }
}

template <typename T1, typename T2>
bool KellyCalculator<T1, T2>::isDevisionByZero(void) const noexcept
{
    if (ABS(loss_in_negative_outcome -  0.0) < EPSILION ||
        ABS(gain_in_positive_outcome - 0.0) < EPSILION) {
        return true;
    }

    return false;
}