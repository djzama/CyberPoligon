#!/usr/bin/env ash

while :
do
	exec socat TCP-LISTEN:$LISTEN_PORT,reuseaddr,fork EXEC:'/usr/src/EyE,stderr'
done