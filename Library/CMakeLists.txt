cmake_minimum_required(VERSION 3.16)

add_library(Library STATIC)

file(GLOB SOURCES
	"*.cpp"
	"*.h"
)

target_sources(
	Library
	PRIVATE
	${SOURCES}
)
