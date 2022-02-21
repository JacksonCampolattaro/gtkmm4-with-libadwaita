find_package(PkgConfig)

# Include Gtkmm 4
pkg_check_modules(GTKMM gtkmm-4.0)
link_directories(${GTKMM_LIBRARY_DIRS})
include_directories(${GTKMM_INCLUDE_DIRS})

# Include LibAdwaita
pkg_check_modules(ADWAITA REQUIRED libadwaita-1)
link_directories(${ADWAITA_LIBRARY_DIRS})
include_directories(${ADWAITA_INCLUDE_DIRS})

add_executable(test main.cpp)

target_link_libraries(test PUBLIC
        ${GTKMM_LIBRARIES}
        ${ADWAITA_LIBRARIES}
        )
