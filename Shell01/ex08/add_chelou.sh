FT_NBR1=12341
echo $FT_NBR1 | tr 01234 \'\\\\\"\?\!
FT_NBR2=41023
echo $FT_NBR2 | tr 01234 mrdoc
Tot_NBR=$FT_NBR1+$FT_NBR2
echo "obase=13; ibase=5;  $Tot_NBR" | bc | tr '0123456789abc' 'gtaio luSnemf'
