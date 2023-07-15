# Copyright (c) 2018 Cisco and/or its affiliates.
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at:
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required(VERSION 3.1...3.26)

set(CMAKE_C_COMPILER_NAMES clang gcc cc)

project(vpp-hello
	VERSION 0.1
	DESCRIPTION "An example project with CMake"
	LANGUAGES CXX)

add_library(libvpp-hello
 	src/hello.cpp
  	src/hello.hpp)

add_executable(vpp-hello
  	src/main.cpp)

target_link_libraries(vpp-hello
  	PRIVATE
  	libvpp-hello)