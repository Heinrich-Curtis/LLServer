cmake_minimum_required(VERSION 3.14)
project(LLServer)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Get googletest
include(FetchContent)
FetchContent_Declare(
	  googletest
	    URL https://github.com/google/googletest/archive/0953a17a4281fc26831da647ad3fcd5e21e6473b.zip
	    )
    # For Windows: Prevent overriding the parent project's compiler/linker settings
    set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
    FetchContent_MakeAvailable(googletest)
#SQLite
include_directories(/usr/include/)
link_directories(/usr/lib)
#Project files build
add_subdirectory(bin)
#add_subdirectory(libs) 
add_subdirectory(test)
