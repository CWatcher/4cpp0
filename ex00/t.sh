#!/bin/zsh

# $>./megaphone "shhhhh... I think the students are asleep..."
# SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
# $>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
# DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
# $>./megaphone
# * LOUD AND UNBEARABLE FEEDBACK NOISE *
# $>

make > /dev/null && echo make ok! \
	|| exit 1

ARG='shhhhh... I think the students are asleep...'
#ARG='a'
diff <(echo '* LOUD AND UNBEARABLE FEEDBACK NOISE *') \
     <(./megaphone)                                   \
	|  cat -e \
	&& [ ${pipestatus[1]} -eq 0 ] && echo 'ok!'

diff <(echo ${ARG:u}) <(./megaphone $ARG) | cat -e \
	&& [ ${pipestatus[1]} -eq 0 ] && echo 'ok!'

diff <(echo 'SHHHHH... I THINK THE STUDENTS ARE ASLEEP...')        \
     <(./megaphone "shhhhh... I think the students are asleep...") \
	|  cat -e \
	&& [ ${pipestatus[1]} -eq 0 ] && echo 'ok!'

diff <(echo 'DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.')            \
     <(./megaphone Damnit " ! " "Sorry students, I thought this thing was off.") \
	|  cat -e \
	&& [ ${pipestatus[1]} -eq 0 ] && echo 'ok!'
