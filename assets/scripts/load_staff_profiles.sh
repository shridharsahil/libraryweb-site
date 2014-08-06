#!/bin/sh

# Wrapper shell script for drush script, mainly for convenience
# since drush requires full absolute path to data file.

if [ -n "$2" ]; then
  ALIAS=$1
  FILE=$2
else
  printf "\nUsage: $0 drush-alias datafile\n"
  printf "Example: $0 @bs staff.tsv\n"
  exit 1
fi

# Drush needs full absolute path to data file
FILE=`readlink -f ${FILE}`
# Drush script should be in same directory as this wrapper script
THIS=`readlink -f $0`
SCRIPTDIR=`dirname ${THIS}`

drush ${ALIAS} php-script ${SCRIPTDIR}/load_staff_profiles.drush ${FILE}

