cat /etc/passwd | grep -v '^#' | awk 'NR%2==0 {print}' |cut -d : -f 1 | rev | sort -r | tr "\n" "," | awk '{print$0"."}'
