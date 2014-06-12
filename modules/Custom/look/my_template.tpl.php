<?php

$a = 12;
?>

<p>
    This output received from theme template file. And those values received:
</p>
<br>
<?php

foreach ($variables["strings"] as  $value)
{ 
    
?>
<p style="color: #3098f3; background-color: #09a30b">
    <?php print $value;?>
</p>
<?php
} 




















