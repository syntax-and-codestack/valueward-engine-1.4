#ifndef MATCH_H
#define MATCH_H

#include "Server.h"

struct Match{
    Match GameMatch();

    void GameMatch_Message(Server::ServerSocket * _s, const char * msg);

};

#endif