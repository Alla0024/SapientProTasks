<?php
$a = readline("Enter a: ");
$b = readline("Enter b: ");
if ($a != 0 && $b != 0) {
    echo "Sum: ", pow($a, 2) + pow($b, 2), "\n";
    echo "Subtraction: ", pow($a, 2) - pow($b, 2), "\n";
    echo "Multiply: ", pow($a, 2) * pow($b, 2), "\n";
    echo "Division: ", pow($a, 2) / pow($b, 2), "\n";
} else
    echo "Num shouldn't equal to zero!";
