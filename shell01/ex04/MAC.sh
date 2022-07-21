#!/bin/bash

#displays your machine's MAC addresses

ifconfig | grep ether | cut -c 8- | sed 's/ //g'
