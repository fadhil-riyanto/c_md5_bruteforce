<?php

$str = <<<EOF
~`!@#$%^&*()-_\/\'";:,.+=<>? 
EOF;
echo addslashes($str);