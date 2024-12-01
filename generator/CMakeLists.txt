project(PythonQtGenerator LANGUAGES CXX)

add_subdirectory(parser)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Xml REQUIRED)

file(GLOB SOURCES *.h *.cpp *.qrc)
list(REMOVE_ITEM SOURCES "${CMAKE_CURRENT_LIST_DIR}/qtscript_masterinclude.h")

add_executable(${PROJECT_NAME})
  
target_sources(${PROJECT_NAME} PRIVATE
    ${SOURCES}
)

target_link_libraries(${PROJECT_NAME} PUBLIC
    Qt${QT_VERSION_MAJOR}::Widgets
    Qt${QT_VERSION_MAJOR}::Xml
    rxx
)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR})

# file(GLOB resources_files *.txt *.xml)
# foreach(resources_file IN LISTS resources_files)
#     configure_file(${resources_file} ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
# endforeach()

# file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/generated_cpp")

# add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
#     COMMAND set Path="%Path%;"
#     COMMAND $<TARGET_FILE:${PROJECT_NAME}>
#     WORKING_DIRECTORY $<TARGET_FILE_DIR:${PROJECT_NAME}>
# )
