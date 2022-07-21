#!/bin/bash

#finds file names with specific extension in its directory and subdirectories

find . -name "*.sh" -exec basename {} ".sh" \;
