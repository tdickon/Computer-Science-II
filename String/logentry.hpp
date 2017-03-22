#ifndef CS2_LOGENTRY_HPP
#define CS2_LOGENTRY_HPP

/**
 * @file logentry.hpp
 *
 * @version 1.0
 * @3/17/2017
 * @Tyler Dickon
 *
 *  Class definitions for a log entry, date_type and time_type ADTs
 *
 */

#include <iostream>
#include <vector>

#include "string.hpp"

/** date_type class */
class date_type {
public:
  date_type();
  date_type(const String&, const String&, String&);
  int  convert(String&);
  friend std::ostream & operator<<(std::ostream &, const date_type&);
  bool operator==(const date_type&) const;
  bool operator!=(const date_type&) const;
  void  operator=(const date_type&);
private:
    String day, month;
    int    year;
};

/** time_type class */
class time_type {
public:
  time_type();
  time_type(String&, String&, String&);
  int convertHour(String&);
  int convertMin(String&);
  int convertSec(String&);
  friend std::ostream & operator<<(std::ostream &, const time_type&);
  bool operator==(const time_type&) const;
  bool operator!=(const time_type&) const;
  void  operator=(const time_type&);
private:
    int hour, minute, second;
};



/** log_entry class */
class log_entry {
public:
  log_entry();
  log_entry(const String&);
  int byteConvert(String&);
  friend std::ostream & operator<<(std::ostream &, const log_entry &);
  bool operator==(const log_entry&) const;
  void hostOutput() const;
  int getByte() const;
  bool  getCheck() const;
private:
    String host;
    date_type date;
    time_type time;
    String request;
    String status;
    int    number_of_bytes;
    bool check;
};


// free functions
std::vector<log_entry>  parse       (std::istream &);
void output_all  (std::ostream &, const std::vector<log_entry> &);
void by_host     (const std::vector<log_entry> &);
int  byte_count  (const std::vector<log_entry> &);



#endif