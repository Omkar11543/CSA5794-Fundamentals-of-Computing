read -p"enter n " n
n1=$((n))
sum=0
for((i=1;i<n;i++))
do
    if(($n%$i==0))
    then
        sum=$((sum+i))
    fi
done
if(($n1==$sum))
then
    echo "perfect number"
else
    echo "not a perfect number"
fi