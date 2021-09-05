<?php
    $n=readline("Enter n: ");
    $b = 0;
    while ($n != 1)
    {
        if ($n % 2 == 0)
        {
            $n = $n / 2;
        }
        else
        {
            $n = $n + 1;
        }
        $b++;
    }
    echo "Number of transformations: ", $b;
