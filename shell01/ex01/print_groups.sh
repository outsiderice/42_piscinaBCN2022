#!/bin/bash

#displays groups which current login is a member of separated by commas with no spaces.

id -Gn $FT_USER | sed "s/ /,/g" | tr -d "\n"
