cmake_minimum_required(VERSION 3.16)

include(FetchContent)
FetchContent_Declare(
	googletest
	GIT_REPOSITORY https://github.com/google/googletest
	GIT_TAG v1.13.0
)
FetchContent_GetProperties(googletest)
if (NOT googletest_POPULATED)
	FetchContent_Populate(googletest)
	add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

add_executable(Test)

file(GLOB SOURCES
	"*.cpp"
	"*.h"
)

target_sources(
	Test
	PRIVATE
	${SOURCES}
)

target_include_directories(
	Test
	PRIVATE
	"${CMAKE_SOURCE_DIR}"
)

target_link_libraries(
	Test
	PRIVATE
	gtest
	gmock
	Library
)
