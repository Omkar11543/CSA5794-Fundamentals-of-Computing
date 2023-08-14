read -p"enter n: " n
n1=$((n))
sum=0
while [ $n -gt 0 ]
do
    rem=$((n%10))
    sum=$((sum+rem))
    n=$((n/10))
done
if((($n1 % $sum) == 0))
then
    echo "harshadh number"
else
    echo "not a harshad number"
fi