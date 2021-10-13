#!/bin/zsh

ARG='shhhhh... I think the students are asleep...'
#ARG='a'
diff <(echo ${ARG:u}) <(./megaphone $ARG) | cat -e \
	&& [ ${pipestatus[1]} -eq 0 ] && echo 'ok!'
