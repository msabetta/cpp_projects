//
// Created by msabetta on 18/02/2022.
//

#ifndef CPPTIME_H
#define CPPTIME_H

#include <ctime>
#include <cstring>

using namespace std;

class Time {
    time_t t;
    tm local;
    char asciiRep[26];
    unsigned char lflag, aflag;

    void updateLocal() {
        if (!lflag) {
            local = *localtime(&t);
            lflag++;
        }
    }

    void updateAscii() {
        if (!aflag) {
            updateLocal();
            strcpy(asciiRep, asctime(&local));
            aflag++;
        }
    }

public:
    Time() { mark(); }

    void mark() {
        lflag = aflag = 0;
        time(&t);
    }

    const char *ascii() {
        updateAscii();
        return asciiRep;
    }

    // Difference in seconds:
    int delta(Time *dt) const {
        return int(difftime(t, dt->t));
    }

    int daylightSavings() {
        updateLocal();
        return local.tm_isdst;
    }

    int dayOfYear() { // Since January 1
        updateLocal();
        return local.tm_yday;
    }

    int dayOfWeek() { // Since Sunday
        updateLocal();
        return local.tm_wday;
    }

    int since1900() { // Years since 1900
        updateLocal();
        return local.tm_year;
    }

    int month() { // Since January
        updateLocal();
        return local.tm_mon;
    }

    int dayOfMonth() {
        updateLocal();
        return local.tm_mday;
    }

    int hour() { // Since midnight, 24-hour clock
        updateLocal();
        return local.tm_hour;
    }

    int minute() {
        updateLocal();
        return local.tm_min;
    }

    int second() {
        updateLocal();
        return local.tm_sec;
    }
};


#endif //CPPTIME_H
