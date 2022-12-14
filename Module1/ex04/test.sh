#!/bin/bash

TEST_NUMBER="0"
DIFF_STDOUT=""

function test_str()
{
	(( TEST_NUMBER++ ))
	echo -e "Testing"  "'$1'" "ref : $TEST_NUMBER"
	./sed "$1" "$2" "$3"
	diff $4 $5 > /dev/null
	if [ "$?" -ne "1" ]
	then
		echo -e "test    : \033[32m[OK]\033[0m"
	else
		echo -e "test    : \033[31m[NOK]\033[0m"
	fi
}

test_str 'test/nonewline' '1' 'a' 'test/nonewline.replace' 'test/nonewline.true'
test_str 'test/newline' '1' 'a' 'test/newline.replace' 'test/newline.true'
test_str 'test/espace' '1 ' 'a ' 'test/espace.replace' 'test/espace.true'
test_str 'test/endl' '1
' 'a
' 'test/endl.replace' 'test/endl.true'
test_str 'test/suprrendl' '1
' 'a' 'test/suprrendl.replace' 'test/suprrendl.true'
