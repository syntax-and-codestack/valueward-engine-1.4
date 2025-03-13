#ifndef RANK_H
#define RANK_

#define RANK_MAX 300

#define RANK_NORMAL
#define RANK_PRESTIEGE
#define RANK_TOURNAMENT

class Rank{
    public:
            
           int RankNumberId;
           bool RankMaxed;
           bool PlayerAccount_Synced;

           virtual void CreateRank() = 0;
           virtual void RankValue() = 0;
           virtual void ParseRank() = 0;
           
};

#endif