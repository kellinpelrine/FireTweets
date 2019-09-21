#include<iostream>
#include<fstream>
#include<sstream>
#include "tweets_on_date.h"

using namespace std;


int main() {



    tweets_on_date day1;
    tweets_on_date day2;
    tweets_on_date day3;
    tweets_on_date day4;
    tweets_on_date day5;
    tweets_on_date day6;
    tweets_on_date day7;
    tweets_on_date day8;
    tweets_on_date day9;
    tweets_on_date day10;


    ifstream inFile;
    inFile.open("allTweetsModified.csv");

    if(inFile.good()) {
        string s;

        // Ignore the header line
        getline(inFile, s);

        string last_date = "17/2016";
        int num_tweets = 0;
        int num_retweets = 0;

        while (getline(inFile, s)) {

            stringstream stream_s(s);

            string date;
            string retweet;
            string dump;

            string str_num_records;

            getline(stream_s, dump, '/');
            getline(stream_s, date, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, retweet, ',');

            if(date != last_date){
                day1.setcount(num_tweets);
                day1.setrecount(num_retweets);
                num_tweets = 1;
                num_retweets = 1;
                last_date = date;
                break;
            }

            num_tweets++;
            if (retweet == "TRUE"){num_retweets++;}
        }
        while (getline(inFile, s)) {

            stringstream stream_s(s);

            string date;
            string retweet;
            string dump;

            string str_num_records;

            getline(stream_s, dump, '/');
            getline(stream_s, date, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, retweet, ',');

            if(date != last_date){
                day2.setcount(num_tweets);
                day2.setrecount(num_retweets);
                num_tweets = 1;
                num_retweets = 1;
                last_date = date;
                break;
            }

            num_tweets++;
            if (retweet == "TRUE"){num_retweets++;}
        }
        while (getline(inFile, s)) {

            stringstream stream_s(s);

            string date;
            string retweet;
            string dump;

            string str_num_records;

            getline(stream_s, dump, '/');
            getline(stream_s, date, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, retweet, ',');

            if(date != last_date){
                day3.setcount(num_tweets);
                day3.setrecount(num_retweets);
                num_tweets = 1;
                num_retweets = 1;
                last_date = date;
                break;
            }

            num_tweets++;
            if (retweet == "TRUE"){num_retweets++;}
        }
        while (getline(inFile, s)) {

            stringstream stream_s(s);

            string date;
            string retweet;
            string dump;

            string str_num_records;

            getline(stream_s, dump, '/');
            getline(stream_s, date, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, retweet, ',');

            if(date != last_date){
                day4.setcount(num_tweets);
                day4.setrecount(num_retweets);
                num_tweets = 1;
                num_retweets = 1;
                last_date = date;
                break;
            }

            num_tweets++;
            if (retweet == "TRUE"){num_retweets++;}
        }
        while (getline(inFile, s)) {


            stringstream stream_s(s);

            string date;
            string retweet;
            string dump;

            string str_num_records;

            getline(stream_s, dump, '/');
            getline(stream_s, date, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, retweet, ',');

            if(date != last_date){
                day5.setcount(num_tweets);
                day5.setrecount(num_retweets);
                num_tweets = 1;
                num_retweets = 1;
                last_date = date;
                break;
            }

            num_tweets++;
            if (retweet == "TRUE"){num_retweets++;}
        }
        while (getline(inFile, s)) {

            stringstream stream_s(s);

            string date;
            string retweet;
            string dump;

            string str_num_records;

            getline(stream_s, dump, '/');
            getline(stream_s, date, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, retweet, ',');

            if(date != last_date){
                day6.setcount(num_tweets);
                day6.setrecount(num_retweets);
                num_tweets = 1;
                num_retweets = 1;
                last_date = date;
                break;
            }

            num_tweets++;
            if (retweet == "TRUE"){num_retweets++;}
        }
        while (getline(inFile, s)) {

            stringstream stream_s(s);

            string date;
            string retweet;
            string dump;

            string str_num_records;

            getline(stream_s, dump, '/');
            getline(stream_s, date, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, retweet, ',');

            if(date != last_date){
                day7.setcount(num_tweets);
                day7.setrecount(num_retweets);
                num_tweets = 1;
                num_retweets = 1;
                last_date = date;
                break;
            }

            num_tweets++;
            if (retweet == "TRUE"){num_retweets++;}
        }
        while (getline(inFile, s)) {

            stringstream stream_s(s);

            string date;
            string retweet;
            string dump;

            string str_num_records;

            getline(stream_s, dump, '/');
            getline(stream_s, date, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, retweet, ',');

            if(date != last_date){
                day8.setcount(num_tweets);
                day8.setrecount(num_retweets);
                num_tweets = 1;
                num_retweets = 1;
                last_date = date;
                break;
            }

            num_tweets++;
            if (retweet == "TRUE"){num_retweets++;}
        }
        while (getline(inFile, s)) {


            stringstream stream_s(s);

            string date;
            string retweet;
            string dump;

            string str_num_records;

            getline(stream_s, dump, '/');
            getline(stream_s, date, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, retweet, ',');

            if(date != last_date){
                day9.setcount(num_tweets);
                day9.setrecount(num_retweets);
                num_tweets = 1;
                num_retweets = 1;
                last_date = date;
                break;
            }

            num_tweets++;
            if (retweet == "TRUE"){num_retweets++;}
        }
        while (getline(inFile, s)) {

            stringstream stream_s(s);

            string date;
            string retweet;
            string dump;

            string str_num_records;

            getline(stream_s, dump, '/');
            getline(stream_s, date, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, dump, ',');
            getline(stream_s, retweet, ',');

            if(date != last_date){
                day10.setcount(num_tweets);
                day10.setrecount(num_retweets);
                num_tweets = 1;
                num_retweets = 1;
                last_date = date;
                break;
            }

            num_tweets++;
            if (retweet == "TRUE"){num_retweets++;}
        }
    }
    else {
        cout <<"(ERROR) FILE NOT FOUND" << endl;

    }

    float avg = (day1.getcount() + day2.getcount()+ day3.getcount()+day4.getcount()+day5.getcount()+day6.getcount()+day7.getcount()+day8.getcount()+day9.getcount()+day10.getcount())/10;
    float reavg = (day1.getrecount() + day2.getrecount()+ day3.getrecount()+day4.getrecount()+day5.getrecount()+day6.getrecount()+day7.getrecount()+day8.getrecount()+day9.getrecount()+day10.getrecount())/10;

    cout << "Welcome. This program calculates tweet and retweet counts for a chosen day" << endl << "and compares them to the averages over the first ten days of the fire." << endl;
    int inday;
    int check;

    while(true){
        cout << "Please enter a number for a day between 1 and 10. Day 1 corresponds to 7/17/2014" << endl;
        cin >> inday;
        if(inday == 1){
            cout << "On day 1 there were " << day1.getcount() << " tweets and " << day1.getrecount() << " retweets." << endl <<
            "The 10 day average was " << avg << " tweets and " << reavg << " retweets." << endl;
        }
        if(inday == 2){
            cout << "On day 2 there were " << day2.getcount() << " tweets and " << day2.getrecount() << " retweets." << endl <<
            "The 10 day average was " << avg << " tweets and " << reavg << " retweets." << endl;
        }
        if(inday == 3){
            cout << "On day 3 there were " << day3.getcount() << " tweets and " << day3.getrecount() << " retweets." << endl <<
            "The 10 day average was " << avg << " tweets and " << reavg << " retweets." << endl;
        }
        if(inday == 4){
            cout << "On day 4 there were " << day4.getcount() << " tweets and " << day4.getrecount() << " retweets." << endl <<
            "The 10 day average was " << avg << " tweets and " << reavg << " retweets." << endl;
        }
        if(inday == 5){
            cout << "On day 5 there were " << day5.getcount() << " tweets and " << day5.getrecount() << " retweets." << endl <<
            "The 10 day average was " << avg << " tweets and " << reavg << " retweets." << endl;
        }
        if(inday == 6){
            cout << "On day 6 there were " << day6.getcount() << " tweets and " << day6.getrecount() << " retweets." << endl <<
            "The 10 day average was " << avg << " tweets and " << reavg << " retweets." << endl;
        }
        if(inday == 7){
            cout << "On day 7 there were " << day7.getcount() << " tweets and " << day7.getrecount() << " retweets." << endl <<
            "The 10 day average was " << avg << " tweets and " << reavg << " retweets." << endl;
        }
        if(inday == 8){
            cout << "On day 8 there were " << day8.getcount() << " tweets and " << day8.getrecount() << " retweets." << endl <<
            "The 10 day average was " << avg << " tweets and " << reavg << " retweets." << endl;
        }
        if(inday == 9){
            cout << "On day 9 there were " << day9.getcount() << " tweets and " << day9.getrecount() << " retweets." << endl <<
            "The 10 day average was " << avg << " tweets and " << reavg << " retweets." << endl;
        }
        if(inday == 10){
            cout << "On day 10 there were " << day10.getcount() << " tweets and " << day10.getrecount() << " retweets." << endl <<
            "The 10 day average was " << avg << " tweets and " << reavg << " retweets." << endl;
        }
        cout << "Would you like to check a different day? Please enter 1 for yes, 0 for no." << endl;
        cin >> check;
        if (check != 1){break;}
    }
    cout << "Thank you." << endl << "The hardest part of this project was figuring out how to parse the data from the csv." << endl
         << "It was also the most enjoyable part, especially since it is something that's really useful." << endl
         << "Everything else was straightforward." << endl
         << "However, using 3 instances of the class felt a bit artificial." << endl
         << "This program is definitely not the most efficient way to compute/display the averages, but it does have 3 instances." << endl
         << "I would rather have had 3 different classes or even 3 different program functionalities," << endl
         << "which might encourage more complexity, than just 3 instances.";

    return 0;
}







