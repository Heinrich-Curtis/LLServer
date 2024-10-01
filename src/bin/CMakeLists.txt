enable_testing()
add_executable(
	main
	main.cpp
)
target_link_libraries(
	main	
	#GTest::gtest_main
	sqlite3
	)


	#include(GoogleTest)
	#gtest_discover_tests(main)
