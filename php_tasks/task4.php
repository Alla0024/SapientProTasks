<?php
$a = readline("Enter year: ");
if ($a % 100 == 0) {
    echo intval($a / 100), " century";
} else
    echo intval($a / 100) + 1, " century";
