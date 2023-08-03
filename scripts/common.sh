#!/bin/bash

set -euo pipefail

CLEAN_BUILD=true
BUILD_DIR='build'

msg_ok() {
    printf "\033[0;32m[DONE] $@\n\033[0m"
}

msg_info() {
    printf "[INFO] $@\n"
}

msg_warn() {
    printf "\033[0;33m[WARN] $@\n\033[0m"
}

msg_err() {
    printf "\033[0;31m[ERROR] $@\n\033[0m"
    exit 1
}

msg_build_error() {
    printf "\033[0;31m[ERROR] $1 build failed.\n\033[0m"
    shift
    printf '%s\n' "$@"
    exit 1
}