ifconfig -a | grep "ether " | awk '{printf ("%s\n", $2)}'
