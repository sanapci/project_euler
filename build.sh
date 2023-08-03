#!/bin/bash

source scripts/common.sh

if $CLEAN_BUILD; then
    msg_info "Doing a clean build: Deleting build directory."
    rm -rf $BUILD_DIR
fi

if ! [ -d $BUILD_DIR ]; then
    mkdir $BUILD_DIR
fi

msg_info "Running CMake..."
pushd $BUILD_DIR > /dev/null
set +e
OUTPUT=$(cmake .. 2>&1);
if [ $? -ne 0 ]; then
    msg_build_error "CMake" "$OUTPUT"
fi
set -e
msg_ok "CMake finished."


msg_info "Running Make"
set +e
OUTPUT=$(make 2>&1)
if [ $? -ne 0 ]; then
    msg_build_error "Make" "$OUTPUT"
fi
set -e
msg_ok "Build finished."
