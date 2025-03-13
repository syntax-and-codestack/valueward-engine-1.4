#include "Rank.h"
#include "Subsrciption.h"
#include <stack>
#include "Multiplayer.h"

int g_nRankLstId = 0;
int      * g_pActive_t;

//check subscription
void ParseDB_AccountSubscription(Subscription * scription, Rank * rank){
            int     i;
            static char     scriptBuff;
            Rank& Sync();
               if( rank->PlayerAccount_Synced == true ){
                 scription->Player_MultiplayerDBConnect == true;
               }

               Sync().RankValue();
};

/*
 MASSIVE BLOCK OF CODE
*/
//rank list
void Create_RankList(){
    std::stack<int> rank();
        if( NetworkSynced_DBCloud_WarFalls == true ){
            rank().push(1); rank().push(11); rank().push(21);
            rank().push(2); rank().push(12); rank().push(22);
            rank().push(3); rank().push(13); rank().push(23);
            rank().push(4); rank().push(14); rank().push(24);
            rank().push(5); rank().push(15); rank().push(25);
            rank().push(6); rank().push(16); rank().push(26);
            rank().push(7); rank().push(17); rank().push(27);
            rank().push(8); rank().push(18); rank().push(28);
            rank().push(9); rank().push(19); rank().push(29);
            rank().push(10); rank().push(20); rank().push(30);
        }

};