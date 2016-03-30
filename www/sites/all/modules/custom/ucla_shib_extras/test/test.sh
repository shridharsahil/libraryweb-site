#!/bin/sh

SCRIPT=$0
DIR=`dirname $SCRIPT`
BASE=`(cd $DIR/.. && pwd)`
TESTDIR=$BASE/$DIR
CONFIG=$TESTDIR/drushrc.php
DRUSH="drush --config=$CONFIG"

EMAIL=example@example.com
NAME=testmenow

$DRUSH @bs user-create $NAME --mail="$EMAIL" --password="none"

DUID=`$DRUSH @bs user-information $EMAIL --fields=uid --pipe`

echo "New UID is $DUID"
export DUID

$DRUSH @bs php-eval '$user_full = user_load(getenv('DUID')); print_r($user_full);'

$DRUSH @bs user-cancel $NAME --delete-content -y
