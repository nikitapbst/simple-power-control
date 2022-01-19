cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(spower-control CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} spower-control.cpp)

install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
install(FILES xyz.openbmc_project.Chassis.Control.Power@.service DESTINATION /lib/systemd/system/)
