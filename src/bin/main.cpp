#include <iostream>
#include "SQLite_DB.hpp"

int main(int argc, char** argv)
{
  SQLite_DB dBConn(argc,argv); //invokes default constructor
  return 0;//should cause smart pointer to free
}
