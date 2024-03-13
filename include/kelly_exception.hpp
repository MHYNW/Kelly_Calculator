//
//  kelly_exception.hpp
//  Kelly_Exception
//
//  Created by 임현우 on 2024/03/13.
//

#ifndef KELLY_EXCEPTION_HPP
#define KELLY_EXCEPTION_HPP

#include <string>
#include <exception>

class KellyException : public std::exception {
private:
    const std::string error_message;
public:
    KellyException              (const std::string& error_message)
                                :   error_message{error_message}
{
    /*
    KellyException Constructor 
    */
}
    ~KellyException             (void);
#if __cplusplus >= 201103L
    KellyException              (const KellyException& rhs)    = default;
    KellyException& operator=   (const KellyException& rhs)    = delete;
    KellyException              (KellyException&& rhs)         = default;
    KellyException& operator=   (KellyException&& rhs)         = delete;
#endif /* __cplusplus version */

    const char* what(void) const noexcept override
    {
        return this->error_message.c_str();
    }
};

#endif /* KELLY_EXCEPTION_HPP */