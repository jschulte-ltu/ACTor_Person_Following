# Install script for directory: /home/mpleune/lfa_ws/ACTor_Person_Following/src/dataspeed_can/dataspeed_can_msg_filters

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/mpleune/lfa_ws/ACTor_Person_Following/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/mpleune/lfa_ws/ACTor_Person_Following/build/dataspeed_can/dataspeed_can_msg_filters/catkin_generated/installspace/dataspeed_can_msg_filters.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dataspeed_can_msg_filters/cmake" TYPE FILE FILES
    "/home/mpleune/lfa_ws/ACTor_Person_Following/build/dataspeed_can/dataspeed_can_msg_filters/catkin_generated/installspace/dataspeed_can_msg_filtersConfig.cmake"
    "/home/mpleune/lfa_ws/ACTor_Person_Following/build/dataspeed_can/dataspeed_can_msg_filters/catkin_generated/installspace/dataspeed_can_msg_filtersConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dataspeed_can_msg_filters" TYPE FILE FILES "/home/mpleune/lfa_ws/ACTor_Person_Following/src/dataspeed_can/dataspeed_can_msg_filters/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/dataspeed_can_msg_filters" TYPE DIRECTORY FILES "/home/mpleune/lfa_ws/ACTor_Person_Following/src/dataspeed_can/dataspeed_can_msg_filters/include/dataspeed_can_msg_filters/")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/mpleune/lfa_ws/ACTor_Person_Following/build/dataspeed_can/dataspeed_can_msg_filters/tests/cmake_install.cmake")

endif()

