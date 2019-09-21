#ifndef TWEETS_ON_DATE_H
#define TWEETS_ON_DATE_H


class tweets_on_date
{
    public:
        tweets_on_date();
        ~tweets_on_date();
        int getcount();
        int getrecount();
        void setcount(int count);
        void setrecount(int recount);

    protected:

    private:
        int tweet_count;
        int retweet_count;
};

#endif // TWEETS_ON_DATE_H
