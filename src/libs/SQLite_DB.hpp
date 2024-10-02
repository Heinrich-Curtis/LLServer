#ifndef SQLITE_DB_HPP
#define SQLITE_DB_HPP
#include <sqlite3.h>
#include <memory>

class SQLite_DB
{
private:
    sqlite3* dB;
public:
SQLite_DB(int argc, char** argv);
~SQLite_DB();

};
#endif