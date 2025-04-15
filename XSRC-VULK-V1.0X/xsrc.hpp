#ifndef XSRC_HPP
#define XSRC_HPP

#include <string>

namespace xsrc_token_num{
    std::uint64_t XSRC_TOKEN_SIZE = sizeof(*TOKEN[XSRC_TOKEN_NUM]);
    std::uint64_t XSRC_TOKEN_HPP_VALUE;
    std::uint64_t XSRC_TOKEN_NUM;
};

std::uint64_t xsrc_parse_token_size = xsrc_token_num::XSRC_TOKEN_SIZE;

//tokens
#define X_WAITTILL 000x800
#define X_LEVEL 000x100
#define X_SELF 000x700
#define X_GETENT 000x600

namespace xsrc_token
{

    const std::string token();
    const std::string waittill();

};

void waitcall;


#endif 