enable_testing()
add_executable(
	main
	main.cpp
)

target_include_directories(
	main
	PUBLIC
	${PROJECT_SOURCE_DIR}/libs/
)
target_link_libraries(
	main	
	#GTest::gtest_main
	sqlite3
	SQLite_DB
	)


	#include(GoogleTest)
	#gtest_discover_tests(main)
