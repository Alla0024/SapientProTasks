<?php
    $a=readline ("Enter a:");
    $b=readline ("Enter b:");
    $c = $a;
    $sum=0;
    while ($c >= $a && $c <= $b)
    {
        $sum += $c;
        $c++;
    }
    echo "Sum: ", $sum;
