#include "tweets_on_date.h"

tweets_on_date::tweets_on_date()
{
    int tweet_count = 0;
    int retweet_count = 0;
}
tweets_on_date::~tweets_on_date()
{
    //dtor
}
int tweets_on_date::getcount()
{
    return tweet_count;
}
int tweets_on_date::getrecount()
{
    return retweet_count;
}
void tweets_on_date::setcount(int count)
{
    tweet_count = count;
}
void tweets_on_date::setrecount(int recount)
{
    retweet_count = recount;
}
