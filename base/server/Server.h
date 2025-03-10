#ifndef SERVER_H
#define SERVER_H

namespace Server{

    struct CServerPlayerNode{
        CServerPlayerNode Player();
        void ConnectPlayer();
        void DisconnectPlayer();
    };

    struct CSynapseClient{
        CSynapseClient NodeClient();
    };

    struct Client{
        Client NodeC();
    };

    struct ServerSocket{
        ServerSocket Server();
    };

};

#endif