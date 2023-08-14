read -p"enter num: " n
rev=0
n1=$n
while [ $n -ne 0 ]
do 
    rem=$((n%10))
    rev=$((rev*10+rem))
    n=$((n/10))
done
if((n1 == rev))
then
    echo "palindrome"
else
    echo "not  a palinddrome"
fi