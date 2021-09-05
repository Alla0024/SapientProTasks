<?php
    $a =readline("Enter a: ");
    $b =readline("Enter b: ");
    $c =readline("Enter c: ");
    if ($a > $c && $b > $c)
    {
        echo "Result: ", $a + $b;
    }
    else if ($a > $b && $c > $b)
    {
        echo "Result: ", $a + $c;
    }
    else
    {
        echo "Result: ", $b + $c;
    }
