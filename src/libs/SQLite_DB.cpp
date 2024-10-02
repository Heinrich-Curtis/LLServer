#include "SQLite_DB.hpp"
#include <iostream>
/*
    Wrapper class around an SQLite database connection
*/
static int callback(void *NotUsed, int argc, char **argv, char **azColName)
{
    int i;
    for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
  }

SQLite_DB::SQLite_DB(int argc, char** argv)
{
    std::cout << "constructor" << std::endl;
    //open the connection
    char *zErrMsg = 0;
    int rc;
    if( argc!=3 )
    {
        fprintf(stderr, "Usage: %s DATABASE SQL-STATEMENT\n", argv[0]);
        //return(1);
    }
    rc = sqlite3_open(argv[1], &dB);
    if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(dB));
      sqlite3_close(dB);
      //return(1);
    }
    rc = sqlite3_exec(dB, argv[2], callback, 0, &zErrMsg);
    if( rc!=SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
    }
}

SQLite_DB::~SQLite_DB()
{
    std::cout << "destructor" << std::endl;
    if (dB != nullptr)
    {
        std::cout << "dB not null" << std::endl;
        sqlite3_close(dB);
    }
    //close the connection
}