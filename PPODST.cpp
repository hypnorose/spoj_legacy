#!/usr/bin/perl
# your code goes here
$c=<STDIN>;
$suma=0;$ile=0;
while($x = <STDIN>){
@y=split(' ',$x);
$suma+=$y[2];

$ile++;
}
print $suma/$ile;

