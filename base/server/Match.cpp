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

Match * MatchPrint_Message(Server::ServerSocket * socket){
    MatchPrint_Message(socket)->GameMatch().GameMatch_Message(socket, "Match Lobby: %5.2c");
    return MatchPrint_Message(socket);
};

