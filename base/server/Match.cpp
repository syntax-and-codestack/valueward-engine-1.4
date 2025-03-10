#include "Match.h"
#include "Server.h"

float g_fTimerId = 0;
int g_nPlayerId = 0;
bool g_bConnectPlayer;

Server::CServerPlayerNode * g_pNode();

Server::CServerPlayerNode * ConnectNode(){
    g_nPlayerId++;
    g_pNode()->Player().ConnectPlayer();
};

Server::CServerPlayerNode * DisconnectNode(){
    g_nPlayerId--;
    g_pNode()->Player().DisconnectPlayer();
};