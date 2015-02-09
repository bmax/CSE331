<?
$a = array(4,3,5,6,1);
print_r($a);
for ($j = 1;$j<count($a);$j++)
{
  $key = $a[$j];
  $i = $j-1;
  while ($i > 0 && $a[$i] > $key)
  {
    $a[$i+1] = $a[$i];
    $i = $i - 1;
  }
  $a[$i+1] = $key;
}
print_r($a);
