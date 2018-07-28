#!/bin/bash

##############
# Functions
##############

function execute() {
    echo "## Preparing to build $1"
    ( cd "$1" && make )
}

function traverse() {
    dir="$1"
    for entry in "$dir"/*
    do
        if [ -d "${entry}" ] ; then

            execute "$entry"

        fi
    done
}

function main() {
    traverse "$1"
}

##############
# Variables
##############
SCRIPTPATH=$(dirname "$(readlink -f "$0")")
ROOT="$(dirname "$SCRIPTPATH")"

##############
# Main
##############
main "$ROOT/src"