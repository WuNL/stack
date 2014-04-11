#! /bin/bash
echo "hello"
name=wu
echo "my name is ${name}nl"
echo -e  "my \n name is \n $name"
case $name in
tom) 
	echo my name is tom;;
wu)
	echo my name is wu;;
esac

