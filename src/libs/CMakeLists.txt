add_library(SQLite_DB SQLite_DB.cpp)
#need this for lib to build successfully
target_link_libraries(SQLite_DB sqlite3)