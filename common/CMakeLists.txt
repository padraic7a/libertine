add_library(${LIBERTINE_COMMON}
    ContainerAppsList.cpp
    ContainerArchivesList.cpp
    ContainerBindMountsList.cpp
    ContainersConfig.cpp
    ContainerConfigList.cpp
    ContainerManager.cpp
    LibertineConfig.cpp
    ContainerOperationDetails.cpp
)

target_link_libraries(${LIBERTINE_COMMON} ${LIBERTINE_CORE} Qt5::Core)

install(TARGETS ${LIBERTINE_COMMON_NAME} LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
