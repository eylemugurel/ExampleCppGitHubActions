cmake_minimum_required(VERSION 3.16)

add_executable(Application)

file(GLOB SOURCES
	"*.cpp"
	"*.h"
)

target_sources(
	Application
	PRIVATE
	${SOURCES}
)

target_include_directories(
	Application
	PRIVATE
	"${CMAKE_SOURCE_DIR}"
)

target_link_libraries(
	Application
	PRIVATE
	Library
)
