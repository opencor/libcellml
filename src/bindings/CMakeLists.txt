# Copyright libCellML Contributors
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.cmake_minimum_required (VERSION 3.1)

if(LIBCELLML_BINDINGS_PYTHON) # Or any other bindings that use SWIG.
    find_package(SWIG 3 REQUIRED)
    include(${SWIG_USE_FILE})
endif()

if(LIBCELLML_BINDINGS_PYTHON)
    add_subdirectory(python)
endif()
