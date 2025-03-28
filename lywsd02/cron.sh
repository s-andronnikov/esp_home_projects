#!/bin/bash

# task: 15 0 * * * /home/orangepi/lywsd02/runme.sh >/dev/null 2>&1

cd /home/orangepi/lywsd02 || exit 1
source .venv/bin/activate
lywsd02 sync e7:2e:00:b3:dc:97