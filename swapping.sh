read -p"enter a: " a
read -p"enter b: " b
echo "before swapping"
echo "a is $a"
echo "b is $b"
a=$((a-b))
b=$((a+b))
a=$((b-a))
echo "after swapping"
echo "a is $a"
echo "b is $b"
