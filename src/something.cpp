//
// Created by Kai Gonzalez on 7/6/21.
//
#include <cpr/cpr.h>
#include <iostream>

int main()
{
    cpr::Response r = cpr::Get(cpr::Url{"https://example.com"},cpr::Authentication{"user", "pass"},
                               cpr::Parameters{{"user", "thekaigonzalez"}});
    std::cout << r.text;
}