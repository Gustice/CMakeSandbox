# MAKEFILE
# It is sometimes convenient to place the cmake commands inside makefile 

BUILD_DIR:=build
SOURCE_DIR:=.

# See: cmake --help
.PHONY: all
all: ${BUILD_DIR}
  cmake --build ${BUILD_DIR}

${BUILD_DIR}: CMakeLists.txt
  cmake -B "${BUILD_DIR}" -S "${SOURCE_DIR}"

.PHONY: clean
clean:
  [ -d "${BUILD_DIR}" ] && rm -r "${BUILD_DIR}"
