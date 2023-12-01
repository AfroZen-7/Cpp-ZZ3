# Project #-----------------------------------------------------------------------------------------
cmake_minimum_required ( VERSION 3.18 )

project (examen_blanc)

# C++ Standard #------------------------------------------------------------------------------------
set ( CXX_STANDARD_REQUIRED ON )
set ( CMAKE_CXX_STANDARD 17 )

# GNU C++ Options #---------------------------------------------------------------------------------
if ( CMAKE_COMPILER_IS_GNUCXX )
 set ( CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic ${CMAKE_CXX_FLAGS}" )
endif ()

# Sources #-----------------------------------------------------------------------------------------
set ( PROJECT_HEADERS
      src/item.hpp
      src/arme.hpp
      src/enchantement.hpp
      src/inventaire.hpp
      src/fabricant.hpp
      bonus_src/activateur.hpp
      src/adaptateur.hpp # Seulement pour les tests bonus
    )

set ( PROJECT_SOURCES
      # src/item.cpp
      # src/arme.cpp
      # src/enchantement.cpp
      # src/inventaire.cpp
    )

set ( TEST_HEADERS
      test/catch.hpp
    )

set ( TEST_SOURCES
      test/catch.cpp
    )

# Common Library #----------------------------------------------------------------------------------
add_library ( common OBJECT )

target_sources ( common
	               PRIVATE ${PROJECT_SOURCES}
	               PUBLIC ${PROJECT_HEADERS}
               )

target_include_directories( common PUBLIC src )

# Test Library #------------------------------------------------------------------------------------
add_library( test OBJECT )

target_sources ( test
	               PRIVATE ${TEST_SOURCES}
	               PUBLIC ${TEST_HEADERS}
               )

# Executables #-------------------------------------------------------------------------------------
add_executable ( ${CMAKE_PROJECT_NAME}_test test/test_examen.cpp )
target_link_libraries ( ${CMAKE_PROJECT_NAME}_test PRIVATE common test )

add_executable ( ${CMAKE_PROJECT_NAME}_test_bonus test/test_bonus.cpp )
target_link_libraries ( ${CMAKE_PROJECT_NAME}_test_bonus PRIVATE common test )
